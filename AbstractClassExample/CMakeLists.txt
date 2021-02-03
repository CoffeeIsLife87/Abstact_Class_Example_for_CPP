# CMakeList.txt : CMake project for AbstractClassExample, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("AbstractClassExample")

# Add source to this project's executable.
add_executable (AbstractClassExample "AbstractClassExample.cpp" "BasicInterface.h" "ActualImple.h" "ActualImple.cpp")

# TODO: Add tests and install targets if needed.
