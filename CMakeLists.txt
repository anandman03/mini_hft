cmake_minimum_required(VERSION 3.27.6)
project(FIX_ENGINE)

ADD_LIBRARY(FIX
    src/fix_engine/FixParser.cpp
)
target_link_libraries(FIX -L${PROJECT_SOURCE_DIR}/build/)

ADD_LIBRARY(ORDER_BOOK
    src/order_book/OrderBook.cpp
)
target_link_libraries(ORDER_BOOK -L${PROJECT_SOURCE_DIR}/build/)

add_executable(${PROJECT_NAME} main.cpp)
install(TARGETS ${PROJECT_NAME} DESTINATION bin)

target_link_libraries(${PROJECT_NAME} FIX)
target_link_libraries(${PROJECT_NAME} ORDER_BOOK)