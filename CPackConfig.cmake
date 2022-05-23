# This file will be configured to contain variables for CPack. These variables
# should be set in the CMake list file of the project before CPack module is
# included. The list of available CPACK_xxx variables and their associated
# documentation may be obtained using
#  cpack --help-variable-list
#
# Some variables are common to all generators (e.g. CPACK_PACKAGE_NAME)
# and some are specific to a generator
# (e.g. CPACK_NSIS_EXTRA_INSTALL_COMMANDS). The generator specific variables
# usually begin with CPACK_<GENNAME>_xxxx.


set(CPACK_BUILD_SOURCE_DIRS "/home/defaultuser/Downloads/tmp/cantata-2.4.1;/home/defaultuser/Downloads/tmp/cantata-2.4.1")
set(CPACK_CMAKE_GENERATOR "Unix Makefiles")
set(CPACK_COMPONENTS_ALL "")
set(CPACK_COMPONENT_UNSPECIFIED_HIDDEN "TRUE")
set(CPACK_COMPONENT_UNSPECIFIED_REQUIRED "TRUE")
set(CPACK_DEBIAN_PACKAGE_SHLIBDEPS "ON")
set(CPACK_DEFAULT_PACKAGE_DESCRIPTION_FILE "/usr/share/cmake/Templates/CPack.GenericDescription.txt")
set(CPACK_DEFAULT_PACKAGE_DESCRIPTION_SUMMARY "cantata built using CMake")
set(CPACK_GENERATOR "DEB;RPM;TBZ2")
set(CPACK_INSTALL_CMAKE_PROJECTS "/home/defaultuser/Downloads/tmp/cantata-2.4.1;cantata;ALL;/")
set(CPACK_INSTALL_PREFIX "/usr")
set(CPACK_MODULE_PATH "/home/defaultuser/Downloads/tmp/cantata-2.4.1/cmake")
set(CPACK_NSIS_DISPLAY_NAME "cantata 2.4.1")
set(CPACK_NSIS_INSTALLER_ICON_CODE "")
set(CPACK_NSIS_INSTALLER_MUI_ICON_CODE "")
set(CPACK_NSIS_INSTALL_ROOT "$PROGRAMFILES")
set(CPACK_NSIS_PACKAGE_NAME "cantata 2.4.1")
set(CPACK_NSIS_UNINSTALL_NAME "Uninstall")
set(CPACK_OUTPUT_CONFIG_FILE "/home/defaultuser/Downloads/tmp/cantata-2.4.1/CPackConfig.cmake")
set(CPACK_PACKAGE_CONTACT "Craig Drummond <craig.p.drummond@gmail.com>")
set(CPACK_PACKAGE_DEFAULT_LOCATION "/")
set(CPACK_PACKAGE_DESCRIPTION_FILE "/home/defaultuser/Downloads/tmp/cantata-2.4.1/README")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "Qt Client for MPD")
set(CPACK_PACKAGE_FILE_NAME "cantata-2.4.1")
set(CPACK_PACKAGE_INSTALL_DIRECTORY "cantata 2.4.1")
set(CPACK_PACKAGE_INSTALL_REGISTRY_KEY "cantata 2.4.1")
set(CPACK_PACKAGE_NAME "cantata")
set(CPACK_PACKAGE_RELOCATABLE "true")
set(CPACK_PACKAGE_VENDOR "Humanity")
set(CPACK_PACKAGE_VERSION "2.4.1")
set(CPACK_PACKAGE_VERSION_MAJOR "2")
set(CPACK_PACKAGE_VERSION_MINOR "4")
set(CPACK_PACKAGE_VERSION_PATCH "1")
set(CPACK_PACKAGE_VERSION_SPIN "")
set(CPACK_RESOURCE_FILE_LICENSE "/usr/share/cmake/Templates/CPack.GenericLicense.txt")
set(CPACK_RESOURCE_FILE_README "/usr/share/cmake/Templates/CPack.GenericDescription.txt")
set(CPACK_RESOURCE_FILE_WELCOME "/usr/share/cmake/Templates/CPack.GenericWelcome.txt")
set(CPACK_SET_DESTDIR "OFF")
set(CPACK_SOURCE_GENERATOR "TBZ2")
set(CPACK_SOURCE_IGNORE_FILES "/.svn/;/.git/;.gitignore;.github/;.project;CMakeLists.txt.user;README.md;/screenshots/")
set(CPACK_SOURCE_OUTPUT_CONFIG_FILE "/home/defaultuser/Downloads/tmp/cantata-2.4.1/CPackSourceConfig.cmake")
set(CPACK_SOURCE_PACKAGE_FILE_NAME "cantata-2.4.1")
set(CPACK_SYSTEM_NAME "Linux")
set(CPACK_TOPLEVEL_TAG "Linux")
set(CPACK_WIX_SIZEOF_VOID_P "8")

if(NOT CPACK_PROPERTIES_FILE)
  set(CPACK_PROPERTIES_FILE "/home/defaultuser/Downloads/tmp/cantata-2.4.1/CPackProperties.cmake")
endif()

if(EXISTS ${CPACK_PROPERTIES_FILE})
  include(${CPACK_PROPERTIES_FILE})
endif()
