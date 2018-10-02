/* 
 * File:   main.cpp
 * Author: Brandon West
 * Created on October 19, 2017, 9:43 AM
 * Purpose: Program accepts 3 test score from user using TstScore class.
 * 
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

#include "TstScore.h"

using namespace std;

int main(int argc, char** argv) {

    int size = 3;
    float averg = 0;
    TstScore test[size];
    
    //Set test scores
    for(int i = 0;i < size;i++){
        cout << "Enter test score: ";
        test[i].setScor();
    }
    
    
    //Get test score total
    for(int i = 0;i < size;i++){
      
        averg += test[i].getAvg();
    }
    
    //Output average test scores
    cout << "Enter test score: ";
    cout << setprecision(2) << fixed;
    cout << averg / size << " Percent" << endl;
    
    return 0;
}