/* 
 * File:   main.cpp
 * Author: Brandon West
 * Created on October 19, 2017, 9:43 AM
 * Purpose: Program accepts a number, finds highest, lowest, and average value
 * stored
 * 
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>

#include "Array.h"

using namespace std;

int main(int argc, char** argv) {

    int size;
    int found = -1; //if value found != -1
    int chce; //Choice to output lowest or highest
    
    cout << "Enter size of array";
    cin >> size;
    
    Array numArry(size);
    
    cout << "Enter values to the array: ";
    numArry.setNum(size);
    
    //Sort to determine lowest/highest
    numArry.fndVal(size);
    
    cout << "Enter 1 for lowest or 2 highest value: ";
    cin >> chce;
    
    //Output lowest or highest
    if(chce == 1){
        //Output lowest
        cout << numArry.prntVal(0);
    }
    else cout << "Highest: " << numArry.prntVal(size - 1);
    
    //Find a value
    cout << "Enter value to find:";
    cin >> chce;
    
    found = numArry.look(chce,size);
    
    if(found != -1){
        cout << "Value found.";
    }
    else cout << "Value not found.";
    
    numArry.~Array();
   
    return 0;
}

