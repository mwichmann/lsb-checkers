%define ver     @LSBVERSION@
%define lsbver  @TRUELSBVERSION@
# build for LSB 3.0 (bug 2327) 
%define build_target 3.0
%ifarch ppc64 s390x x86_64
%define xlib lib64
%else
%define xlib lib
%endif

# conditional parts
# uncomment %description, %package, %files to turn on lsb-dynchk
# and/or lsb-archk. Also see notes at %build and %install

Name: lsb-check
Summary: LSB Checkers
Group: Development/Tools
Version: %ver
Release: @PACKAGE_RELEASE@
License: LF
Vendor: Linux Foundation
Packager: LSB Project <lsb-discuss@linux-foundation.org>
Source: lsb-check-%ver.tar.gz
BuildRoot: %{_tmppath}/%name-root
Requires: lsb-setup
# LSB 3.0 support is different due to differing provides
# use --nodeps or install the 3.0 released package for that
Requires: lsb >= 3.1
AutoReqProv: no

%description
The LSB checkers, for apps and distros. The base package is not
built, it only provides the name for the source package.

%package -n lsb-libchk
Requires: lsb-setup
Requires: lsb >= 3.1
AutoReqProv: no
Summary: LSB library checker tool
Group: Development/Tools
%description -n lsb-libchk
lsblibchk is a system checker which looks for LSB libraries and checks that
those libraries contain the symbols required by the specification.  If it
is required that the symbol be versioned it checks that the symbol with
the correct version exists in the library. This program can be used for
checking either the runtime LSB environment or the LSB build environment.

%package -n lsb-appchk
AutoReqProv: no
Summary: low-level LSB application checker tool
Group: Development/Tools

%description -n lsb-appchk
lsbappchk is an application checker, one part of a series of checks that a
package is LSB compliant. It verifies that a supplied binary only uses
dynamically linked symbols that are either part of the LSB specification
OR in shared libraries in the optionally specified directory (this
directory and its contents would be packaged with the binary).  Note
lsb-app-checker is a higher-level interface which calls lsbappchk.

%package -n lsb-cmdchk
Requires: lsb-setup
Requires: lsb >= 3.1
AutoReqProv: no
Summary: LSB command checking tool
Group: Development/Tools

%description -n lsb-cmdchk
lsbcmdchk is a system checker which verifies that all the commands
required by the LSB specification are present. It does not check the
behaviour of those commands.

%package -n lsb-pkgchk
AutoReqProv: no
Summary: LSB package checking tool
Group: Development/Tools

%description -n lsb-pkgchk
lsbpkgchk is a package checker, one part of a series of checks that a
package is LSB compliant. It verifies that the package and its contents
conform to the specified format.  Note lsb-app-checker is a higher
level interface which may call lsbpkgchk.

#%package -n lsb-archk
#AutoReqProv: no
#Summary: LSB Archive Checking tool
#Group: Development/Tools

#%description -n lsb-archk
#lsbarchk is a development tool used to check a static archive for
#suitability to use in an LSB-compliant application. Use of non-LSB
#interfaces is flagged; the tool can be told about additional libraries
#which are to be linked as part of the final link-edit.

#%package -n lsb-dynchk
#AutoReqProv: no
#Summary: LSB Dynamic Application Checking tool
#Group: Development/Tools

#%description -n lsb-dynchk
#lsbdynchk is a run-time application checker. It is part of a series of
#checks that an application conforms to LSB requirements.  It is used
#during execution of the application to test the parameters that are
#passed to LSB interfaces, which cannot be tested statically. Since only
#actual executed code paths are tested, and this is hard to force,
#it is not a formally required compliance check.


%prep
%setup -q

%build
# For building:
# pieces to build controlled by SUBDIRS in top-level makefile
# add LSB_MODULES declarations to enable optional modules
# per-checker version strings are passed here also
LSBCC_BESTEFFORT=1 CC=/opt/lsb/bin/lsbcc CXX=/opt/lsb/bin/lsbc++ \
make \
LSBVERSION=${RPM_PACKAGE_VERSION} \
LSBLIBCHK_VERSION=${RPM_PACKAGE_VERSION}-${RPM_PACKAGE_RELEASE} \
LSBAPPCHK_VERSION=${RPM_PACKAGE_VERSION}-${RPM_PACKAGE_RELEASE} \
LSBARCHK_VERSION=${RPM_PACKAGE_VERSION}-${RPM_PACKAGE_RELEASE} \
LSBCMDCHK_VERSION=${RPM_PACKAGE_VERSION}-${RPM_PACKAGE_RELEASE} \
LSBPKGCHK_VERSION=${RPM_PACKAGE_VERSION}-${RPM_PACKAGE_RELEASE} \
LSBARCHK_VERSION=${RPM_PACKAGE_VERSION}-${RPM_PACKAGE_RELEASE}\
LSBDYNCHK_VERSION=${RPM_PACKAGE_VERSION}-${RPM_PACKAGE_RELEASE} \
all test

%install
# For installing:
# pieces to install controlled by RELEASEDIRS in top-level makefile
# also uncomment/add stanza below to copy extra files
rm -rf $RPM_BUILD_ROOT
make install DESTDIR=$RPM_BUILD_ROOT INSTALL_ROOT=/opt/lsb

# copy per-subpackage files that are not done by make install
# libchk
mkdir -p $RPM_BUILD_ROOT/opt/lsb/doc/lsb-check-lib
cp package/Licence $RPM_BUILD_ROOT/opt/lsb/doc/lsb-check-lib
cp package/README-libchk $RPM_BUILD_ROOT/opt/lsb/doc/lsb-check-lib/README

# appchk
mkdir -p $RPM_BUILD_ROOT/opt/lsb/doc/lsb-check-app
cp package/Licence $RPM_BUILD_ROOT/opt/lsb/doc/lsb-check-app
cp package/README-appchk $RPM_BUILD_ROOT/opt/lsb/doc/lsb-check-app/README

# cmdchk
mkdir -p $RPM_BUILD_ROOT/opt/lsb/doc/lsb-check-cmd
cp package/Licence $RPM_BUILD_ROOT/opt/lsb/doc/lsb-check-cmd
cp package/README-cmdchk $RPM_BUILD_ROOT/opt/lsb/doc/lsb-check-cmd/README

# pkgchk
mkdir -p $RPM_BUILD_ROOT/opt/lsb/doc/lsb-check-pkg
cp package/Licence $RPM_BUILD_ROOT/opt/lsb/doc/lsb-check-pkg
cp package/README-pkgchk $RPM_BUILD_ROOT/opt/lsb/doc/lsb-check-pkg/README

# archk
#mkdir -p $RPM_BUILD_ROOT/opt/lsb/doc/lsb-check-ar
#cp package/Licence $RPM_BUILD_ROOT/opt/lsb/doc/lsb-check-ar
#cp package/README-archk $RPM_BUILD_ROOT/opt/lsb/doc/lsb-check-ar/README

# dynchk
#mkdir -p $RPM_BUILD_ROOT/opt/lsb/doc/lsb-check-dyn
#cp package/Licence $RPM_BUILD_ROOT/opt/lsb/doc/lsb-check-dyn
#cp package/README-dynchk $RPM_BUILD_ROOT/opt/lsb/doc/lsb-check-dyn/README

%files -n lsb-libchk
%defattr(-,root,root)
/opt/lsb/bin/dummy_link*
/opt/lsb/bin/libchk
/opt/lsb/bin/lsblibchk
%dir /opt/lsb/doc/lsb-check-lib
/opt/lsb/doc/lsb-check-lib/Licence
/opt/lsb/doc/lsb-check-lib/README
/opt/lsb/man/man1/lsblibchk.1

%files -n lsb-appchk
%defattr(-,root,root)
/opt/lsb/bin/lsbappchk
%dir /opt/lsb/doc/lsb-check-app
/opt/lsb/doc/lsb-check-app/Licence
/opt/lsb/doc/lsb-check-app/README
/opt/lsb/man/man1/lsbappchk.1

%files -n lsb-cmdchk
%defattr(-,root,root)
/opt/lsb/bin/lsbcmdchk
%dir /opt/lsb/doc/lsb-check-cmd
/opt/lsb/doc/lsb-check-cmd/Licence 
/opt/lsb/doc/lsb-check-cmd/README
/opt/lsb/man/man1/lsbcmdchk.1

%files -n lsb-pkgchk
%defattr(-,root,root)
/opt/lsb/bin/lsbpkgchk
%dir /opt/lsb/doc/lsb-check-pkg
/opt/lsb/doc/lsb-check-pkg/Licence 
/opt/lsb/doc/lsb-check-pkg/README
/opt/lsb/man/man1/lsbpkgchk.1

#%files -n lsb-archk
#%defattr(-,root,root)
#/opt/lsb/bin/lsbarchk
#%dir /opt/lsb/doc/lsb-check-ar
#/opt/lsb/doc/lsb-check-ar/Licence 
#/opt/lsb/doc/lsb-check-ar/README
#/opt/lsb/man/man1/lsbarchk.1

#%files -n lsb-dynchk
#%defattr(-,root,root)
#/opt/lsb/bin/lsbdynchk
#/opt/lsb/%xlib/liblsbdynchk.so.1
#%dir /opt/lsb/doc/lsb-check-dyn
#/opt/lsb/doc/lsb-check-dyn/Licence 
#/opt/lsb/doc/lsb-check-dyn/README
#/opt/lsb/man/man1/lsbdynchk.1

%clean
rm -rf $RPM_BUILD_ROOT

%changelog
* Mon Nov  5 2012 Mats Wichmann <mats@linuxfoundation.org>
- more fiddling; comment "optional" pieces so it's clearer how to enable
* Tue Sep 25 2012 Mats Wichmann <mats@linuxfoundation.org>
- fiddled more with build - dynchk enabled
* Fri Apr 01 2011 Mats Wichmann <mats@linuxfoundation.org>
- seems to work now; set version to highest of the pkgs +1 so 4.1.2
* Sun Mar 27 2011 Mats Wichmann <mats@linuxfoundation.org>
- created from meld of multiple builds in packaging branch
