## file melt-module.mk
## a -*- Makefile -*- for GNU make. 

# Copyright (C) 2009 - 2013 Free Software Foundation, Inc.
# Contributed by Basile Starynkevitch  <basile@starynkevitch.net>
# This file is part of GCC.

# GCC is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 3, or (at your option)
# any later version.

# GCC is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.

# You should have received a copy of the GNU General Public License
# along with GCC; see the file COPYING3.  If not see
# <http://www.gnu.org/licenses/>.

### should be invoked to compile MELT generated C+ files srcdir/foo*.cc
### with descriptive file srcdir/foo+meltdesc.c & timestamp file
### srcdir/foo+melttime.h, perhaps from melt-runtime.c, with
#### make -f melt-module.mk \
####    GCCMELT_MODULE_SOURCEBASE=srcdir/foo \
####    GCCMELT_MODULE_BINARYBASE=moduledir/foo \
####    GCCMELT_MODULE_WORKSPACE=/tmp \
####    GCCMELT_MODULE_FLAVOR=quicklybuilt
#### to make moduledir/foo.so 

.PHONY: melt_module melt_workspace
### See also routine compile_gencsrc_to_binmodule of melt-runtime.c


## we export all make variables 
export

## the make command should be given some GCCMELT_MODULE_VERBOSE_BUILD
## if debugging echos are needed
ifdef GCCMELT_MODULE_VERBOSE_BUILD
GCCMELT_VERBOSE_ECHO= echo
else
GCCMELT_VERBOSE_ECHO= :
endif

ifndef GCCMELT_MODULE_SOURCEBASE
$(error GCCMELT_MODULE_SOURCEBASE not defined)
endif

ifndef GCCMELT_MODULE_BINARYBASE
$(error GCCMELT_MODULE_BINARYBASE not defined)
endif

# the workspace is the directory where files are built
ifndef GCCMELT_MODULE_WORKSPACE
GCCMELT_MODULE_WORKSPACE=.
endif

# the flavor is 'optimized' or 'quicklybuilt' or 'debugnoline'
ifndef GCCMELT_MODULE_FLAVOR
$(warning GCCMELT_MODULE_FLAVOR default to optimized)
GCCMELT_MODULE_FLAVOR=optimized
endif

# the extra libraries or link flags for generated MELT modules;
# Advanced MELT users might change that...
GCCMELT_MODULE_EXTRALIBES ?= 

# check that we do have a melt descriptive source file
GCCMELT_DESC:= $(wildcard $(GCCMELT_MODULE_SOURCEBASE)+meltdesc.c)
ifeq ($(GCCMELT_DESC),)
$(error MELT descriptive file $(GCCMELT_MODULE_SOURCEBASE)+meltdesc.c does not exist)
endif

# warn if the melt time stamp file is missing
GCCMELT_TIMEF:= $(wildcard $(GCCMELT_MODULE_SOURCEBASE)+melttime.h)
ifeq ($(GCCMELT_TIMEF),)
$(warning MELT time stamp file $(GCCMELT_MODULE_SOURCEBASE)+melttime.h does not exist)
endif

## check the flavor
ifeq ($(findstring $(GCCMELT_MODULE_FLAVOR),optimized quicklybuilt debugnoline dynamic runextend),)
$(error invalid GCCMELT_MODULE_FLAVOR $(GCCMELT_MODULE_FLAVOR))
endif

### GNU awk is required
ifndef GAWK
GAWK=gawk
endif

## The md5sum command is required
MD5SUM ?= md5sum

ifndef LN_S
LN_S=ln -s
endif

## the compiler with which MELT, and the MELT modules, are used
ifndef MELTGCC
MELTGCC = $(or $(strip $(CC)),gcc)
endif

### the auto-host.h for the MELTGCC compiler
ifndef MELT_AUTOHOST_H
MELT_AUTOHOST_H = $(or $(wildcard auto-host.h),$(shell $(MELTGCC) -print-file-name=plugin/include/auto-host.h))
endif


## The C++ compiler and flags used to compile MELT generated code.
ifndef GCCMELT_COMPILER
GCCMELT_COMPILER = $(or $(strip $(CXX)),g++)
endif

GCCMELT_BASE=$(notdir $(basename $(GCCMELT_MODULE_SOURCEBASE)))
GCCMELT_SOURCEDIR=$(dir $(GCCMELT_MODULE_SOURCEBASE))

## FIXME: this probably should be autoconf-ed...
ifeq ($(strip $(shell uname)),Darwin)
GCCMELT_SHARED_FLAGS=-bundle -undefined dynamic_lookup
else
GCCMELT_SHARED_FLAGS=-shared
endif

## this may be overwritten at installation
GCCMELT_HEADER_DIR=.

## these flags should only affect the quality of the generated
## binaries. No preprocessor flags please here!
GCCMELT_OPTIMIZED_FLAGS ?= -O2 
#could add -Wc++-compat in GCCMELT_QUICKLYBUILT_FLAGS below
GCCMELT_QUICKLYBUILT_FLAGS ?= -O0 -Wall
GCCMELT_DYNAMIC_FLAGS ?= -O0
GCCMELT_DEBUGNOLINE_FLAGS ?= -g
GCCMELT_DESCRIPTOR_FLAGS ?= -O
GCCMELT_RUNEXTEND_FLAGS ?= -O0

## these flags are preprocessor flags depending upon the flavor, don't override them without reason
GCCMELT_QUICKLYBUILT_PREPROFLAGS= -DMELTGCC_MODULE_QUICKLYBUILT -DMELT_HAVE_DEBUG=1
GCCMELT_OPTIMIZED_PREPROFLAGS= -DMELTGCC_MODULE_OPTIMIZED -DMELT_HAVE_DEBUG=0   -DMELTGCC_NOLINENUMBERING
GCCMELT_DEBUGNOLINE_PREPROFLAGS= -DMELTGCC_MODULE_DEBUGNOLINE  -DMELTGCC_NOLINENUMBERING -DMELT_HAVE_DEBUG=1
GCCMELT_DYNAMIC_PREPROFLAGS= -DMELTGCC_MODULE_DYNAMIC  -DMELTGCC_NOLINENUMBERING -DMELT_HAVE_DEBUG=1  -DMELTGCC_DYNAMIC_OBJSTRUCT
GCCMELT_DESCRIPTOR_PREPROFLAGS= -DMELTGCC_MODULE_DESCRIPTOR 
GCCMELT_RUNEXTEND_PREPROFLAGS= -DMELTGCC_MODULE_RUNEXTEND   -DMELTGCC_NOLINENUMBERING  -DMELT_HAVE_DEBUG=1 

GCCMELT_PREPROFLAGS= -I $(realpath $(GCCMELT_HEADER_DIR))

## the primary C++ file
GCCMELT_PRIMARY := $(wildcard $(GCCMELT_MODULE_SOURCEBASE).cc)
ifeq ($(GCCMELT_PRIMARY),)
$(error Did not found MELT primary file $(GCCMELT_MODULE_SOURCEBASE).cc)
endif

## the md5 checksum of the primary file
GCCMELT_PRIMARYMD5:= $(shell $(MD5SUM) $(GCCMELT_PRIMARY) | $(GAWK) '{print $$1}')

## the secondary C++ files, in order
GCCMELT_SECONDARY_CFILES= $(sort $(wildcard $(GCCMELT_MODULE_SOURCEBASE)+[09]*.cc))
## the corresponding checksums
GCCMELT_SECONDARY_MD5SUMS:= $(if $(GCCMELT_SECONDARY_CFILES), \
		$(shell  $(MD5SUM) $(GCCMELT_SECONDARY_CFILES)  | $(GAWK) '{print $$1}'))

## the cumulated checksum
GCCMELT_CUMULATED_MD5 ?= $(shell cat $(GCCMELT_PRIMARY)  $(GCCMELT_SECONDARY_CFILES) | $(MD5SUM)  | $(GAWK) '{print $$1}')

## the primary object basename
GCCMELT_PRIMARY_MDSUMED_BASE:= $(basename $(notdir $(GCCMELT_PRIMARY))).$(GCCMELT_PRIMARYMD5)

## the secondary objects basenames
GCCMELT_SECONDARY_MDSUMED_BASES := $(join $(basename $(notdir $(GCCMELT_SECONDARY_CFILES))),$(addprefix .,$(GCCMELT_SECONDARY_MD5SUMS)))


ifeq ($(strip $(GCCMELT_COMPILER)),)
$(error GCCMELT_COMPILER should not be empty)
endif

################################################################
## if available, include the melt generated make fragment
ifndef GCCMELTGEN_BUILD
GCCMELTGEN_BUILD:=$(realpath $(GCCMELT_MODULE_WORKSPACE))/
#$(info GCCMELTGEN_BUILD set to $(GCCMELTGEN_BUILD))
endif

include $(GCCMELT_MODULE_SOURCEBASE)+meltbuild.mk

GCCMELT_PACKAGES_CFLAGS=$(if $(MELTGENMOD_PACKAGELIST),$(shell pkg-config --cflags $(MELTGENMOD_PACKAGELIST)))
GCCMELT_PACKAGES_LIBES=$(if $(MELTGENMOD_PACKAGELIST),$(shell pkg-config --libs $(MELTGENMOD_PACKAGELIST)))
################
## rules for meltpic.o  object files
## quicklybuilt flavor
# the generated file +meltbuild.mk contains dependency rules for this
$(GCCMELTGEN_BUILD)%.quicklybuilt.meltpic.o:
	@$(GCCMELT_VERBOSE_ECHO) @+@melt-module quicklybuilt.meltpic at= $@ left= $< question= $? \
	   caret= $^  realpathleft= $(realpath $<)
	if [ -z "$(filter %.mdsumed.cc, $(realpath $<))" ]; then \
	   $(GCCMELT_COMPILER) $(GCCMELT_QUICKLYBUILT_PREPROFLAGS) $(GCCMELT_PREPROFLAGS) \
              $(GCCMELT_QUICKLYBUILT_FLAGS) $(GCCMELT_CFLAGS) $(GCCMELT_PACKAGES_CFLAGS) \
	        -fPIC -c -o $@ $< ; \
	else \
          GCCMELTGENMDSUMEDPIC=$(GCCMELTGEN_BUILD)$(notdir $(patsubst %.mdsumed.cc,%.quicklybuilt.meltmdsumedpic.o,$(realpath $<))); \
	  $(GCCMELT_VERBOSE_ECHO) @+@melt-module quicklybuilt.meltpicmd GCCMELTGENMDSUMEDPIC=  $$GCCMELTGENMDSUMEDPIC ; \
          $(MAKE) -e -f $(filter %melt-module.mk, $(MAKEFILE_LIST)) $$GCCMELTGENMDSUMEDPIC ;  \
          $(LN_S) -v -f `realpath $$GCCMELTGENMDSUMEDPIC` $@ ; fi

$(GCCMELTGEN_BUILD)%.quicklybuilt.meltmdsumedpic.o: $(GCCMELTGEN_BUILD)%.mdsumed.cc | $(GCCMELT_MODULE_DEPENDENCIES)
	@$(GCCMELT_VERBOSE_ECHO) @+@melt-module quicklybuilt.meltmdsumedpic at= $@ left= $< \
	   question= $? caret= $^
	$(GCCMELT_COMPILER) $(GCCMELT_QUICKLYBUILT_PREPROFLAGS)  $(GCCMELT_PREPROFLAGS) \
           $(GCCMELT_QUICKLYBUILT_FLAGS) $(GCCMELT_CFLAGS)  $(GCCMELT_PACKAGES_CFLAGS) \
	   -fPIC -c -o $@ $< || \
	( echo; echo '====' recompiling $^ quicklybuilt mdsumpedpic ; \
	  $(GCCMELT_VERBOSE_ECHO) @+@melt-module quicklybuilt.meltmdsumedpic ; \
          $(GCCMELT_COMPILER) -DMELTGCC_RECOMPILE_QUICKLYBUILT -DMELTGCC_NOLINENUMBERING \
           $(GCCMELT_QUICKLYBUILT_PREPROFLAGS)  $(GCCMELT_PREPROFLAGS) \
           $(GCCMELT_QUICKLYBUILT_FLAGS) $(GCCMELT_CFLAGS)  $(GCCMELT_PACKAGES_CFLAGS) \
	   -fPIC -c -o /dev/null $< ; exit 1)

## optimized flavor
# the generated file +meltbuild.mk contains dependency rules for this
$(GCCMELTGEN_BUILD)%.optimized.meltpic.o: | $(GCCMELT_MODULE_DEPENDENCIES)
	@$(GCCMELT_VERBOSE_ECHO) @+@melt-module optimized.meltpic at= $@ left= $< \
	   question= $? caret= $^ realpathleft= $(realpath $<)
	if [ -z "$(filter %.mdsumed.cc, $(realpath $<))" ]; then \
	   $(GCCMELT_COMPILER) $(GCCMELT_OPTIMIZED_PREPROFLAGS)  $(GCCMELT_PREPROFLAGS) \
              $(GCCMELT_OPTIMIZED_FLAGS) $(GCCMELT_CFLAGS)  $(GCCMELT_PACKAGES_CFLAGS) \
	        -fPIC -c -o $@ $< ; \
	else \
          GCCMELTGENMDSUMEDPIC=$(GCCMELTGEN_BUILD)$(notdir $(patsubst %.mdsumed.cc,%.optimized.meltmdsumedpic.o,$(realpath $<))); \
	  $(GCCMELT_VERBOSE_ECHO)  @+@melt-module optimized.meltpicmd GCCMELTGENMDSUMEDPIC=  $$GCCMELTGENMDSUMEDPIC ; \
          $(MAKE) -e -f $(filter %melt-module.mk, $(MAKEFILE_LIST)) $$GCCMELTGENMDSUMEDPIC ;  \
          $(LN_S) -v -f `realpath $$GCCMELTGENMDSUMEDPIC` $@ ; fi

$(GCCMELTGEN_BUILD)%.optimized.meltmdsumedpic.o: $(GCCMELTGEN_BUILD)%.mdsumed.cc | $(GCCMELT_MODULE_DEPENDENCIES)
	@$(GCCMELT_VERBOSE_ECHO) @+@melt-module optimized.meltmdsumedpic at= $@ left= $< \
	  question= $? caret= $^
	$(GCCMELT_COMPILER)  $(GCCMELT_OPTIMIZED_PREPROFLAGS)  $(GCCMELT_PREPROFLAGS) \
           $(GCCMELT_OPTIMIZED_FLAGS) $(GCCMELT_CFLAGS)  $(GCCMELT_PACKAGES_CFLAGS) \
	   -fPIC -c -o $@ $<

## debugnoline flavor
# the generated file +meltbuild.mk contains dependency rules for this
$(GCCMELTGEN_BUILD)%.debugnoline.meltpic.o: | $(GCCMELT_MODULE_DEPENDENCIES)
	@$(GCCMELT_VERBOSE_ECHO) @+@melt-module debugnoline.meltpic at= $@ left= $< \
	   question= $? caret= $^ realpathleft= $(realpath $<)
	if [ -z "$(filter %.mdsumed.cc, $(realpath $<))" ]; then \
	   $(GCCMELT_COMPILER) $(GCCMELT_DEBUGNOLINE_PREPROFLAGS)  $(GCCMELT_PREPROFLAGS) \
              $(GCCMELT_DEBUGNOLINE_FLAGS) $(GCCMELT_CFLAGS)  $(GCCMELT_PACKAGES_CFLAGS) \
	        -fPIC -c -o $@ $< ; \
	else \
          GCCMELTGENMDSUMEDPIC=$(GCCMELTGEN_BUILD)$(notdir $(patsubst %.mdsumed.cc,%.debugnoline.meltmdsumedpic.o,$(realpath $<))); \
	  $(GCCMELT_VERBOSE_ECHO)  @+@melt-module debugnoline.meltpicmd GCCMELTGENMDSUMEDPIC=  $$GCCMELTGENMDSUMEDPIC ; \
          $(MAKE) -e -f $(filter %melt-module.mk, $(MAKEFILE_LIST)) $$GCCMELTGENMDSUMEDPIC ;  \
          $(LN_S) -v -f `realpath $$GCCMELTGENMDSUMEDPIC` $@ ; fi

$(GCCMELTGEN_BUILD)%.debugnoline.meltmdsumedpic.o: $(GCCMELTGEN_BUILD)%.mdsumed.cc | $(GCCMELT_MODULE_DEPENDENCIES)
	@$(GCCMELT_VERBOSE_ECHO) @+@melt-module debugnoline.meltmdsumedpic at= $@ left= $< \
	   question= $? caret= $^
	$(GCCMELT_COMPILER)   $(GCCMELT_DEBUGNOLINE_PREPROFLAGS)  $(GCCMELT_PREPROFLAGS) \
           $(GCCMELT_DEBUGNOLINE_FLAGS) $(GCCMELT_CFLAGS)  $(GCCMELT_PACKAGES_CFLAGS) \
	   -fPIC -c -o $@ $<


## dynamic flavor
# the generated file +meltbuild.mk contains dependency rules for this
$(GCCMELTGEN_BUILD)%.dynamic.meltpic.o: | $(GCCMELT_MODULE_DEPENDENCIES)
	@$(GCCMELT_VERBOSE_ECHO) @+@melt-module dynamic.meltpic at= $@ left= $< \
	    question= $? caret= $^ realpathleft= $(realpath $<)
	if [ -z "$(filter %.mdsumed.cc, $(realpath $<))" ]; then \
	   $(GCCMELT_COMPILER) $(GCCMELT_DYNAMIC_PREPROFLAGS)  $(GCCMELT_PREPROFLAGS) \
              $(GCCMELT_DYNAMIC_FLAGS) $(GCCMELT_CFLAGS)  $(GCCMELT_PACKAGES_CFLAGS) \
	        -fPIC -c -o $@ $< ; \
	else \
          GCCMELTGENMDSUMEDPIC=$(GCCMELTGEN_BUILD)$(notdir $(patsubst %.mdsumed.cc,%.dynamic.meltmdsumedpic.o,$(realpath $<))); \
	  $(GCCMELT_VERBOSE_ECHO)  @+@melt-module dynamic.meltpicmd GCCMELTGENMDSUMEDPIC=  $$GCCMELTGENMDSUMEDPIC ; \
          $(MAKE) -e -f $(filter %melt-module.mk, $(MAKEFILE_LIST)) $$GCCMELTGENMDSUMEDPIC ;  \
          $(LN_S) -v -f `realpath $$GCCMELTGENMDSUMEDPIC` $@ ; fi

$(GCCMELTGEN_BUILD)%.dynamic.meltmdsumedpic.o: $(GCCMELTGEN_BUILD)%.mdsumed.cc | $(GCCMELT_MODULE_DEPENDENCIES)
	@$(GCCMELT_VERBOSE_ECHO) @+@melt-module dynamic.meltmdsumedpic at= $@ left= $< \
	    question= $? caret= $^
	$(GCCMELT_COMPILER) $(GCCMELT_DYNAMIC_PREPROFLAGS)  $(GCCMELT_PREPROFLAGS) \
           $(GCCMELT_DEBUGNOLINE_FLAGS) $(GCCMELT_CFLAGS)  $(GCCMELT_PACKAGES_CFLAGS) \
	   -fPIC -c -o $@ $<




## runextend flavor
$(GCCMELTGEN_BUILD)%.runextend.meltpic.o: | $(GCCMELT_MODULE_DEPENDENCIES)
	@$(GCCMELT_VERBOSE_ECHO) @+@melt-module runextend.meltpic at= $@ left= $< \
	    question= $? caret= $^ realpathleft= $(realpath $<)
	if [ -z "$(filter %.mdsumed.cc, $(realpath $<))" ]; then \
	   $(GCCMELT_COMPILER) $(GCCMELT_RUNEXTEND_PREPROFLAGS)  $(GCCMELT_PREPROFLAGS) \
              $(GCCMELT_RUNEXTEND_FLAGS) $(GCCMELT_CFLAGS)  $(GCCMELT_PACKAGES_CFLAGS) \
	        -fPIC -c -o $@ $< ; \
	else \
          GCCMELTGENMDSUMEDPIC=$(GCCMELTGEN_BUILD)$(notdir $(patsubst %.mdsumed.cc,%.runextend.meltmdsumedpic.o,$(realpath $<))); \
	  $(GCCMELT_VERBOSE_ECHO)  @+@melt-module runextend.meltpicmd GCCMELTGENMDSUMEDPIC=  $$GCCMELTGENMDSUMEDPIC ; \
          $(MAKE) -e -f $(filter %melt-module.mk, $(MAKEFILE_LIST)) $$GCCMELTGENMDSUMEDPIC ;  \
          $(LN_S) -v -f `realpath $$GCCMELTGENMDSUMEDPIC` $@ ; fi

$(GCCMELTGEN_BUILD)%.runextend.meltmdsumedpic.o: $(GCCMELTGEN_BUILD)%.mdsumed.cc | $(GCCMELT_MODULE_DEPENDENCIES)
	@$(GCCMELT_VERBOSE_ECHO) @+@melt-module runextend.meltmdsumedpic at= $@ left= $< \
	    question= $? caret= $^
	$(GCCMELT_COMPILER) $(GCCMELT_RUNEXTEND_PREPROFLAGS)  $(GCCMELT_PREPROFLAGS) \
           $(GCCMELT_RUNEXTEND_FLAGS) $(GCCMELT_CFLAGS)  $(GCCMELT_PACKAGES_CFLAGS) \
	   -fPIC -c -o $@ $<



################

## descriptor quasi-flavor, never symlinked!
# the generated file +meltbuild.mk contains dependency rules for this
$(GCCMELTGEN_BUILD)%.descriptor.meltpic.o: | $(GCCMELT_MODULE_DEPENDENCIES)
	@$(GCCMELT_VERBOSE_ECHO) @+@melt-module descriptor.meltpic at= $@ left= $< \
	    question= $? caret= $^
	$(GCCMELT_COMPILER) $(GCCMELT_DESCRIPTOR_PREPROFLAGS)  $(GCCMELT_PREPROFLAGS) \
          $(GCCMELT_DESCRIPTOR_FLAGS) $(GCCMELT_CFLAGS)  \
	   -fPIC -c -o $@ $<


################################################################
## linking the module in various flavors
$(GCCMELTGEN_BUILD)$(GCCMELT_BASE).meltmod-%.quicklybuilt.so: 
	@$(GCCMELT_VERBOSE_ECHO) @+@melt-module meltmod.quicklybuilt at= $@ left= $< question= $? caret= $^
	$(GCCMELT_COMPILER) $(GCCMELT_QUICKLYBUILT_FLAGS) $(GCCMELT_SHARED_FLAGS) -o $@ $^ $(GCCMELT_PACKAGES_LIBES)

$(GCCMELTGEN_BUILD)$(GCCMELT_BASE).meltmod-%.optimized.so: 
	@$(GCCMELT_VERBOSE_ECHO) @+@melt-module meltmod.optimized at= $@ left= $< question= $? caret= $^
	$(GCCMELT_COMPILER) $(GCCMELT_OPTIMIZED_FLAGS) $(GCCMELT_SHARED_FLAGS) -o $@ $^ $(GCCMELT_PACKAGES_LIBES)

$(GCCMELTGEN_BUILD)$(GCCMELT_BASE).meltmod-%.debugnoline.so: 
	@$(GCCMELT_VERBOSE_ECHO) @+@melt-module meltmod.debugnoline at= $@ left= $< question= $? caret= $^
	$(GCCMELT_COMPILER) $(GCCMELT_DEBUGNOLINE_FLAGS) $(GCCMELT_SHARED_FLAGS) -o $@ $^ $(GCCMELT_PACKAGES_LIBES)

$(GCCMELTGEN_BUILD)$(GCCMELT_BASE).meltmod-%.dynamic.so: 
	@$(GCCMELT_VERBOSE_ECHO) @+@melt-module meltmod.dynamic at= $@ left= $< question= $? caret= $^
	$(GCCMELT_COMPILER) $(GCCMELT_DYNAMIC_FLAGS) $(GCCMELT_SHARED_FLAGS) -o $@ $^ $(GCCMELT_PACKAGES_LIBES)


$(GCCMELTGEN_BUILD)$(GCCMELT_BASE).meltmod-%.runextend.so: 
	@$(GCCMELT_VERBOSE_ECHO) @+@melt-module meltmod.runextend at= $@ left= $< question= $? caret= $^
	$(GCCMELT_COMPILER) $(GCCMELT_RUNEXTEND_FLAGS) $(GCCMELT_SHARED_FLAGS) -o $@ $^ $(GCCMELT_PACKAGES_LIBES)



################
ifneq ($(realpath $(GCCMELTGEN_BUILD)),$(realpath $(dir $(GCCMELT_MODULE_BINARYBASE))))
#$(info here.aa.GCCMELTGEN_BUILD=$(GCCMELTGEN_BUILD) real= $(realpath $(GCCMELTGEN_BUILD)) GCCMELT_MODULE_BINARYBASE=$(GCCMELT_MODULE_BINARYBASE) realdir= $(realpath $(dir $(GCCMELT_MODULE_BINARYBASE))) dir= $(dir $(GCCMELT_MODULE_BINARYBASE)) GCCMELT_CUMULATED_MD5=$(GCCMELT_CUMULATED_MD5))
$(GCCMELT_MODULE_BINARYBASE).meltmod-$(GCCMELT_CUMULATED_MD5).$(GCCMELT_MODULE_FLAVOR).so: \
  $(GCCMELTGEN_BUILD)$(notdir $(GCCMELT_MODULE_BINARYBASE).meltmod-$(GCCMELT_CUMULATED_MD5).$(GCCMELT_MODULE_FLAVOR).so)
	@$(GCCMELT_VERBOSE_ECHO) @+@melt-module symlinkmodule at= $@ circ= $^ left= $< monster= $(GCCMELTGEN_BUILD)$(notdir $(GCCMELT_MODULE_BINARYBASE).meltmod-$(GCCMELT_CUMULATED_MD5).$(GCCMELT_MODULE_FLAVOR).so)
	$(LN_S) -v -f $(realpath $(GCCMELTGEN_BUILD)$(notdir $(GCCMELT_MODULE_BINARYBASE).meltmod-$(GCCMELT_CUMULATED_MD5).$(GCCMELT_MODULE_FLAVOR).so))  $@
else
#$(info here.ab.GCCMELTGEN_BUILD=$(GCCMELTGEN_BUILD) really $(realpath $(GCCMELTGEN_BUILD)) same as dir of GCCMELT_MODULE_BINARYBASE= $(GCCMELT_MODULE_BINARYBASE) GCCMELT_CUMULATED_MD5=$(GCCMELT_CUMULATED_MD5))
endif

################################################################
melt_module: melt_workspace $(GCCMELT_MODULE_BINARYBASE).meltmod-$(GCCMELT_CUMULATED_MD5).$(GCCMELT_MODULE_FLAVOR).so

melt_workspace: 
	@$(GCCMELT_VERBOSE_ECHO) @+@melt-module workspace $(GCCMELT_MODULE_WORKSPACE)  GCCMELT_PRIMARY_MDSUMED_BASE= $(GCCMELT_PRIMARY_MDSUMED_BASE) GCCMELT_SECONDARY_MDSUMED_BASES= $(GCCMELT_SECONDARY_MDSUMED_BASES) GCCMELT_MODULE_SOURCEBASE= $(GCCMELT_MODULE_SOURCEBASE) GCCMELTGEN_BUILD= $(GCCMELTGEN_BUILD) GCCMELT_CFLAGS= $(GCCMELT_CFLAGS) GCCMELT_MODULE_FLAVOR= $(GCCMELT_MODULE_FLAVOR)
	[ -d $(GCCMELT_MODULE_WORKSPACE) ] || mkdir -p $(GCCMELT_MODULE_WORKSPACE)

## eof melt-module.mk

