%define ver     4.1.9
%define lsbver  4.1.9
%ifarch ppc64 s390x x86_64
%define xlib lib64
%else
%define xlib lib
%endif

Name: lsb-dyncheck
Summary: LSB DynChk
Group: Development/Tools
Version: %ver
Release: 1
License: LF
Vendor: Linux Foundation
Packager: LSB Project <lsb-discuss@linux-foundation.org>
Source: lsb-dyncheck-%ver.tar.gz
BuildRoot: %{_tmppath}/%name-root
Requires: lsb-setup
Requires: lsb >= 3.1
AutoReqProv: no

Summary: LSB Dynamic Application Checking tool
Group: Development/Tools

%description
lsbdynchk is an application checker, one part of a series of checks
that a application is LSB compliant. It is used during execution of the
application to test the parameters that are passed to LSB interfaces.

%prep
%setup -q

%build
LSBCC_BESTEFFORT=1 CC=/opt/lsb/bin/lsbcc CXX=/opt/lsb/bin/lsbc++ make

%install
rm -rf $RPM_BUILD_ROOT
make install INSTALL_ROOT=$RPM_BUILD_ROOT/opt/lsb LIBDIR=%xlib

# dynchk
mkdir -p $RPM_BUILD_ROOT/opt/lsb/doc/lsb-check-dyn
cp package/Licence $RPM_BUILD_ROOT/opt/lsb/doc/lsb-check-dyn
cp package/README-dynchk $RPM_BUILD_ROOT/opt/lsb/doc/lsb-check-dyn/README

%files
%defattr(-,root,root)
/opt/lsb/bin/lsbdynchk
%dir /opt/lsb/doc/lsb-check-pkg
/opt/lsb/doc/lsb-check-dyn/Licence 
/opt/lsb/doc/lsb-check-dyn/README
/opt/lsb/%xlib/dynchk/liblsbdynchk.so.1
/opt/lsb/man/man1/lsbdynchk.1

%clean
rm -rf $RPM_BUILD_ROOT

%changelog
