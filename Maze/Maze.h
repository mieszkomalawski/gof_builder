//
// Created by Mieszko Malawski on 06/08/2017.
//

#ifndef GANGOFFOURBUILDEREXAMPLES_MAZE_H
#define GANGOFFOURBUILDEREXAMPLES_MAZE_H


#include <vector>
#include "Room.h"

class Maze {
public:
    Maze();
    void AddRoom(Room*);
    Room* GetRoom(int) const;

private:
    std::vector<Room*> _rooms;
};


#endif //GANGOFFOURBUILDEREXAMPLES_MAZE_H
