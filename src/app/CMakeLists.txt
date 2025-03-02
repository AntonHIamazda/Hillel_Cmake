#app file

set(APP_SRC_DIR ${SRC_DIR}/app)
set(APP_SRC ${APP_SRC_DIR}/app.cpp)


add_executable(app ${APP_SRC})

set_target_properties(app PROPERTIES CXX_STANDARD 20 
				     CXX_STANDARD_REQUIRED ON)

target_link_libraries(app lib)


add_custom_command(TARGET app POST_BUILD
COMMAND "${CMAKE_COMMAND}" -E copy
	"$<TARGET_FILE:app>"
	"${CMAKE_BINARY_DIR}/bin/$<CONFIGURATION>/$<TARGET_FILE_NAME:app>"
)