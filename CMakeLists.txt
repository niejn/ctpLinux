cmake_minimum_required(VERSION 3.7)
project(ctpLinux)
#set(CTP_INCLUDE_DIR /home/njn/CLionProjects/ctpLinux/ThostTraderApi/)
#set(CTP_LIBRARY_DIR /home/njn/CLionProjects/ctpLinux/ThostTraderApi)
#
#include_directories(${CTP_INCLUDE_DIR})
#link_directories(${CTP_LIBRARY_DIR})
add_library(thostmduserapi SHARED IMPORTED)
SET_PROPERTY(TARGET thostmduserapi PROPERTY IMPORTED_LOCATION /home/njn/CLionProjects/ctpLinux/ThostTraderApi/libthostmduserapi.so)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_PREFIX_PATH /home/njn/CLionProjects/ctpLinux/ThostTraderApi/)
include_directories(/home/njn/CLionProjects/ctpLinux/ThostTraderApi/)
link_directories(/home/njn/CLionProjects/ctpLinux/ThostTraderApi/libthostmduserapi.so)
#add_executable(xxx main.cpp)
#target_link_libraries(xxx dlib)

set(SOURCE_FILES main.cpp MdSpi.h MdSpi.cpp)



add_executable(ctpLinux ${SOURCE_FILES})
target_link_libraries(ctpLinux thostmduserapi)
#target_link_libraries(ctpLinux ${CTP_LIBRARY_DIR})
#add_executable(ctpLinux ${SOURCE_FILES})

