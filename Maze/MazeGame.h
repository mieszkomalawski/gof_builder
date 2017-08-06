//
// Created by Mieszko Malawski on 06/08/2017.
//

#ifndef GANGOFFOURBUILDEREXAMPLES_MAZEGAME_H
#define GANGOFFOURBUILDEREXAMPLES_MAZEGAME_H


#include "Maze.h"
#include "Builder/MazeBuilder.h"

class MazeGame : public Maze {
public:
    static Maze* CreateMaze(MazeBuilder&);
};


#endif //GANGOFFOURBUILDEREXAMPLES_MAZEGAME_H
