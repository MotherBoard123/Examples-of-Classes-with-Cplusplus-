/* 
 * File:   main.cpp
 * Author: Brandon West
 * Created on October 19, 2017, 9:43 AM
 * Purpose: Array class implementation
 * 
 */

#include "Array.h"

Array::Array(int size) {
    
    this->num = new int[size];
}

Array::~Array() {
    delete [] num;
}

void Array::setNum(int size){
    for(int i = 0;i < size;i++){
        cout << i + 1 << ": ";
        cin >> num[i];
    }
}

void Array::fndVal(int size){
    float lowVal = 0;
    int minIndx = 0;
    
    for(int i = 0;i < (size-1);i++){
        minIndx = i;
        lowVal = num[i];
        for(int j = i + 1;j < size;j++){
            if(num[j] < lowVal){
                lowVal = num[j];
                minIndx = j;
            }
        }
        num[minIndx] = num[i];
        num[i] = lowVal;
    }
   
}

int Array::prntVal(int size){
    return num[size];
}

int Array::look(int chce,int size){
    int found = -1;
    
    for(int i = 0;i < size;i++){
        if(num[i] == chce){
            found = 1;
        }
    }
    return found;
}

