/* 
 * File:   main.cpp
 * Author: Brandon West
 * Created on October 19, 2017, 9:43 AM
 * Purpose: Test score class implementation
 * 
 */

#include "TstScore.h"
#include <cstdlib>
#include <iostream>
using namespace std;

//Constructor
TstScore::TstScore() {
    this->score = 0;
    this->avg = 0;
}

TstScore::~TstScore() {
 
}

void TstScore::setScor(){
   
     cin >> score;//Enter test score
}

int TstScore::getAvg(){
    return score;
}