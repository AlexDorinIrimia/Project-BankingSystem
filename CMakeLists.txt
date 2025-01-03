cmake_minimum_required(VERSION 3.26)
project(Project_BankingSystem)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
add_executable(Project_BankingSystem Utilities.hpp
        Utilities.cpp
        main.cpp
        Client.cpp
        Client.hpp
        Account.hpp
        Account.cpp
        Transactions.hpp
        Transactions.cpp
        StringsSQL.hpp
        StringsSQL.cpp
        FunctionsSQL.cpp
        FunctionsSQL.hpp)
