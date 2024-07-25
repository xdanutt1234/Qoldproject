cmake_minimum_required(VERSION 3.5)
project(MyQtProject LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

set(CMAKE_AUTOMOC ON)  # Enable automoc
set(CMAKE_AUTORCC ON)  # Enable autorcc (if you have Qt resources)
set(CMAKE_AUTOUIC ON)  # Enable autouic (if you have UI files)

add_executable(MyQtProject
    main.cpp
    mainwindow.cpp
    mainwindow.h  # Add this to ensure moc run
    controllerTest/QoldControl.cpp
    controllerTest/QoldControl.h
)

target_link_libraries(MyQtProject Qt5::Widgets)
target_link_libraries(MyQtProject wiringPi)
