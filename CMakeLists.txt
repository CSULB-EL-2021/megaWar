cmake_minimum_required(VERSION 3.20)
project(prog6)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
# add_compile_options(-Wall -Wextra -Werror)
set(SOURCE_FILES main.cpp Card.cpp CardPile.cpp Game.cpp MegaDeck.cpp MegaDeck.hpp Deck.cpp Deck.hpp Player.cpp Player.hpp)
add_executable(prog6 ${SOURCE_FILES})
