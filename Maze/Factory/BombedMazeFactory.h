//
// Created by Mieszko Malawski on 10/08/2017.
//

#ifndef GANGOFFOURBUILDEREXAMPLES_BOMBEDMAZEFACTORY_H
#define GANGOFFOURBUILDEREXAMPLES_BOMBEDMAZEFACTORY_H


#include "MazeFactory.h"

class BombedMazeFactory : public MazeFactory {
    virtual Room* CreateRoom(int roomNo);
    virtual Door* CreateDoor(Room* roomFrom, Room* roomTo);
};


#endif //GANGOFFOURBUILDEREXAMPLES_BOMBEDMAZEFACTORY_H
