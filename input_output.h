#pragma once
#include<iostream>
#include"DATA_GAME.h"
#include<cstdlib>
#include<limits>
using namespace std;



namespace proccess{
    int Randomi(int from , int to){
        int x = rand() % (to - from + 1) + from;
        return x;
    }

    int input_number(){
        int x = 0;
        cin >>x;
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout<<"Invalid Value !!! \n";
            cin>>x;
        }
        return x;
    }
}
