# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\a45_Bugnar12_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\a45_Bugnar12_autogen.dir\\ParseCache.txt"
  "a45_Bugnar12_autogen"
  )
endif()
