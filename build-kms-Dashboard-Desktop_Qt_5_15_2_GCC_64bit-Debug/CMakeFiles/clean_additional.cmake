# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/kms-Dashboard_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/kms-Dashboard_autogen.dir/ParseCache.txt"
  "kms-Dashboard_autogen"
  )
endif()
