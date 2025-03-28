cmake_minimum_required(VERSION 3.31.6)
project($make_test)
set(SRC "./src")
include_directories(${SRC})
add_executable(make_test ${SRC}/main.cpp
			 ${SRC}/function.cpp
			 ${SRC}/fruit.cpp
			)
set_target_properties(make_test
			PROPERTIES
			CXX_STANDARD 20
			CXX_STANDARD_REQUIRED ON
			)
