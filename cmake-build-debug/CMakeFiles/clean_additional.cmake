# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "AnimeDataProject_autogen"
  "CMakeFiles\\AnimeDataProject_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\AnimeDataProject_autogen.dir\\ParseCache.txt"
  )
endif()
