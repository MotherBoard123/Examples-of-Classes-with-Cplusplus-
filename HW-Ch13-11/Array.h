/* 
 * File:   main.cpp
 * Author: Brandon West
 * Created on October 19, 2017, 9:43 AM
 * Purpose: Array class declaration
 * 
 */

#ifndef ARRAY_H
#define ARRAY_H

#include <cstdlib>
#include <iomanip>
#include <iostream>

using namespace std;

class Array {

private:
    int *num;
public:
    Array(int);
    virtual ~Array();
    void setNum(int);
    void fndVal(int);
    int prntVal(int);
    int look(int,int);

};

#endif /* ARRAY_H */

