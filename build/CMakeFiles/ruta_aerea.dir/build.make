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
CMAKE_SOURCE_DIR = /home/jesus/ED/PracticaFinal/PracticaFinal_ED

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jesus/ED/PracticaFinal/PracticaFinal_ED/build

# Include any dependencies generated for this target.
include CMakeFiles/ruta_aerea.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/ruta_aerea.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ruta_aerea.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ruta_aerea.dir/flags.make

CMakeFiles/ruta_aerea.dir/rutas_aereas/src/ruta_aerea.cpp.o: CMakeFiles/ruta_aerea.dir/flags.make
CMakeFiles/ruta_aerea.dir/rutas_aereas/src/ruta_aerea.cpp.o: ../rutas_aereas/src/ruta_aerea.cpp
CMakeFiles/ruta_aerea.dir/rutas_aereas/src/ruta_aerea.cpp.o: CMakeFiles/ruta_aerea.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jesus/ED/PracticaFinal/PracticaFinal_ED/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ruta_aerea.dir/rutas_aereas/src/ruta_aerea.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ruta_aerea.dir/rutas_aereas/src/ruta_aerea.cpp.o -MF CMakeFiles/ruta_aerea.dir/rutas_aereas/src/ruta_aerea.cpp.o.d -o CMakeFiles/ruta_aerea.dir/rutas_aereas/src/ruta_aerea.cpp.o -c /home/jesus/ED/PracticaFinal/PracticaFinal_ED/rutas_aereas/src/ruta_aerea.cpp

CMakeFiles/ruta_aerea.dir/rutas_aereas/src/ruta_aerea.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ruta_aerea.dir/rutas_aereas/src/ruta_aerea.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jesus/ED/PracticaFinal/PracticaFinal_ED/rutas_aereas/src/ruta_aerea.cpp > CMakeFiles/ruta_aerea.dir/rutas_aereas/src/ruta_aerea.cpp.i

CMakeFiles/ruta_aerea.dir/rutas_aereas/src/ruta_aerea.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ruta_aerea.dir/rutas_aereas/src/ruta_aerea.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jesus/ED/PracticaFinal/PracticaFinal_ED/rutas_aereas/src/ruta_aerea.cpp -o CMakeFiles/ruta_aerea.dir/rutas_aereas/src/ruta_aerea.cpp.s

# Object files for target ruta_aerea
ruta_aerea_OBJECTS = \
"CMakeFiles/ruta_aerea.dir/rutas_aereas/src/ruta_aerea.cpp.o"

# External object files for target ruta_aerea
ruta_aerea_EXTERNAL_OBJECTS =

ruta_aerea: CMakeFiles/ruta_aerea.dir/rutas_aereas/src/ruta_aerea.cpp.o
ruta_aerea: CMakeFiles/ruta_aerea.dir/build.make
ruta_aerea: libimage.a
ruta_aerea: libpais.a
ruta_aerea: libpunto.a
ruta_aerea: libruta.a
ruta_aerea: CMakeFiles/ruta_aerea.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jesus/ED/PracticaFinal/PracticaFinal_ED/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ruta_aerea"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ruta_aerea.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ruta_aerea.dir/build: ruta_aerea
.PHONY : CMakeFiles/ruta_aerea.dir/build

CMakeFiles/ruta_aerea.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ruta_aerea.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ruta_aerea.dir/clean

CMakeFiles/ruta_aerea.dir/depend:
	cd /home/jesus/ED/PracticaFinal/PracticaFinal_ED/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jesus/ED/PracticaFinal/PracticaFinal_ED /home/jesus/ED/PracticaFinal/PracticaFinal_ED /home/jesus/ED/PracticaFinal/PracticaFinal_ED/build /home/jesus/ED/PracticaFinal/PracticaFinal_ED/build /home/jesus/ED/PracticaFinal/PracticaFinal_ED/build/CMakeFiles/ruta_aerea.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ruta_aerea.dir/depend

