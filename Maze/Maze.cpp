//
// Created by Mieszko Malawski on 06/08/2017.
//

#include "Maze.h"

void Maze::AddRoom(Room * room) {
    _rooms.push_back(room);
}

Room *Maze::GetRoom(int index) const {
    return _rooms[index];
}

Maze::Maze() {

}
