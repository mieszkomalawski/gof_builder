//
// Created by Mieszko Malawski on 10/08/2017.
//

#include "BombedMazeFactory.h"
#include "../BombedRoom.h"
#include "../BombedDoor.h"

Room *BombedMazeFactory::CreateRoom(int roomNo) {
    return new BombedRoom(roomNo);
}

Door *BombedMazeFactory::CreateDoor(Room *roomFrom, Room *roomTo) {
    return new BombedDoor(roomFrom, roomTo);
}
