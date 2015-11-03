cmake_minimum_required (VERSION 2.8)
project (smithwaterman)

# C++11
set (CMAKE_CXX_FLAGS "-W -Wall -Wfatal-errors -pedantic -Wno-variadic-macros -lrt -O3 -std=c++11 -DNDEBUG")

# Set module path
# set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/utilities")

include_directories("${PROJECT_BINARY_DIR}")

# Find external libraries
# message (STATUS "Checking for zlib")
# find_package(ZLIB REQUIRED)
# include_directories( ${ZLIB_INCLUDE_DIRS} )
# 
# message (STATUS "Checking for Boost")
# find_package(Boost 1.57.0 REQUIRED)
# include_directories( ${Boost_INCLUDE_DIRS} )
# 
# find_package(OpenMP REQUIRED)
# set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${OpenMP_C_FLAGS}")
# set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${OpenMP_CXX_FLAGS}")
# 
# # Fetch SeqAn
# add_subdirectory(utilities/seqan)
# 
# # Find htslib
# find_package(htslib REQUIRED)
# include_directories(${htslib_INCLUDE_DIRS})
# 
# message("SeqAn include path is: ${SEQAN_INCLUDE_PATH}")
# include_directories(${SEQAN_INCLUDE_DIRS})
# include_directories(${SEQAN_INCLUDE_PATH})
# # set(LIBS ${LIBS} ${SEQAN_LIBRARIES})

set(EXECUTABLE_OUTPUT_PATH ../bin)
add_subdirectory(src)

# Testing
# set(EXT_PROJECTS_DIR ${PROJECT_SOURCE_DIR}/test)
# include_directories(${EXT_PROJECTS_DIR})
# add_subdirectory(${EXT_PROJECTS_DIR}/catch)
# include_directories(${CATCH_INCLUDE_DIR} ${COMMON_INCLUDES})
# enable_testing(true)

# add_subdirectory(test)
