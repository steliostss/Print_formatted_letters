# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /home/guru/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/183.5429.37/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/guru/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/183.5429.37/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/guru/Desktop/vassilis/bill_project

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/guru/Desktop/vassilis/bill_project/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Thema1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Thema1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Thema1.dir/flags.make

CMakeFiles/Thema1.dir/main.c.o: CMakeFiles/Thema1.dir/flags.make
CMakeFiles/Thema1.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/guru/Desktop/vassilis/bill_project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Thema1.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Thema1.dir/main.c.o   -c /home/guru/Desktop/vassilis/bill_project/main.c

CMakeFiles/Thema1.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Thema1.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/guru/Desktop/vassilis/bill_project/main.c > CMakeFiles/Thema1.dir/main.c.i

CMakeFiles/Thema1.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Thema1.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/guru/Desktop/vassilis/bill_project/main.c -o CMakeFiles/Thema1.dir/main.c.s

# Object files for target Thema1
Thema1_OBJECTS = \
"CMakeFiles/Thema1.dir/main.c.o"

# External object files for target Thema1
Thema1_EXTERNAL_OBJECTS =

Thema1: CMakeFiles/Thema1.dir/main.c.o
Thema1: CMakeFiles/Thema1.dir/build.make
Thema1: CMakeFiles/Thema1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/guru/Desktop/vassilis/bill_project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Thema1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Thema1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Thema1.dir/build: Thema1

.PHONY : CMakeFiles/Thema1.dir/build

CMakeFiles/Thema1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Thema1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Thema1.dir/clean

CMakeFiles/Thema1.dir/depend:
	cd /home/guru/Desktop/vassilis/bill_project/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/guru/Desktop/vassilis/bill_project /home/guru/Desktop/vassilis/bill_project /home/guru/Desktop/vassilis/bill_project/cmake-build-debug /home/guru/Desktop/vassilis/bill_project/cmake-build-debug /home/guru/Desktop/vassilis/bill_project/cmake-build-debug/CMakeFiles/Thema1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Thema1.dir/depend

