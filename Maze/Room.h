//
// Created by Mieszko Malawski on 06/08/2017.
//

#ifndef GANGOFFOURBUILDEREXAMPLES_ROOM_H
#define GANGOFFOURBUILDEREXAMPLES_ROOM_H


#include "MapSite.h"

enum Direction {North, South, West, East};

class Room : public MapSite {
public:
    Room(int roomNo);
    MapSite* GetSite(Direction) const;
    void SetSide(Direction, MapSite*);

    virtual void Enter();
private:
    MapSite* _sides[4];
protected:
    int _roomNumber;
};


#endif //GANGOFFOURBUILDEREXAMPLES_ROOM_H
