cmake_minimum_required(VERSION 3.15)
add_executable(runner runner.cpp)
target_compile_features(runner PRIVATE cxx_std_17)
target_link_libraries(runner PUBLIC arrow)

