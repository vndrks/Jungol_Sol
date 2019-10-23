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
	./Code1304/Code1304.h
	./Code2046/Code2046.h
	./Code1307/Code1307.h
	./Code1314/Code1314.h
	./Code1523/Code1523.h
	./Code1719/Code1719.h
	./Code1329/Code1329.h
	./Code1641/Code1641.h
	./Code1337/Code1337.h
	./Code1338/Code1338.h
)
file(GLOB SOURCE_FILE
	./Code1291/Code1291.cpp
	./Code1341/Code1341.cpp
	./Code1303/Code1303.cpp
	./Code1856/Code1856.cpp
	./Code2046/Code2046.cpp
	./Code1307/Code1307.cpp
	./Code1314/Code1314.cpp`
	./Code1523/Code1523.cpp
	./Code1719/Code1719.cpp
	./Code1329/Code1329.cpp
	./Code1641/Code1641.cpp
	./Code1337/Code1337.cpp
	./Code1338/Code1338.cpp
)

set(Module_IMPROVE_SKILLS ${HEADER_FILE} ${SOURCE_FILE})

add_library(Improve_Skills SHARED ${Module_IMPROVE_SKILLS})
