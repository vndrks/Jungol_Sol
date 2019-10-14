# CMakeList.txt : 최상위 CMake 프로젝트 파일, 전역 구성을 수행하고
# 여기에 하위 프로젝트를 포함합니다.
#
cmake_minimum_required (VERSION 3.8)

project ("Improve_Skills")

file(GLOB HEADER_FILE
	./Code1291/Code1291.h
	./Code1341/Code1341.h
	./Code1303/Code1303.h
	./Code1856/Code1856.h
)
file(GLOB SOURCE_FILE
	./Code1291/Code1291.cpp
	./Code1341/Code1341.cpp
	./Code1303/Code1303.cpp
	./Code1856/Code1856.cpp
)

set(Module_IMPROVE_SKILLS ${HEADER_FILE} ${SOURCE_FILE})

add_library(Improve_Skills SHARED ${Module_IMPROVE_SKILLS})
