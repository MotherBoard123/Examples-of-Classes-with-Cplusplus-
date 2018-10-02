/* 
 * File:   main.cpp
 * Author: Brandon West
 * Created on October 20, 2017, 10:38 AM
 * Purpose: Class declaration
 * 
 */

#ifndef STOREITMS_H
#define STOREITMS_H

#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

class StoreItms {

private:
    string descript;
    int cntUnits;
    char price[10];

public:
    StoreItms();
    StoreItms(string,int,char[]);
    virtual ~StoreItms();
    void setItems();
    void getItems();

};

#endif /* STOREITMS_H */

