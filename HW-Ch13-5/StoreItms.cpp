/* 
 * File:   main.cpp
 * Author: Brandon West
 * Created on October 20, 2017, 10:38 AM
 * Purpose: Class implementation
 * 
 */

#include <valarray>

#include "StoreItms.h"

StoreItms::StoreItms() {
    this->descript = "None";
    this->cntUnits = 0;
    
}

StoreItms::StoreItms(string des,int cnt,char price[]) {
    this->descript = des;
    this->cntUnits = cnt;
    
    int i = 0;
    while(price != '\0'){
        this->price[i] = price[i];
        i++;
    }
}

StoreItms::~StoreItms() {
}

void StoreItms::setItems(){
    cin >> descript >> cntUnits >> price;
    cin.ignore();
}

void StoreItms::getItems(){
    cout << "Description: " << descript << endl;
    cout << "Units on hand: " << cntUnits << endl;
    int i = 0;
    while(price != '\0'){
        cout << price[i];
        i++;
    }
}