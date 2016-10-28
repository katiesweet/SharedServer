cmake_minimum_required(VERSION 3.3)
if(CMAKE_CONFIGURATION_TYPES)
  set(CMAKE_CONFIGURATION_TYPES Debug Release)
  set(CMAKE_CONFIGURATION_TYPES "${CMAKE_CONFIGURATION_TYPES}" CACHE STRING
    "Set the configurations to what we need" FORCE
    )
endif()
project(Server)
enable_testing()
add_test(NAME UnitTests COMMAND Test)
set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_LIST_DIR}) # Findexternpro.cmake
set(externpro_REV 16.07.1)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /EHsc")
find_package(externpro REQUIRED)
xpCommonFlags()
add_subdirectory(source)
add_subdirectory(test)
