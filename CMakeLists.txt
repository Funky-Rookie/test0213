#设置工程名称11
project(3_2_Cpp_Test LANGUAGES CXX)

#添加文件树
file(
	GLOB _SRCS
	main.cpp
	test.h
	test.cpp
)

add_executable(${PROJECT_NAME} ${_SRCS})