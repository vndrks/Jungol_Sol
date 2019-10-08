# CMakeList.txt : 최상위 CMake 프로젝트 파일, 전역 구성을 수행하고
# 여기에 하위 프로젝트를 포함합니다.
#
cmake_minimum_required (VERSION 3.8)

project ("Jungol_Sol")

# 하위 프로젝트를 포함합니다.
add_subdirectory ("Improve_Skills")

add_executable(MainApp "MainApp.cpp" ${HEADER_FILES} ${SOURCE_FILES})
target_compile_features(MainApp PRIVATE cxx_range_for)
