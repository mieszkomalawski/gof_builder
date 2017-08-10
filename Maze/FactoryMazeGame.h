//
// Created by Mieszko Malawski on 10/08/2017.
//

#ifndef GANGOFFOURBUILDEREXAMPLES_FACTORYMAZEGAME_H
#define GANGOFFOURBUILDEREXAMPLES_FACTORYMAZEGAME_H


#include "Maze.h"
#include "Factory/MazeFactory.h"

class FactoryMazeGame : public Maze {
public:
    static Maze* CreateMaze(MazeFactory*);
};


#endif //GANGOFFOURBUILDEREXAMPLES_FACTORYMAZEGAME_H
