cmake_minimum_required(VERSION 3.8)
project(CPP)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES ex00/megaphone.cpp ex01/Contact.class.cpp ex01/Contact.class.hpp ex01/main.cpp ex01/Phonebook.class.cpp ex01/Phonebook.class.hpp)
add_executable(CPP ${SOURCE_FILES})