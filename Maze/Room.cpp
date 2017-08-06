//
// Created by Mieszko Malawski on 06/08/2017.
//

#include "Room.h"

Room::Room(int roomNo) {
    _roomNumber = roomNo;
}

MapSite* Room::GetSite(Direction direction) const {
    return _sides[direction];
}

void Room::SetSide(Direction direction, MapSite* mapSite) {
    _sides[direction] = mapSite;
}

void Room::Enter() {
    // do somelthind when entering room
}

