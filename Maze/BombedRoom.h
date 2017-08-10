//
// Created by Mieszko Malawski on 07/08/2017.
//

#ifndef GANGOFFOURBUILDEREXAMPLES_BOMBEDROOM_H
#define GANGOFFOURBUILDEREXAMPLES_BOMBEDROOM_H

#include "Room.h"

class BombedRoom : public Room {
public:
    BombedRoom(int roomNo) : Room(roomNo) {};
    virtual void Enter();
};


#endif //GANGOFFOURBUILDEREXAMPLES_BOMBEDROOM_H
