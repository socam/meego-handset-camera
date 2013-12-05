Name:       meego-handset-camera

# >> macros
# << macros

Summary:    Camera application
Version:    1.0.7
Release:    1
Group:      Applications/Internet
License:    MIT
Source0:    %{name}-%{version}.tar.bz2
#Requires:  pkgconfig(QtCore) >= 4.7.0
#Requires:  pkgconfig(QtGui)
#Requires:  pkgconfig(QtWebKit)
#Requires:  pkgconfig(QtOpenGL)
BuildRequires:  pkgconfig(QtCore) >= 4.7.0
BuildRequires:  pkgconfig(QtGui)
Provides:   meego-handset-camera = 1.2.3

%description
Camera application

%prep
%setup -q -n %{name}-%{version}

# >> setup
# << setup

%build
# >> build pre
# << build pre

qmake meego-handset-camera.pro
make %{?jobs:-j%jobs}

# >> build post
# << build post

%install
rm -rf %{buildroot}
# >> install pre
# << install pre
make install INSTALL_ROOT=%{buildroot}

# >> install post
# << install post

%post
# >> post

# << post

%files
%defattr(-,root,root,-)
/etc/xdg/Nokia/*
/usr/share/applications/*
/usr/bin/*



# >> files
# << files
