# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\soft\ide\gongju\CLion 2019.1.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\soft\ide\gongju\CLion 2019.1.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\study-cpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\study-cpp\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/study_cpp.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/study_cpp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/study_cpp.dir/flags.make

CMakeFiles/study_cpp.dir/chapter04/Code05_PointerToPointer.cpp.obj: CMakeFiles/study_cpp.dir/flags.make
CMakeFiles/study_cpp.dir/chapter04/Code05_PointerToPointer.cpp.obj: ../chapter04/Code05_PointerToPointer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\study-cpp\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/study_cpp.dir/chapter04/Code05_PointerToPointer.cpp.obj"
	D:\soft\ide\anzhuangbao\msys64\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\study_cpp.dir\chapter04\Code05_PointerToPointer.cpp.obj -c D:\study-cpp\chapter04\Code05_PointerToPointer.cpp

CMakeFiles/study_cpp.dir/chapter04/Code05_PointerToPointer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/study_cpp.dir/chapter04/Code05_PointerToPointer.cpp.i"
	D:\soft\ide\anzhuangbao\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\study-cpp\chapter04\Code05_PointerToPointer.cpp > CMakeFiles\study_cpp.dir\chapter04\Code05_PointerToPointer.cpp.i

CMakeFiles/study_cpp.dir/chapter04/Code05_PointerToPointer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/study_cpp.dir/chapter04/Code05_PointerToPointer.cpp.s"
	D:\soft\ide\anzhuangbao\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\study-cpp\chapter04\Code05_PointerToPointer.cpp -o CMakeFiles\study_cpp.dir\chapter04\Code05_PointerToPointer.cpp.s

CMakeFiles/study_cpp.dir/chapter04/Code06_BasicPointerOperator.cpp.obj: CMakeFiles/study_cpp.dir/flags.make
CMakeFiles/study_cpp.dir/chapter04/Code06_BasicPointerOperator.cpp.obj: ../chapter04/Code06_BasicPointerOperator.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\study-cpp\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/study_cpp.dir/chapter04/Code06_BasicPointerOperator.cpp.obj"
	D:\soft\ide\anzhuangbao\msys64\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\study_cpp.dir\chapter04\Code06_BasicPointerOperator.cpp.obj -c D:\study-cpp\chapter04\Code06_BasicPointerOperator.cpp

CMakeFiles/study_cpp.dir/chapter04/Code06_BasicPointerOperator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/study_cpp.dir/chapter04/Code06_BasicPointerOperator.cpp.i"
	D:\soft\ide\anzhuangbao\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\study-cpp\chapter04\Code06_BasicPointerOperator.cpp > CMakeFiles\study_cpp.dir\chapter04\Code06_BasicPointerOperator.cpp.i

CMakeFiles/study_cpp.dir/chapter04/Code06_BasicPointerOperator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/study_cpp.dir/chapter04/Code06_BasicPointerOperator.cpp.s"
	D:\soft\ide\anzhuangbao\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\study-cpp\chapter04\Code06_BasicPointerOperator.cpp -o CMakeFiles\study_cpp.dir\chapter04\Code06_BasicPointerOperator.cpp.s

# Object files for target study_cpp
study_cpp_OBJECTS = \
"CMakeFiles/study_cpp.dir/chapter04/Code05_PointerToPointer.cpp.obj" \
"CMakeFiles/study_cpp.dir/chapter04/Code06_BasicPointerOperator.cpp.obj"

# External object files for target study_cpp
study_cpp_EXTERNAL_OBJECTS =

study_cpp.exe: CMakeFiles/study_cpp.dir/chapter04/Code05_PointerToPointer.cpp.obj
study_cpp.exe: CMakeFiles/study_cpp.dir/chapter04/Code06_BasicPointerOperator.cpp.obj
study_cpp.exe: CMakeFiles/study_cpp.dir/build.make
study_cpp.exe: CMakeFiles/study_cpp.dir/linklibs.rsp
study_cpp.exe: CMakeFiles/study_cpp.dir/objects1.rsp
study_cpp.exe: CMakeFiles/study_cpp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\study-cpp\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable study_cpp.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\study_cpp.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/study_cpp.dir/build: study_cpp.exe

.PHONY : CMakeFiles/study_cpp.dir/build

CMakeFiles/study_cpp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\study_cpp.dir\cmake_clean.cmake
.PHONY : CMakeFiles/study_cpp.dir/clean

CMakeFiles/study_cpp.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\study-cpp D:\study-cpp D:\study-cpp\cmake-build-debug D:\study-cpp\cmake-build-debug D:\study-cpp\cmake-build-debug\CMakeFiles\study_cpp.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/study_cpp.dir/depend

