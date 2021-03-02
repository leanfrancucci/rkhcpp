cmake_minimum_required(VERSION 3.6)
project(mix LANGUAGES C CXX)

set(FOO_CFG_FILE_PATH "src")

include(CMakePrintHelpers)

# The compiled library code is here
add_subdirectory(third-party/foo)

# The exucutable code is here
add_executable(${PROJECT_NAME} 
               src/main.cpp 
               src/foocfg.h 
               src/hello/src/hello.cpp)
target_include_directories(${PROJECT_NAME} PRIVATE 
                           ${PROJECT_SOURCE_DIR}/src/hello/inc)
target_link_libraries(${PROJECT_NAME} PRIVATE foolib)
