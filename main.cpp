#include <iostream>
#include "Maze/Builder/MazeBuilder.h"
#include "Maze/MazeGame.h"
#include "Maze/Builder/StandardMazeBuilder.h"

int main() {
    MazeBuilder* builder = new StandardMazeBuilder();
    Maze* maze = MazeGame::CreateMaze(*builder);
    std::cout << "Building maze using builder done" << std::endl;
    return 0;
}