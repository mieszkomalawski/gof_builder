cmake_minimum_required(VERSION 3.8)
project(GangOfFourBuilderExamples)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Maze/MapSite.cpp Maze/MapSite.h Maze/Room.cpp Maze/Room.h Maze/Wall.cpp Maze/Wall.h Maze/Door.cpp Maze/Door.h Maze/Maze.cpp Maze/Maze.h Maze/Builder/MazeBuilder.cpp Maze/Builder/MazeBuilder.h Maze/MazeGame.cpp Maze/MazeGame.h Maze/Builder/StandardMazeBuilder.cpp Maze/Builder/StandardMazeBuilder.h Maze/Factory/MazeFactory.cpp Maze/Factory/MazeFactory.h Maze/BombedDoor.cpp Maze/BombedDoor.h Maze/BombedRoom.cpp Maze/BombedRoom.h Maze/FactoryMazeGame.cpp Maze/FactoryMazeGame.h Maze/Factory/BombedMazeFactory.cpp Maze/Factory/BombedMazeFactory.h)
add_executable(GangOfFourBuilderExamples ${SOURCE_FILES})