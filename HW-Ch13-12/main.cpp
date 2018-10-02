/* 
 * File:   main.cpp
 * Author: Brandon West
 * Created on October 19, 2017, 9:43 AM
 * Purpose: Payroll program collects workers pay and hours worked.
 * 
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <string>

#include "Payroll.h"

using namespace std;

int main(int argc, char** argv) {

    int size = 2;
    float total = 0;
    Payroll emplyee[size];
    
    for(int i = 0;i < size;i++){
        
        cout << "Enter number of hours worked: ";
        emplyee[i].setInfo();
    }
    
    //Calculate total paid each employee
    for(int i = 0;i < size;i++){
        cout << setprecision(2) << fixed << showpoint;
        cout << i + 1 << " total: " << emplyee[i].getPaid() << endl;
    }
   
    return 0;
}