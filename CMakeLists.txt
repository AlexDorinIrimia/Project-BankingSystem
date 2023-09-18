cmake_minimum_required(VERSION 3.26)
project(Proiect_SistemBancar)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
add_executable(Proiect_SistemBancar Utilities.h
        Utilities.cpp
        main.cpp
        Client.cpp
        Client.h
        Cont.h
        Cont.cpp
        Tranzactii.h
        Tranzactii.cpp
        StringsSQL.h
        StringsSQL.cpp
        FunctionsSQL.cpp
        FunctionsSQL.h)
