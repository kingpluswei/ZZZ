# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = "/Users/b1essing/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/191.6707.69/CLion.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Users/b1essing/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/191.6707.69/CLion.app/Contents/bin/cmake/mac/bin/cmake" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/b1essing/Desktop/Dev/DsDaily/DsDaily/test2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/b1essing/Desktop/Dev/DsDaily/DsDaily/test2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/test2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/test2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test2.dir/flags.make

CMakeFiles/test2.dir/main.c.o: CMakeFiles/test2.dir/flags.make
CMakeFiles/test2.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/b1essing/Desktop/Dev/DsDaily/DsDaily/test2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/test2.dir/main.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/test2.dir/main.c.o   -c /Users/b1essing/Desktop/Dev/DsDaily/DsDaily/test2/main.c

CMakeFiles/test2.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test2.dir/main.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/b1essing/Desktop/Dev/DsDaily/DsDaily/test2/main.c > CMakeFiles/test2.dir/main.c.i

CMakeFiles/test2.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test2.dir/main.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/b1essing/Desktop/Dev/DsDaily/DsDaily/test2/main.c -o CMakeFiles/test2.dir/main.c.s

# Object files for target test2
test2_OBJECTS = \
"CMakeFiles/test2.dir/main.c.o"

# External object files for target test2
test2_EXTERNAL_OBJECTS =

test2: CMakeFiles/test2.dir/main.c.o
test2: CMakeFiles/test2.dir/build.make
test2: CMakeFiles/test2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/b1essing/Desktop/Dev/DsDaily/DsDaily/test2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable test2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test2.dir/build: test2

.PHONY : CMakeFiles/test2.dir/build

CMakeFiles/test2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test2.dir/clean

CMakeFiles/test2.dir/depend:
	cd /Users/b1essing/Desktop/Dev/DsDaily/DsDaily/test2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/b1essing/Desktop/Dev/DsDaily/DsDaily/test2 /Users/b1essing/Desktop/Dev/DsDaily/DsDaily/test2 /Users/b1essing/Desktop/Dev/DsDaily/DsDaily/test2/cmake-build-debug /Users/b1essing/Desktop/Dev/DsDaily/DsDaily/test2/cmake-build-debug /Users/b1essing/Desktop/Dev/DsDaily/DsDaily/test2/cmake-build-debug/CMakeFiles/test2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test2.dir/depend

