# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/sushantanand/project/blitz/blitz

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sushantanand/project/blitz/blitz/build

# Include any dependencies generated for this target.
include CMakeFiles/blitz.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/blitz.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/blitz.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/blitz.dir/flags.make

CMakeFiles/blitz.dir/src/comm/udp_reciever.cpp.o: CMakeFiles/blitz.dir/flags.make
CMakeFiles/blitz.dir/src/comm/udp_reciever.cpp.o: ../src/comm/udp_reciever.cpp
CMakeFiles/blitz.dir/src/comm/udp_reciever.cpp.o: CMakeFiles/blitz.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sushantanand/project/blitz/blitz/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/blitz.dir/src/comm/udp_reciever.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/blitz.dir/src/comm/udp_reciever.cpp.o -MF CMakeFiles/blitz.dir/src/comm/udp_reciever.cpp.o.d -o CMakeFiles/blitz.dir/src/comm/udp_reciever.cpp.o -c /home/sushantanand/project/blitz/blitz/src/comm/udp_reciever.cpp

CMakeFiles/blitz.dir/src/comm/udp_reciever.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/blitz.dir/src/comm/udp_reciever.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sushantanand/project/blitz/blitz/src/comm/udp_reciever.cpp > CMakeFiles/blitz.dir/src/comm/udp_reciever.cpp.i

CMakeFiles/blitz.dir/src/comm/udp_reciever.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/blitz.dir/src/comm/udp_reciever.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sushantanand/project/blitz/blitz/src/comm/udp_reciever.cpp -o CMakeFiles/blitz.dir/src/comm/udp_reciever.cpp.s

CMakeFiles/blitz.dir/src/engine/packet_loader.cpp.o: CMakeFiles/blitz.dir/flags.make
CMakeFiles/blitz.dir/src/engine/packet_loader.cpp.o: ../src/engine/packet_loader.cpp
CMakeFiles/blitz.dir/src/engine/packet_loader.cpp.o: CMakeFiles/blitz.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sushantanand/project/blitz/blitz/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/blitz.dir/src/engine/packet_loader.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/blitz.dir/src/engine/packet_loader.cpp.o -MF CMakeFiles/blitz.dir/src/engine/packet_loader.cpp.o.d -o CMakeFiles/blitz.dir/src/engine/packet_loader.cpp.o -c /home/sushantanand/project/blitz/blitz/src/engine/packet_loader.cpp

CMakeFiles/blitz.dir/src/engine/packet_loader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/blitz.dir/src/engine/packet_loader.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sushantanand/project/blitz/blitz/src/engine/packet_loader.cpp > CMakeFiles/blitz.dir/src/engine/packet_loader.cpp.i

CMakeFiles/blitz.dir/src/engine/packet_loader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/blitz.dir/src/engine/packet_loader.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sushantanand/project/blitz/blitz/src/engine/packet_loader.cpp -o CMakeFiles/blitz.dir/src/engine/packet_loader.cpp.s

CMakeFiles/blitz.dir/src/main.cpp.o: CMakeFiles/blitz.dir/flags.make
CMakeFiles/blitz.dir/src/main.cpp.o: ../src/main.cpp
CMakeFiles/blitz.dir/src/main.cpp.o: CMakeFiles/blitz.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sushantanand/project/blitz/blitz/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/blitz.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/blitz.dir/src/main.cpp.o -MF CMakeFiles/blitz.dir/src/main.cpp.o.d -o CMakeFiles/blitz.dir/src/main.cpp.o -c /home/sushantanand/project/blitz/blitz/src/main.cpp

CMakeFiles/blitz.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/blitz.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sushantanand/project/blitz/blitz/src/main.cpp > CMakeFiles/blitz.dir/src/main.cpp.i

CMakeFiles/blitz.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/blitz.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sushantanand/project/blitz/blitz/src/main.cpp -o CMakeFiles/blitz.dir/src/main.cpp.s

# Object files for target blitz
blitz_OBJECTS = \
"CMakeFiles/blitz.dir/src/comm/udp_reciever.cpp.o" \
"CMakeFiles/blitz.dir/src/engine/packet_loader.cpp.o" \
"CMakeFiles/blitz.dir/src/main.cpp.o"

# External object files for target blitz
blitz_EXTERNAL_OBJECTS =

blitz: CMakeFiles/blitz.dir/src/comm/udp_reciever.cpp.o
blitz: CMakeFiles/blitz.dir/src/engine/packet_loader.cpp.o
blitz: CMakeFiles/blitz.dir/src/main.cpp.o
blitz: CMakeFiles/blitz.dir/build.make
blitz: CMakeFiles/blitz.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sushantanand/project/blitz/blitz/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable blitz"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/blitz.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/blitz.dir/build: blitz
.PHONY : CMakeFiles/blitz.dir/build

CMakeFiles/blitz.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/blitz.dir/cmake_clean.cmake
.PHONY : CMakeFiles/blitz.dir/clean

CMakeFiles/blitz.dir/depend:
	cd /home/sushantanand/project/blitz/blitz/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sushantanand/project/blitz/blitz /home/sushantanand/project/blitz/blitz /home/sushantanand/project/blitz/blitz/build /home/sushantanand/project/blitz/blitz/build /home/sushantanand/project/blitz/blitz/build/CMakeFiles/blitz.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/blitz.dir/depend

