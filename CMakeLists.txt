cmake_minimum_required(VERSION 3.20)
project(planning 
    VERSION 0.0.1 DESCRIPTION "a demo foe cmake planning" 
    HOMEPAGE_URL "https://github.com/XuanyuChen-SEU/cmake_planning_demo"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(Process_Dir ${CMAKE_SOURCE_DIR}/src/process)
set(PNC_Map_Dir ${CMAKE_SOURCE_DIR}/src/pnc_map)
set(Show_Result_Dir ${CMAKE_SOURCE_DIR}/src/show_result)

add_subdirectory(src)