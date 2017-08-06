//
// Created by Mieszko Malawski on 06/08/2017.
//

#include "Door.h"

Door::Door(Room * room1, Room * room2) {
    _room1 = room1;
    _room2 = room2;
}

void Door::Enter() {
    // do smth on enter
}

Room *Door::OtherSideRoom(Room * room) {
    if(_room1 == room){
        return _room2;
    }
    return _room1;
}
