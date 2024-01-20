cmake_minimum_required(VERSION 3.15)

# Ustaw œcie¿kê do katalogu cmake/Qt6
set(CMAKE_PREFIX_PATH "C:/Qt/6.7.0/msvc2019_64/lib/cmake/Qt6")

# Dodaj œcie¿kê do modu³ów CMake
list(APPEND CMAKE_MODULE_PATH "${CMAKE_PREFIX_PATH}/lib/cmake/Qt6")

# ZnajdŸ i uwzglêdnij nag³ówki Qt Widgets
find_package(Qt6 REQUIRED COMPONENTS Widgets)
include_directories(${Qt6Widgets_INCLUDE_DIRS})

# W³¹cz obs³ugê jêzyka C i Cpp
enable_language(C)
enable_language(CXX)


# Set your project name
project(kukulator)


# Set the path to the Qt6 installation directory
set(Qt6_DIR "C:/Qt/6.7.0/msvc2019_64/lib/cmake/Qt6")
include_directories(${Qt6_DIR})

# Find and include Qt6
find_package(Qt6 REQUIRED COMPONENTS Widgets)

# Set the build type
set(CMAKE_BUILD_TYPE Debug)

# Compiler-specific settings
if(WIN32)
    set(CMAKE_CXX_FLAGS "/DWIN32 /D_WINDOWS /W3 /GR /EHsc /std:c++17 /D_UNICODE /DUNICODE")
    set(CMAKE_CXX_FLAGS_DEBUG "/MDd /Zi /Ob0 /Od /RTC1 /std:c++17 /D_UNICODE /DUNICODE")
    message("Win settings chosen...")
elseif(${CMAKE_SYSTEM_NAME} STREQUAL "Darwin")
    set(CMAKE_CXX_FLAGS "-std=c++17 -Wall")
    set(CMAKE_CXX_FLAGS_DEBUG "-g -std=c++17 -Wall")
    message("Mac settings chosen...")
elseif(UNIX)
    set(CMAKE_CXX_FLAGS "-std=c++17 -Wall")
    set(CMAKE_CXX_FLAGS_DEBUG "-g -std=c++17 -Wall")
    message("Linux settings chosen...")
endif()

# Include directories
include_directories("Header Files")

# Qt source files
file(GLOB_RECURSE QT_SOURCES "*.cpp" "*.h" "*.ui" "*.qrc")

# Create executable
add_executable(${PROJECT_NAME} ${QT_SOURCES})

# Link Qt libraries
target_link_libraries(${PROJECT_NAME} PRIVATE Qt6::Widgets)

# Set the default project
set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT ${PROJECT_NAME})

message("CMAKE_BUILD_TYPE is ${CMAKE_BUILD_TYPE}")
