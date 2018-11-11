cmake_minimum_required(VERSION 3.12)
project(TBB_fun)

set(CMAKE_CXX_STANDARD 17)
find_package(TBB COMPONENTS tbbmalloc tbbmalloc_proxy tbb_preview)

enable_testing()
find_package(GTest REQUIRED)
#add_subdirectory(tests)

add_executable(TBB_fun
        main.cpp
        ApplyFoo.h
        tests/basic_check.cpp
        )
target_link_libraries(TBB_fun
        tbb
        GTest::GTest GTest::Main)