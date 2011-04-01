# This build is different than most: subpackages of $PACKAGE are built,
# but $PACKAGE is not, so the normal $FULL_PACKAGE_NAME logic of most
# LSB package makefiles is partly bogus here - it works for the
# tarball/srpm, and is used for build directory name, but does not
# name packages
# Also, for simplicity, the dpkg building, which we never use, is dropped
PACKAGE=lsb-check
BZR_MODULE=misc-test

# Release number of package relative to specification version
# Should have leading "."
SUB_VERSION=.4

# We define this here instead of directly in the spec file as
# we need to be able to work out what the produced rpm files will be called
RPM_PACKAGE_RELEASE=1

# Derive date string for daily snapshots
ISO_DATE:=$(shell date +"%Y%m%d")
PWD:=$(shell pwd)

# Initialize LIB64 to proper value for 64-bit architectures
export LIB64:=$(shell case `uname -m` in (ppc64 | s390x | x86_64) echo 64 ;; esac)

# Derive names of various entities to be used
RPM_BUILD_ROOT=$(HOME)/tmp/$(FULL_PACKAGE_NAME)
TMP_BUILD_DIR=$(HOME)/tmp/$(FULL_PACKAGE_NAME)

FULL_PACKAGE_NAME=$(PACKAGE)-$(LSBVERSION)$(SUB_VERSION)$(VERSION_SUFFIX)
FULL_PACKAGE_LIB=lsb-libchk-$(LSBVERSION)$(SUB_VERSION)$(VERSION_SUFFIX)
FULL_PACKAGE_APP=lsb-appchk-$(LSBVERSION)$(SUB_VERSION)$(VERSION_SUFFIX)
FULL_PACKAGE_CMD=lsb-cmdchk-$(LSBVERSION)$(SUB_VERSION)$(VERSION_SUFFIX)
FULL_PACKAGE_PKG=lsb-pkgchk-$(LSBVERSION)$(SUB_VERSION)$(VERSION_SUFFIX)
FULL_PACKAGE_AR =lsb-archk-$(LSBVERSION)$(SUB_VERSION)$(VERSION_SUFFIX)
FULL_PACKAGE_DYN=lsb-dynchk-$(LSBVERSION)$(SUB_VERSION)$(VERSION_SUFFIX)

FULL_PACKAGE_NAME_CLEAN=$(PACKAGE)-$(LSBVERSION)$(SUB_VERSION)*
FULL_PACKAGE_NAME_LIB=lsb-libchk-$(LSBVERSION)$(SUB_VERSION)*
FULL_PACKAGE_NAME_APP=lsb-appchk-$(LSBVERSION)$(SUB_VERSION)*
FULL_PACKAGE_NAME_CMD=lsb-cmdchk-$(LSBVERSION)$(SUB_VERSION)*
FULL_PACKAGE_NAME_PKG=lsb-pkgchk-$(LSBVERSION)$(SUB_VERSION)*
FULL_PACKAGE_NAME_AR =lsb-archk-$(LSBVERSION)$(SUB_VERSION)*
FULL_PACKAGE_NAME_DYN=lsb-dynchk-$(LSBVERSION)$(SUB_VERSION)*

TARBALL=$(FULL_PACKAGE_NAME).tar.gz

RPM_BINARY_LIB=$(FULL_PACKAGE_LIB)-$(RPM_PACKAGE_RELEASE).$(RPM_BUILD_ARCH).rpm
RPM_BINARY_APP=$(FULL_PACKAGE_APP)-$(RPM_PACKAGE_RELEASE).$(RPM_BUILD_ARCH).rpm
RPM_BINARY_CMD=$(FULL_PACKAGE_CMD)-$(RPM_PACKAGE_RELEASE).$(RPM_BUILD_ARCH).rpm
RPM_BINARY_PKG=$(FULL_PACKAGE_PKG)-$(RPM_PACKAGE_RELEASE).$(RPM_BUILD_ARCH).rpm
RPM_BINARY_AR=$(FULL_PACKAGE_AR)-$(RPM_PACKAGE_RELEASE).$(RPM_BUILD_ARCH).rpm
RPM_BINARY_DYN=$(FULL_PACKAGE_DYN)-$(RPM_PACKAGE_RELEASE).$(RPM_BUILD_ARCH).rpm
RPM_SOURCE_NAME=$(FULL_PACKAGE_NAME)-$(RPM_PACKAGE_RELEASE).src.rpm

# Handle different version generation for daily snapshots
# than for official ones
# OFFICIAL_RELEASE should be set to the tag to extract from CVS
ifdef OFFICIAL_RELEASE
VERSION_SUFFIX=
# EXPORT_TAG should be set to the bzr tag to use
EXPORT_TAG=--revision=$(OFFICIAL_RELEASE)
ifndef SKIP_DEVEL_VERSIONS
SKIP_DEVEL_VERSIONS=yes
endif
else
VERSION_SUFFIX=.$(ISO_DATE)
EXPORT_TAG=
endif

# Supply default LSBVERSION (Version of lsb spec against which it is built)
LSBVERSION=4.0

# Get value of RPM_PACKAGE_VERSION from LSBVERSION.
RPM_PACKAGE_VERSION=$(LSBVERSION)

# Get RPM configuration information
# NOTE THAT RPM_TMP_BUILD_DIR IS DELETED AFTER THE RPM BUILD IS COMPLETED
# The rpmrc file translates targets where there are multiple choices per
# architecture. On build, the derived RPM_BUILD_ARCH is given as the target
RCFILELIST="/usr/lib/rpm/rpmrc:./rpmrc"
MACROFILELIST="/usr/lib/rpm/macros:/etc/rpm:~/.rpmmacros:./rpmmacros"
RPM_TMP_BUILD_DIR=$(HOME)/tmp/rpm-build
RPM_BUILD_ARCH:=$(shell rpm --rcfile ${RCFILELIST} --eval=%{_target_cpu})
RPM_BINARY_DIR=$(RPM_TMP_BUILD_DIR)/RPMS/$(RPM_BUILD_ARCH)
RPM_SRPM_DIR=$(RPM_TMP_BUILD_DIR)/SRPMS

# Determine whether to use rpm -ba or rpmbuild to build the packages
ifeq ($(wildcard /usr/bin/rpmbuild),)
	RPM_BUILD_CMD=rpm
else
	RPM_BUILD_CMD=rpmbuild 
endif

# Root for bzr branches, only used if BZR_ROOT not already set
# during transition, accept old value, BZR_ROOT
ifndef BZRTREES
ifdef BZR_ROOT
export BZRTREES=$(BZR_ROOT)
else
export BZRTREES=http://bzr.linuxfoundation.org/lsb/devel
endif
endif

# Default target
all: rpm_package

# If OFFICIAL_RELEASE has changed value since last time we compiled or 
# the date has changed in case of a snapshot we need to regenerate
# the configuration files to get the correct version information
CURRENT_CONFIG=$(LSBVERSION)$(SUB_VERSION)$(VERSION_SUFFIX)-$(RPM_PACKAGE_RELEASE)
.need_config_update: 
	if test ! -e .need_config_update || test $(CURRENT_CONFIG) != `cat .need_config_update`; \
	  then echo $(CURRENT_CONFIG) > .need_config_update; \
	fi


tarball: $(TARBALL) 

# Rules to build rpms
# Specfile generation rule
%.spec : %.spec.sed Makefile .need_config_update
	sed -e "s#@LSBVERSION@#`echo $(LSBVERSION)$(SUB_VERSION)$(VERSION_SUFFIX)`#" -e "s#@PACKAGE_RELEASE@#`echo $(RPM_PACKAGE_RELEASE)`#" < $< > $@

rpm_package: $(RPM_BINARY_LIB)

$(RPM_BINARY_LIB) $(RPM_SOURCE_NAME): $(PACKAGE).spec $(TARBALL) 
	@mkdir -p $(RPM_TMP_BUILD_DIR)/BUILD
	@mkdir -p $(RPM_TMP_BUILD_DIR)/RPMS
	@mkdir -p $(RPM_TMP_BUILD_DIR)/SRPMS
ifdef SIGN_PACKAGES
	@expect -c 'set timeout -1' -c 'spawn $(RPM_BUILD_CMD) --sign --rcfile ${RCFILELIST} --macros=$(MACROFILELIST) --define=_sourcedir\ $(PWD) --define=buildroot\ $(RPM_BUILD_ROOT) --define=_topdir\ $(RPM_TMP_BUILD_DIR) --define=_target_cpu\ $(RPM_BUILD_ARCH) -ba $(PACKAGE).spec' -c 'expect -ex "Enter pass phrase:"' -c 'send "\n"' -c 'expect "Executing(%clean)"' -c 'expect "exit 0"' -c 'send "\n"'
else
	@$(RPM_BUILD_CMD) --rcfile ${RCFILELIST} --macros=$(MACROFILELIST) --define="_sourcedir $(PWD)" --define=buildroot\ $(RPM_BUILD_ROOT) --define="_topdir $(RPM_TMP_BUILD_DIR)" --define="_target_cpu $(RPM_BUILD_ARCH)" -ba $(PACKAGE).spec
endif
	@cp $(RPM_BINARY_DIR)/$(RPM_BINARY_LIB) .
	@cp $(RPM_BINARY_DIR)/$(RPM_BINARY_APP) .
	@cp $(RPM_BINARY_DIR)/$(RPM_BINARY_CMD) .
	@cp $(RPM_BINARY_DIR)/$(RPM_BINARY_PKG) .
	@cp $(RPM_SRPM_DIR)/$(RPM_SOURCE_NAME) .
	@rm -rf $(RPM_TMP_BUILD_DIR)

# Rules to build deb packages
deb_package: $(RPM_BINARY_CC)
	@fakeroot alien -dck $(RPM_BINARY_LIB)
	@fakeroot alien -dck $(RPM_BINARY_APP)
	@fakeroot alien -dck $(RPM_BINARY_CMD)
	@fakeroot alien -dck $(RPM_BINARY_PKG)

# List files that should be uploaded to ftp server for snapshots
list_uploadable:
	@echo $(RPM_BINARY_LIB) $(RPM_BINARY_APP) $(RPM_BINARY_CMD) $(RPM_BINARY_PKG)
ifdef LIST_SOURCE_FILES
	@echo $(RPM_SOURCE_NAME) $(TARBALL) 
endif

# Default test target
test:

gensrc:

clean:
	rm -f $(PACKAGE).spec
	rm -f $(FULL_PACKAGE_NAME_CLEAN).tar.gz
	rm -f $(FULL_PACKAGE_NAME_CLEAN).src.rpm
	rm -f $(FULL_PACKAGE_NAME_LIB).rpm
	rm -f $(FULL_PACKAGE_NAME_APP).rpm
	rm -f $(FULL_PACKAGE_NAME_CMD).rpm
	rm -f $(FULL_PACKAGE_NAME_PKG).rpm

distclean: clean

.PHONY: check_config deb_package .need_config_update

# current version of this rule depends on not needing to change 
# what's grabbed from version control, let bzr make the tarball
$(TARBALL):
	echo "FULL_PACKAGE_NAME=$(FULL_PACKAGE_NAME)"
	bzr export $(EXPORT_TAG) $(TARBALL) $(BZRTREES)/$(BZR_MODULE)

.PHONY : tarball rpm_package
