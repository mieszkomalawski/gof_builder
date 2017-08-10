//
// Created by Mieszko Malawski on 07/08/2017.
//

#include "MazeFactory.h"

Maze *MazeFactory::CreateMaze() {
    return new Maze;
}

Room *MazeFactory::CreateRoom(int roomNo) {
    return new Room(roomNo);
}

Door *MazeFactory::CreateDoor(Room *roomFrom, Room *roomTo) {
    return new Door(roomFrom, roomTo);
}
