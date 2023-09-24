cmake_minimum_required(VERSION 3.27.6)
project(FIX_ENGINE)

ADD_LIBRARY(FIX
    src/fix_engine/FixParser.cpp
)
target_link_libraries(FIX -lpthread)
target_link_libraries(FIX -L/build/)

add_executable(${PROJECT_NAME} main.cpp)
install(TARGETS ${PROJECT_NAME} DESTINATION bin)

target_link_libraries(${PROJECT_NAME} FIX)