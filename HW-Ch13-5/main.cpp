/* 
 * File:   main.cpp
 * Author: Brandon West
 * Created on October 20, 2017, 10:38 AM
 * Purpose: Program collects info of retail items and stores them in retail 
 * class.
 * 
 */

#include <cstdlib>
#include <iostream>
#include <string>

#include "StoreItms.h"

using namespace std;

int main(int argc, char** argv) {

    string descrpt;
    int unitCnt;
    int count =0;
    char price[10];
    char chk = 1;
    StoreItms item[2];
    
    while(chk == 1){
        
        cout << "Enter description number of units and price:";
        item[count].setItems();
        count++;
        
        cout << "Press enter to continue:" << endl;
        cin.ignore();
        cout << "Enter 2 to exit.";
        cin >> chk;
        cin.ignore();
    }
    
    //Print data
    for(int i = 0;i < count;i++){
        item[i].getItems();
    }
    
    
    return 0;
}

