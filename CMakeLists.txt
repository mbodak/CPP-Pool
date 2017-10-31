cmake_minimum_required(VERSION 3.8)
project(CPP_Pool)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        d00/ex00/megaphone.cpp
        d00/ex01/Contact.class.cpp
        d00/ex01/Contact.class.hpp
        d00/ex01/main.cpp
        d00/ex01/Phonebook.class.cpp
        d00/ex01/Phonebook.class.hpp
        d00/main.cpp d00/ex02/Account.class.cpp)

add_executable(CPP_Pool ${SOURCE_FILES})