//
// Created by Mieszko Malawski on 06/08/2017.
//

#include "StandardMazeBuilder.h"
#include "../Door.h"

void StandardMazeBuilder::BuildMaze() {
    _currentMaze = new Maze();
}

void StandardMazeBuilder::BuildRoom(int room) {
    _currentMaze->AddRoom(new Room(room));
}

void StandardMazeBuilder::BuildDoor(int roomFrom, int roomTo) {
    Room* room1 = _currentMaze->GetRoom(roomFrom - 1);
    Room* room2 = _currentMaze->GetRoom(roomTo - 1);

    Door* door = new Door(room1, room2);

    room1->SetSide(North, door);
}

Maze *StandardMazeBuilder::GetMaze() {
    return _currentMaze;
}
