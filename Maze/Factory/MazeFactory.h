//
// Created by Mieszko Malawski on 07/08/2017.
//

#ifndef GANGOFFOURBUILDEREXAMPLES_MAZEFACTORY_H
#define GANGOFFOURBUILDEREXAMPLES_MAZEFACTORY_H


#include "../Maze.h"
#include "../Door.h"

class MazeFactory {
public:
    // virtualne metody umozliwiaja late binding
    virtual Maze* CreateMaze();
    virtual Room* CreateRoom(int roomNo);
    virtual Door* CreateDoor(Room* roomFrom, Room* roomTo);
};


#endif //GANGOFFOURBUILDEREXAMPLES_MAZEFACTORY_H
