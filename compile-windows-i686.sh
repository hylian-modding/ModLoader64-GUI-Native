make clean
cd extern_libs/raylib/src/
make -j8 PLATFORM=PLATFORM_DESKTOP PLATFORM_OS=WINDOWS
cd ../../../
make -j8 PLATFORM=PLATFORM_DESKTOP PLATFORM_OS=WINDOWS


