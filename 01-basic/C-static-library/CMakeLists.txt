cmake_minimum_required(VERSION 3.5)

project (hello_static_library)

############################################################
# Create a library
############################################################

#Generate the static library from the library sources
add_library(
    hello_static_library STATIC
    source_code/src/Hello.cpp
)

target_include_directories(
    hello_static_library
    PUBLIC
        ${PROJECT_SOURCE_DIR}/source_code/include
)

############################################################
# Create an executable
############################################################

# Add an executable with the above sources
add_executable(
    hello_binary
    source_code/src/main.cpp
)

# link the new hello_library target with the hello_binary target
target_link_libraries(
    hello_binary
    PRIVATE
        hello_static_library
)