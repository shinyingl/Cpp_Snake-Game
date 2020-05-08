#ifndef ROCK_H
#define ROCK_H


#include <iostream>

class Rock
{
public:
    
    Rock();
    int ob_size{3};
    void SetObstacleSize();
    int GetSize() const;
   
};


#endif