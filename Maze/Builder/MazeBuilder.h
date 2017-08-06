//
// Created by Mieszko Malawski on 06/08/2017.
//

#ifndef GANGOFFOURBUILDEREXAMPLES_MAZEBUILDER_H
#define GANGOFFOURBUILDEREXAMPLES_MAZEBUILDER_H


#include "../Maze.h"

class MazeBuilder {
public:
    virtual void BuildMaze() = 0;
    virtual void BuildRoom(int room) = 0;
    virtual void BuildDoor(int roomFrom, int roomTo) = 0;
    virtual Maze* GetMaze() = 0;
};


#endif //GANGOFFOURBUILDEREXAMPLES_MAZEBUILDER_H
