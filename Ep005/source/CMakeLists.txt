cmake_minimum_required(VERSION 3.5)

set(CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 20)

project(HelloApp 
        VERSION 0.0.1
        DESCRIPTION "The leading Hello World App"
        LANGUAGES CXX)

#Target
add_library(operations STATIC src/operations.cpp)
target_include_directories(operations PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)


add_library(dogger STATIC ${CMAKE_CURRENT_SOURCE_DIR}/Dogger/src/dog.cpp)
target_include_directories(dogger PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/Dogger/include)


add_executable(HelloAppBinary main.cpp)
target_include_directories(HelloAppBinary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(HelloAppBinary PUBLIC operations dogger)