include(${CMAKE_CURRENT_LIST_DIR}/nncaseruntimeTargets.cmake)

if(NOT TARGET gsl-lite)
    find_package(gsl-lite REQUIRED)
endif()
