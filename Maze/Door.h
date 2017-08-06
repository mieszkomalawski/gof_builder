//
// Created by Mieszko Malawski on 06/08/2017.
//

#ifndef GANGOFFOURBUILDEREXAMPLES_DOOR_H
#define GANGOFFOURBUILDEREXAMPLES_DOOR_H


#include "MapSite.h"
#include "Room.h"

class Door : public MapSite {
public:
    Door(Room* = 0, Room* = 0);

    virtual void Enter();

    Room* OtherSideRoom(Room*);

private:
    Room* _room1;
    Room* _room2;
    bool _isOpen;
};


#endif //GANGOFFOURBUILDEREXAMPLES_DOOR_H
