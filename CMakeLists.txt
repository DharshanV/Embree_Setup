CMAKE_MINIMUM_REQUIRED(VERSION 3.10)
project(playground)

# find_package(embree 3.0 REQUIRED) <---- Check if you need this.

message(STATUS "======== Embree and TBB Build Info ========")
message(STATUS "Embree include path: ${EMBREE_INCLUDE_DIRS}") # <----- Check if its EMBREE_INCLUDE_DIRS or embree_INCLUDE_DIRS. This message should print a valid path
message(STATUS "Embree libraries: ${EMBREE_LIBRARIES}")
message(STATUS "TBB include path: ${tbb_INCLUDE_DIRS}")
message(STATUS "TBB libraries: ${tbb_LIBRARIES}")

include_directories(SYSTEM ${EMBREE_INCLUDE_DIRS})
include_directories(SYSTEM ${tbb_INCLUDE_DIRS})

add_executable(playground main.cpp)
target_link_libraries(playground ${EMBREE_LIBRARIES} ${tbb_LIBRARIES})
install(TARGETS playground DESTINATION bin)