cmake_minimum_required(VERSION 3.5 )

### c++11 standards
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
 
 project( arrays&heap&other_applications C CXX )

include_directories( . )

include_directories( sbe201-heap-pq )
include_directories( sbe201-week1-cpp-basics-emanmoustafa20)  
include_directories( sbe201-week1-cpp-memory-emanmoustafa20)
include_directories( sbe201-week1-first-project-emanmoustafa20 )
include_directories(sbe201-week3-cpp-arrays-emanmoustafa20 )

### Generate executables
add_executable( AnalyzeDNA analyzeDNA.cpp )
add_executable( AnalyzeECG analyzeECG.cpp )
add_executable( Calculator calculator.cpp )
add_executable( Heron heron.cpp )
add_executable( main.cpp )
add_executable( main1.cpp )
add_executable( test_heap.cpp )

add_library(heap.hpp {sbe201-heap-pq})
add_library(arrays.hpp{sbe201-week3-cpp-arrays-emanmoustafa20})
add_library(dna.hpp{sbe201-week3-cpp-arrays-emanmoustafa20})
add_library(helpers.hpp{sbe201-week3-cpp-arrays-emanmoustafa20})
add_library(mathematics.hpp{sbe201-week3-cpp-arrays-emanmoustafa20})
add_library(ecg.hpp{sbe201-week3-cpp-arrays-emanmoustafa20})

