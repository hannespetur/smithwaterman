cmake_minimum_required(VERSION 2.8)

SET_SOURCE_FILES_PROPERTIES(disorder.c PROPERTIES LANGUAGE CXX)

# Create a smithwaterman library
set(smithwaterman_SOURCE_FILES
   smithwaterman.cpp
   BandedSmithWaterman.cpp
   SmithWatermanGotoh.cpp
   Repeats.cpp
   LeftAlign.cpp
   IndelAllele.cpp
   disorder.c
)

add_library(smithwaterman_core ${smithwaterman_SOURCE_FILES} )
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

# add_executable(smithwaterman SWMain.cpp)
# target_link_libraries(smithwaterman smithwaterman_core)

# Add the executable
# target_link_libraries(smithwaterman ${LIBS})

# Installs vcflib binaries to /usr/local/bin using [sudo] make install
# install (TARGETS smithwaterman DESTINATION bin)
