//
// Created by Mieszko Malawski on 06/08/2017.
//

#ifndef GANGOFFOURBUILDEREXAMPLES_STANDARDMAZEBUILDER_H
#define GANGOFFOURBUILDEREXAMPLES_STANDARDMAZEBUILDER_H


#include "MazeBuilder.h"

class StandardMazeBuilder : public MazeBuilder {
public:
    virtual void BuildMaze();
    virtual void BuildRoom(int room);
    virtual void BuildDoor(int roomFrom, int roomTo);
    virtual Maze* GetMaze();

private:
    Maze* _currentMaze;
};


#endif //GANGOFFOURBUILDEREXAMPLES_STANDARDMAZEBUILDER_H
