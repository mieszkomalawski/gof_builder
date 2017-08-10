//
// Created by Mieszko Malawski on 10/08/2017.
//

#include "FactoryMazeGame.h"

Maze *FactoryMazeGame::CreateMaze(MazeFactory* mazeFactory) {
    Maze* maze = mazeFactory->CreateMaze();

    Room* room1 = mazeFactory->CreateRoom(1);
    Room* room2 = mazeFactory->CreateRoom(2);

    Door* door = mazeFactory->CreateDoor(room1, room2);

    room1->SetSide(South, door);
    room2->SetSide(North, door);

    maze->AddRoom(room1);
    maze->AddRoom(room2);

    return maze;
}
