# Abseil CMake Quick Start #

Make sure that [CMake is installed](https://cmake.org/install/)
on your system.

We prefer that Abseil is built directly from source within your project.
The first step is navigate to the project and grab Abseil

```bash
 git clone <this repo>
 cd <this repo>/cmake-hello
 git clone https://github.com/abseil/abseil-cpp.git
```

Then use `add_subdirectory(abseil-cpp)` in your top-level CMakeLists.txt file
to make Abseil targets available to your CMake targets.  The CMakeLists.txt
in this directory shows how this is done.  

Abseil also relies on `CMAKE_CXX_STANDARD` to determine whether to backfill or alias
certain C++17 types.  This can be set either in the commandline or your top level
CMakeLists.txt file.  We have set it in the CMakeLists.txt file in this example.

Finally, you can build and run in the normal way.
```bash
mkdir build
cd build
cmake ..  # configure the project
cmake --build . --target main  # build the executable
./main some commandline args
```

To run absl tests, you need a slightly different set of commands
```bash
mkdir build
cd build
cmake ..  -DABSL_USE_GOOGLETEST_HEAD=ON -DABSL_RUN_TESTS=ON
cmake --build . --target all # full abseil build.  Use make -j for a parallel build
cd abseil-cpp
ctest -j 4 # full abseil test.
```
