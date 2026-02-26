cmake -S . -B cmake-debug-build -DCMAKE_BUILD_TYPE=Debug
cmake -S . -B winbuild -DCMAKE_BUILD_TYPE=Debug -DCMAKE_TOOLCHAIN_FILE=\
    toolchain-mingw64.cmake
