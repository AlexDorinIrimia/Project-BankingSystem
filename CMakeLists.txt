cmake_minimum_required(VERSION 3.10)

set(project "bankingsystem")
project(${project})

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(myfiles  include/Utilities.hpp
src/C++/Utilities.cpp
src/C++/main.cpp
src/C++/Client.cpp
include/Client.hpp
include/Account.hpp
src/C++/Account.cpp
include/Transactions.hpp
src/C++/Transactions.cpp
include/StringsSQL.hpp
src/C++/StringsSQL.cpp
src/C++/FunctionsSQL.cpp
include/FunctionsSQL.hpp)
include_directories(src)
include_directories(include)
add_library(lib STATIC ${myfiles})
add_executable(${project} src/C++/main.cpp)
target_link_libraries(${project} PUBLIC lib)
target_include_directories(${project} 
 PRIVATE src INTERFACE
	$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
	$<INSTALL_INTERFACE:include>)
