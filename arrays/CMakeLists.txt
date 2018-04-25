cmake_minimum_required(VERSION 3.5 )

### c++11 standards
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project( arrays_applications C CXX )

include_directories( . )

### Generate executables
add_executable( AnalyzeDNA analyzeDNA.cpp )
add_executable( AnalyzeECG analyzeECG.cpp )
add_executable( Calculator calculator.cpp )
add_executable( Heron heron.cpp )
