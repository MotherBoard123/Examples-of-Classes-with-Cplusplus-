/* 
 * File:   main.cpp
 * Author: Brandon West
 * Created on October 17, 2017, 8:24 PM
 * Purpose: Class design of 3 integers: month,day,year. Program calls funtions
 * to display to print 3 different date styles.
 */

#include <cstdlib>
#include "date.h"
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
 
    Date input;
    
    int month,day,year;
    
    cout << "Enter month (1-12):" << endl;
    cin >> month;
    
    while(month < 1 || month > 12)
    {
        cout << "Invalid entry" << endl;
        cout << "Enter month (1-12):" << endl;
        cin >> month;
    }
    
    cout << "Enter day:" << endl;
    cin >> day;
    
    while(day < 1 || day > 31)
    {
        cout << "Invalid entry" << endl;
        cout << "Enter day (1-31):" << endl;
        cin >> day;
    }
    cout << "Enter year:" << endl;
    cin >> year;
    
    cout << endl;
    
    //Print Month/Day/Year format
    input.pNumDate(month,day,year);
    
    //Print ex: December 12, 2017
    input.pStdDate(month,day,year);
    
    //Print MLA format date
    input.pMLADate(month,day,year);

    return 0;
}

