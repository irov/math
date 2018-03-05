@echo off

set "build_dir=build"
set "configuration=Debug"
set "SOLUTION_DIR=solutions\libmovie_msvc15_debug"

@pushd ..
@mkdir %SOLUTION_DIR%
@pushd %SOLUTION_DIR%
CMake -G "Visual Studio 15 2017" "%CD%\..\.." -DCMAKE_CONFIGURATION_TYPES:STRING='Debug' -DCMAKE_BUILD_TYPE:STRING='Debug' -DLIBMATH_SANDBOX:BOOL=TRUE
@popd
@popd

@echo on
@pause
