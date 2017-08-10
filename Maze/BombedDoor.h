//
// Created by Mieszko Malawski on 07/08/2017.
//

#ifndef GANGOFFOURBUILDEREXAMPLES_BOMBEDDOOR_H
#define GANGOFFOURBUILDEREXAMPLES_BOMBEDDOOR_H


#include "Door.h"

class BombedDoor : public Door {
public:
    // cialo metody mozna zdefiniowac odrazu
    explicit BombedDoor(Room* room1 = 0, Room* room2 = 0) : Door(room1, room2){};
    virtual void Enter() {
        // kaboom!
    }
};


#endif //GANGOFFOURBUILDEREXAMPLES_BOMBEDDOOR_H
