#lib file

set(LIB_SRC_DIR ${SRC_DIR}/lib)
set(LIB_SRC ${LIB_SRC_DIR}/lib.cpp)


add_library(lib STATIC ${LIB_SRC})

set_target_properties(lib PROPERTIES CXX_STANDARD 20 
				     CXX_STANDARD_REQUIRED ON)

add_custom_command(TARGET lib POST_BUILD
COMMAND "${CMAKE_COMMAND}" -E copy
	"$<TARGET_FILE:lib>"
	"${CMAKE_BINARY_DIR}/bin/$<CONFIGURATION>/$<TARGET_FILE_NAME:lib>"
)