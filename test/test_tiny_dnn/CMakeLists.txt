INCLUDE_DIRECTORIES(../../include)

set(CMAKE_CXX_STANDARD 14)

SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

ADD_EXECUTABLE(demo demo.cpp)

target_link_libraries(demo pthread)