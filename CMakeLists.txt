cmake_minimum_required(VERSION 3.11)

project(
	game
	VERSION 0.1
	DESCRIPTION "some roguelike sim"
	LANGUAGES CXX
	)

set(SOURCES
	src/die.cpp
	src/action.cpp
	src/player.cpp
	src/enemy.cpp
	./game.cpp
	)

add_compile_options(-Wall -Wextra -pedantic -Werror)

add_executable(game ${SOURCES})

target_include_directories(game
	PRIVATE
	${PROJECT_SOURCE_DIR}/inc
	)
