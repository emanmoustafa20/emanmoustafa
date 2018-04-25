cmake_minimum_required(VERSION 3.5 )

### c++11 standards
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
 
 project( arrays&heap&other_applications C CXX )

include_directories( . )

include_directories( heap )
include_directories( basics)  
include_directories(cpp-memory)
include_directories(arrays )

### Generate executables
add_executable( AnalyzeDNA analyzeDNA.cpp )
add_executable( AnalyzeECG analyzeECG.cpp )
add_executable( Calculator calculator.cpp )
add_executable( Heron heron.cpp )
add_executable(app1 main.cpp )
add_executable(app main1.cpp )
add_executable(run test_heap.cpp )

add_library(heap heap.cpp )
add_library(arrays arrays.cpp)
add_library(dna arrays.cpp)
add_library(helpers arrays.cpp)
add_library(mathematics arrays.cpp)
add_library(ecg arrays.cpp)

