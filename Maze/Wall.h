//
// Created by Mieszko Malawski on 06/08/2017.
//

#ifndef GANGOFFOURBUILDEREXAMPLES_WALL_H
#define GANGOFFOURBUILDEREXAMPLES_WALL_H


#include "MapSite.h"

class Wall : public MapSite {
public:
    Wall();

    virtual void Enter();
};


#endif //GANGOFFOURBUILDEREXAMPLES_WALL_H
