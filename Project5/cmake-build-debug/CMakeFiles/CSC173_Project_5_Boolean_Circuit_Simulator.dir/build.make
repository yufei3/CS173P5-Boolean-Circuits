# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/rainyzhao/Desktop/大二课程/CSC173/Project5/CSC173 Project 5 Boolean Circuit Simulator"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/rainyzhao/Desktop/大二课程/CSC173/Project5/CSC173 Project 5 Boolean Circuit Simulator/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/flags.make

CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/Boolean.c.o: CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/flags.make
CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/Boolean.c.o: ../Boolean.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/rainyzhao/Desktop/大二课程/CSC173/Project5/CSC173 Project 5 Boolean Circuit Simulator/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/Boolean.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/Boolean.c.o   -c "/Users/rainyzhao/Desktop/大二课程/CSC173/Project5/CSC173 Project 5 Boolean Circuit Simulator/Boolean.c"

CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/Boolean.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/Boolean.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/rainyzhao/Desktop/大二课程/CSC173/Project5/CSC173 Project 5 Boolean Circuit Simulator/Boolean.c" > CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/Boolean.c.i

CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/Boolean.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/Boolean.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/rainyzhao/Desktop/大二课程/CSC173/Project5/CSC173 Project 5 Boolean Circuit Simulator/Boolean.c" -o CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/Boolean.c.s

CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/Circuit.c.o: CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/flags.make
CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/Circuit.c.o: ../Circuit.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/rainyzhao/Desktop/大二课程/CSC173/Project5/CSC173 Project 5 Boolean Circuit Simulator/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/Circuit.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/Circuit.c.o   -c "/Users/rainyzhao/Desktop/大二课程/CSC173/Project5/CSC173 Project 5 Boolean Circuit Simulator/Circuit.c"

CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/Circuit.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/Circuit.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/rainyzhao/Desktop/大二课程/CSC173/Project5/CSC173 Project 5 Boolean Circuit Simulator/Circuit.c" > CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/Circuit.c.i

CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/Circuit.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/Circuit.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/rainyzhao/Desktop/大二课程/CSC173/Project5/CSC173 Project 5 Boolean Circuit Simulator/Circuit.c" -o CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/Circuit.c.s

CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/Gates.c.o: CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/flags.make
CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/Gates.c.o: ../Gates.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/rainyzhao/Desktop/大二课程/CSC173/Project5/CSC173 Project 5 Boolean Circuit Simulator/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/Gates.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/Gates.c.o   -c "/Users/rainyzhao/Desktop/大二课程/CSC173/Project5/CSC173 Project 5 Boolean Circuit Simulator/Gates.c"

CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/Gates.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/Gates.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/rainyzhao/Desktop/大二课程/CSC173/Project5/CSC173 Project 5 Boolean Circuit Simulator/Gates.c" > CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/Gates.c.i

CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/Gates.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/Gates.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/rainyzhao/Desktop/大二课程/CSC173/Project5/CSC173 Project 5 Boolean Circuit Simulator/Gates.c" -o CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/Gates.c.s

CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/main.c.o: CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/flags.make
CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/rainyzhao/Desktop/大二课程/CSC173/Project5/CSC173 Project 5 Boolean Circuit Simulator/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/main.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/main.c.o   -c "/Users/rainyzhao/Desktop/大二课程/CSC173/Project5/CSC173 Project 5 Boolean Circuit Simulator/main.c"

CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/main.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/rainyzhao/Desktop/大二课程/CSC173/Project5/CSC173 Project 5 Boolean Circuit Simulator/main.c" > CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/main.c.i

CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/main.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/rainyzhao/Desktop/大二课程/CSC173/Project5/CSC173 Project 5 Boolean Circuit Simulator/main.c" -o CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/main.c.s

CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/Parser.c.o: CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/flags.make
CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/Parser.c.o: ../Parser.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/rainyzhao/Desktop/大二课程/CSC173/Project5/CSC173 Project 5 Boolean Circuit Simulator/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/Parser.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/Parser.c.o   -c "/Users/rainyzhao/Desktop/大二课程/CSC173/Project5/CSC173 Project 5 Boolean Circuit Simulator/Parser.c"

CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/Parser.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/Parser.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/rainyzhao/Desktop/大二课程/CSC173/Project5/CSC173 Project 5 Boolean Circuit Simulator/Parser.c" > CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/Parser.c.i

CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/Parser.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/Parser.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/rainyzhao/Desktop/大二课程/CSC173/Project5/CSC173 Project 5 Boolean Circuit Simulator/Parser.c" -o CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/Parser.c.s

CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/ParseTree.c.o: CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/flags.make
CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/ParseTree.c.o: ../ParseTree.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/rainyzhao/Desktop/大二课程/CSC173/Project5/CSC173 Project 5 Boolean Circuit Simulator/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/ParseTree.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/ParseTree.c.o   -c "/Users/rainyzhao/Desktop/大二课程/CSC173/Project5/CSC173 Project 5 Boolean Circuit Simulator/ParseTree.c"

CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/ParseTree.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/ParseTree.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/rainyzhao/Desktop/大二课程/CSC173/Project5/CSC173 Project 5 Boolean Circuit Simulator/ParseTree.c" > CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/ParseTree.c.i

CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/ParseTree.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/ParseTree.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/rainyzhao/Desktop/大二课程/CSC173/Project5/CSC173 Project 5 Boolean Circuit Simulator/ParseTree.c" -o CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/ParseTree.c.s

CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/Stack.c.o: CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/flags.make
CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/Stack.c.o: ../Stack.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/rainyzhao/Desktop/大二课程/CSC173/Project5/CSC173 Project 5 Boolean Circuit Simulator/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/Stack.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/Stack.c.o   -c "/Users/rainyzhao/Desktop/大二课程/CSC173/Project5/CSC173 Project 5 Boolean Circuit Simulator/Stack.c"

CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/Stack.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/Stack.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/rainyzhao/Desktop/大二课程/CSC173/Project5/CSC173 Project 5 Boolean Circuit Simulator/Stack.c" > CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/Stack.c.i

CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/Stack.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/Stack.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/rainyzhao/Desktop/大二课程/CSC173/Project5/CSC173 Project 5 Boolean Circuit Simulator/Stack.c" -o CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/Stack.c.s

# Object files for target CSC173_Project_5_Boolean_Circuit_Simulator
CSC173_Project_5_Boolean_Circuit_Simulator_OBJECTS = \
"CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/Boolean.c.o" \
"CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/Circuit.c.o" \
"CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/Gates.c.o" \
"CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/main.c.o" \
"CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/Parser.c.o" \
"CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/ParseTree.c.o" \
"CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/Stack.c.o"

# External object files for target CSC173_Project_5_Boolean_Circuit_Simulator
CSC173_Project_5_Boolean_Circuit_Simulator_EXTERNAL_OBJECTS =

CSC173_Project_5_Boolean_Circuit_Simulator: CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/Boolean.c.o
CSC173_Project_5_Boolean_Circuit_Simulator: CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/Circuit.c.o
CSC173_Project_5_Boolean_Circuit_Simulator: CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/Gates.c.o
CSC173_Project_5_Boolean_Circuit_Simulator: CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/main.c.o
CSC173_Project_5_Boolean_Circuit_Simulator: CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/Parser.c.o
CSC173_Project_5_Boolean_Circuit_Simulator: CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/ParseTree.c.o
CSC173_Project_5_Boolean_Circuit_Simulator: CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/Stack.c.o
CSC173_Project_5_Boolean_Circuit_Simulator: CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/build.make
CSC173_Project_5_Boolean_Circuit_Simulator: CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/rainyzhao/Desktop/大二课程/CSC173/Project5/CSC173 Project 5 Boolean Circuit Simulator/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_8) "Linking C executable CSC173_Project_5_Boolean_Circuit_Simulator"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/build: CSC173_Project_5_Boolean_Circuit_Simulator

.PHONY : CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/build

CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/clean

CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/depend:
	cd "/Users/rainyzhao/Desktop/大二课程/CSC173/Project5/CSC173 Project 5 Boolean Circuit Simulator/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/rainyzhao/Desktop/大二课程/CSC173/Project5/CSC173 Project 5 Boolean Circuit Simulator" "/Users/rainyzhao/Desktop/大二课程/CSC173/Project5/CSC173 Project 5 Boolean Circuit Simulator" "/Users/rainyzhao/Desktop/大二课程/CSC173/Project5/CSC173 Project 5 Boolean Circuit Simulator/cmake-build-debug" "/Users/rainyzhao/Desktop/大二课程/CSC173/Project5/CSC173 Project 5 Boolean Circuit Simulator/cmake-build-debug" "/Users/rainyzhao/Desktop/大二课程/CSC173/Project5/CSC173 Project 5 Boolean Circuit Simulator/cmake-build-debug/CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/CSC173_Project_5_Boolean_Circuit_Simulator.dir/depend

