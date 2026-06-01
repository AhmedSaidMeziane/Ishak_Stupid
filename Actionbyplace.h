#pragma once
#include<iostream>
#include"DATA_GAME.h"
#include"input_output.h"
using namespace std;

EN_beach beach()
{
    return (EN_beach) proccess::Randomi(0,4);
}

EN_Forest forest(){
    return (EN_Forest) proccess::Randomi(0,4);
}
EN_river river()
{
     return (EN_river) proccess::Randomi(0,3);
}

EN_cave cave(){
    return (EN_cave)proccess::Randomi(0,5);
}
EN_plane plane(){
    return (EN_plane)proccess::Randomi(0,5);
}