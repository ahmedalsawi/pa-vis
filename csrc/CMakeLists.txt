cmake_minimum_required (VERSION 2.6)
set(PROJECT_NAME upfvis)
project (${PROJECT_NAME} CXX C)


include_directories("${PROJECT_SOURCE_DIR}/src")
include_directories("/usr/include/tcl8.6")

add_executable(upfvis src/upfvis.cc)

install (TARGETS upfvis DESTINATION ${CMAKE_INSTALL_PREFIX}/bin)