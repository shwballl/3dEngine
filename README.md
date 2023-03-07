Description
===========

In this repository you will find material used to introduce CMake and building tools.
In its present form it is not intended as a complete tutorial, but it contains useful material to showcase CMake and building tools in a seminar.

For a tutorial that you can easily follow step by step, without additional information, refer to [cmake-tutorial](https://cmake.org/cmake-tutorial/).

Prerequisites
=============

In order to execute the comnands described in this file you will need several tools, such as `cmake`, `make`, `gcc`,  `ninja`, `gcov`, `lcov`.

On a Debian-based system you can install them with:

```
sudo apt-get install cmake make gcc ninja gcov lcov

```

Build using CMake
-----------------

`cmake` goal is to overcome the issues of `make` while still take advantage of its benefits.
In particular `cmake` introduces a configuration step, just before the build step.
The configuration step is responsible to configure the build step, by taking into account
user input and environment variables. The results of the configuration step is stored
into files so that user input and environment variabled will not be used at build time,
thus granting reliable, reproducible builds.
`cmake` is commonly used to produce build files for other build systems (e.g., `make`, `ninja`,
`Visual Studio`, `Xcode`, ...); as these files are automatically created they are
generally much more reliable and consistent than manually created ones. They also
tend to provide many more functionalities.
`cmake` input consists of [CMakeLists.txt](CMakeLists.txt) files, which describes the project
to be built, `*.cmake` files, which contains collections of cmake macro that can
be used in `CMakeLists.txt` for specific tasks, `*.in` files that are used
as templates for automatically generated files.

### Configure ###

```
mkdir -p build
cd build
cmake .. -DCMAKE_INSTALL_PREFIX=install  -DCMAKE_VERBOSE_MAKEFILE=ON
```

### Configure for cross-compilation with Mingw ###

```
mkdir -p build-mingw32
cd build-mingw32
cmake .. -DCMAKE_INSTALL_PREFIX=install  -DCMAKE_VERBOSE_MAKEFILE=ON -DCMAKE_TOOLCHAIN_FILE=../toolchains/Toolchain-mingw32.cmake
```

### Compile ###

```
make -j
```

### Install ###

```
make -j install
```

### Clean ###

```
make -j clean
```
### Configure for ninja ###

```
mkdir -p build-ninja
cd build-ninja
cmake .. -GNinja -DCMAKE_INSTALL_PREFIX=install
```

### Compile with ninja ###

```
ninja
```

### Install with ninja ###

```
ninja install
```

### Clean with ninja ###

```
ninja clean
```

