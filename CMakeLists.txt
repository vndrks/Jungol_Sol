# CMakeList.txt : 최상위 CMake 프로젝트 파일, 전역 구성을 수행하고
# 여기에 하위 프로젝트를 포함합니다.
#
cmake_minimum_required (VERSION 3.8)

project ("Jungol_Sol")
message( "Project : " ${PROJECT_NAME} )

# 하위 프로젝트를 포함합니다.

add_executable(MainApp "MainApp.cpp")

add_subdirectory( Improve_Skills )
include_directories (
	"Improve_Skills/Code1291/"
	"Improve_Skills/Code1341/"
	"Improve_Skills/Code1303/"
	"Improve_Skills/Code1856/"
)
target_compile_features(MainApp PRIVATE cxx_range_for)
target_link_libraries(MainApp LINK_PUBLIC Improve_Skills)