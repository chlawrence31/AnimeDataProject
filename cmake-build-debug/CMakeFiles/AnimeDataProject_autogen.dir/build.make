# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.26

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2023.2.2\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2023.2.2\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\mallo\CLionProjects\AnimeDataProject

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\mallo\CLionProjects\AnimeDataProject\cmake-build-debug

# Utility rule file for AnimeDataProject_autogen.

# Include any custom commands dependencies for this target.
include CMakeFiles/AnimeDataProject_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/AnimeDataProject_autogen.dir/progress.make

CMakeFiles/AnimeDataProject_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=C:\Users\mallo\CLionProjects\AnimeDataProject\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target AnimeDataProject"
	"C:\Program Files\JetBrains\CLion 2023.2.2\bin\cmake\win\x64\bin\cmake.exe" -E cmake_autogen C:/Users/mallo/CLionProjects/AnimeDataProject/cmake-build-debug/CMakeFiles/AnimeDataProject_autogen.dir/AutogenInfo.json Debug

AnimeDataProject_autogen: CMakeFiles/AnimeDataProject_autogen
AnimeDataProject_autogen: CMakeFiles/AnimeDataProject_autogen.dir/build.make
.PHONY : AnimeDataProject_autogen

# Rule to build all files generated by this target.
CMakeFiles/AnimeDataProject_autogen.dir/build: AnimeDataProject_autogen
.PHONY : CMakeFiles/AnimeDataProject_autogen.dir/build

CMakeFiles/AnimeDataProject_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\AnimeDataProject_autogen.dir\cmake_clean.cmake
.PHONY : CMakeFiles/AnimeDataProject_autogen.dir/clean

CMakeFiles/AnimeDataProject_autogen.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\mallo\CLionProjects\AnimeDataProject C:\Users\mallo\CLionProjects\AnimeDataProject C:\Users\mallo\CLionProjects\AnimeDataProject\cmake-build-debug C:\Users\mallo\CLionProjects\AnimeDataProject\cmake-build-debug C:\Users\mallo\CLionProjects\AnimeDataProject\cmake-build-debug\CMakeFiles\AnimeDataProject_autogen.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/AnimeDataProject_autogen.dir/depend

