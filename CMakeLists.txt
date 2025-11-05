cmake_minimum_required(VERSION 3.20)
project(todo LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Build static SFML (no DLLs)
set(BUILD_SHARED_LIBS OFF CACHE BOOL "" FORCE)
set(SFML_STATIC_LIBRARIES TRUE)
set(SFML_SKIP_COPYING_DEPENDENCIES TRUE)

include(FetchContent)
FetchContent_Declare(
        sfml
        GIT_REPOSITORY https://github.com/SFML/SFML.git
        GIT_TAG 2.6.1
)
FetchContent_MakeAvailable(sfml)

add_executable(todo main.cpp
        task.h
        task.cpp
        window.cpp)

# Link with SFML libraries (CMake knows they’re static because of SFML_STATIC_LIBRARIES)
target_link_libraries(todo PRIVATE sfml-graphics sfml-window sfml-system)

# (Optional) Include SFML headers explicitly for safety
FetchContent_GetProperties(sfml)
if(sfml_SOURCE_DIR)
    target_include_directories(todo PRIVATE "${sfml_SOURCE_DIR}/include")
endif()
