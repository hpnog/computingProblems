cmake_minimum_required(VERSION 3.10)

add_executable(softwareEngineeringProblems ./src/main.cpp)

target_compile_features(softwareEngineeringProblems PRIVATE cxx_lambda_init_captures)
