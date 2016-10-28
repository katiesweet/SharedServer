xpGetExtern(externIncs externLibs PUBLIC boost wxWidgets)
include_directories(
$TEST_SOURCE_DIR
${externIncs}
${CMAKE_SOURCE_DIR})
add_executable(Test Test.cpp)
target_link_libraries(
Test
Game
)