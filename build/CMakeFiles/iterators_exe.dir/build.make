# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/phamquoc/Desktop/STL

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/phamquoc/Desktop/STL/build

# Include any dependencies generated for this target.
include CMakeFiles/iterators_exe.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/iterators_exe.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/iterators_exe.dir/flags.make

CMakeFiles/iterators_exe.dir/iterators.cpp.o: CMakeFiles/iterators_exe.dir/flags.make
CMakeFiles/iterators_exe.dir/iterators.cpp.o: ../iterators.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/phamquoc/Desktop/STL/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/iterators_exe.dir/iterators.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/iterators_exe.dir/iterators.cpp.o -c /home/phamquoc/Desktop/STL/iterators.cpp

CMakeFiles/iterators_exe.dir/iterators.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/iterators_exe.dir/iterators.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/phamquoc/Desktop/STL/iterators.cpp > CMakeFiles/iterators_exe.dir/iterators.cpp.i

CMakeFiles/iterators_exe.dir/iterators.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/iterators_exe.dir/iterators.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/phamquoc/Desktop/STL/iterators.cpp -o CMakeFiles/iterators_exe.dir/iterators.cpp.s

CMakeFiles/iterators_exe.dir/iterators.cpp.o.requires:

.PHONY : CMakeFiles/iterators_exe.dir/iterators.cpp.o.requires

CMakeFiles/iterators_exe.dir/iterators.cpp.o.provides: CMakeFiles/iterators_exe.dir/iterators.cpp.o.requires
	$(MAKE) -f CMakeFiles/iterators_exe.dir/build.make CMakeFiles/iterators_exe.dir/iterators.cpp.o.provides.build
.PHONY : CMakeFiles/iterators_exe.dir/iterators.cpp.o.provides

CMakeFiles/iterators_exe.dir/iterators.cpp.o.provides.build: CMakeFiles/iterators_exe.dir/iterators.cpp.o


# Object files for target iterators_exe
iterators_exe_OBJECTS = \
"CMakeFiles/iterators_exe.dir/iterators.cpp.o"

# External object files for target iterators_exe
iterators_exe_EXTERNAL_OBJECTS =

iterators_exe: CMakeFiles/iterators_exe.dir/iterators.cpp.o
iterators_exe: CMakeFiles/iterators_exe.dir/build.make
iterators_exe: CMakeFiles/iterators_exe.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/phamquoc/Desktop/STL/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable iterators_exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/iterators_exe.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/iterators_exe.dir/build: iterators_exe

.PHONY : CMakeFiles/iterators_exe.dir/build

CMakeFiles/iterators_exe.dir/requires: CMakeFiles/iterators_exe.dir/iterators.cpp.o.requires

.PHONY : CMakeFiles/iterators_exe.dir/requires

CMakeFiles/iterators_exe.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/iterators_exe.dir/cmake_clean.cmake
.PHONY : CMakeFiles/iterators_exe.dir/clean

CMakeFiles/iterators_exe.dir/depend:
	cd /home/phamquoc/Desktop/STL/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/phamquoc/Desktop/STL /home/phamquoc/Desktop/STL /home/phamquoc/Desktop/STL/build /home/phamquoc/Desktop/STL/build /home/phamquoc/Desktop/STL/build/CMakeFiles/iterators_exe.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/iterators_exe.dir/depend

