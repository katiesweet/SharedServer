xpGetExtern(externIncs externLibs PUBLIC boost wxWidgets)
include_directories(${externIncs} ${CMAKE_SOURCE_DIR})
add_library(Game
Card.hpp
Card.cpp
Game.hpp
Player.hpp
Player.cpp
PlayerNetworking.cpp
)
add_executable(demo main.cpp)
target_link_libraries(
demo
Game
)
