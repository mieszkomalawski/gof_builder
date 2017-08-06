//
// Created by Mieszko Malawski on 06/08/2017.
//

#include "MazeGame.h"

/**
 * passing by reference
 * @param mazeBuilder
 * @return
 */
Maze* MazeGame::CreateMaze(MazeBuilder& mazeBuilder) {
    mazeBuilder.BuildMaze();

    mazeBuilder.BuildRoom(1);
    mazeBuilder.BuildRoom(2);

    mazeBuilder.BuildDoor(1, 2);

    return mazeBuilder.GetMaze();
}
