#include <iostream>
#include "Maze/Builder/MazeBuilder.h"
#include "Maze/MazeGame.h"
#include "Maze/Builder/StandardMazeBuilder.h"
#include "Maze/Factory/MazeFactory.h"
#include "Maze/Factory/BombedMazeFactory.h"
#include "Maze/FactoryMazeGame.h"

int main(int argc, char* argv[]) {
    MazeBuilder* builder = new StandardMazeBuilder();
    Maze* maze = MazeGame::CreateMaze(*builder);
    MazeFactory* mazeFactory;

    std::cout << "Building maze using builder done" << std::endl;

    if(0 == strncmp("bombed", argv[1], 10)){
        mazeFactory = new BombedMazeFactory;
    }else{
        mazeFactory = new MazeFactory;
    }

    Maze* mazeBuildWithFactory = FactoryMazeGame::CreateMaze(mazeFactory);
    std::cout << "Building maze using factory done" << std::endl;
    return 0;
}