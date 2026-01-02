cmake_minimum_required(VERSION 3.10)

set(BIN "intruder_dectector")
file(GLOB SRC_FILES "${CMAKE_CURRENT_SOURCE_DIR}/source/*.cpp")

project(${BIN} CXX)

find_package(OpenCV REQUIRED)

include_directories(
	${OpenCV_INCLUDE_DIRS} PUBLIC
	${CMAKE_CURRENT_SOURCE_DIR}/header PUBLIC
)

add_executable(${BIN} ${SRC_FILES})

target_link_libraries(${BIN} ${OpenCV_LIBS})
