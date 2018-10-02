/* 
 * File:   main.cpp
 * Author: Brandon West
 * Created on October 17, 2017, 8:24 PM
 * Purpose: Class design of 3 integers: month,day,year. Program calls funtions
 * to display to print 3 different date styles.
 */

#include "date.h"
#include <iostream>
using namespace std;

//Print date format: 12/12/2017

void Date::pNumDate(int m, int d, int y)
{
    cout << m << "/" << d << "/" << y << endl; 
}

//Print date format: December 31,2017

void Date::pStdDate(int m, int d, int y)
{
    string month;
    
    //Determine month string
    switch(m)
    {
        case 1: month = "January";
                break;
        case 2: month = "February";
                break;
        case 3: month = "March";
                break;
        case 4: month = "April";
                break;
        case 5: month = "May";
                break;
        case 6: month = "June";
                break;
        case 7: month = "July";
                break;
        case 8: month = "August";
                break;
        case 9: month = "September";
                break;
        case 10: month = "October";
                break;
        case 11: month = "November";
                break;
        case 12: month = "Demember";
                break;
    }
    
    cout << month << " " << d << "," << y << endl;
    
}

void Date::pMLADate(int m, int d, int y)
{
    string month;
    
    //Determine month string
    switch(m)
    {
        case 1: month = "January";
                break;
        case 2: month = "February";
                break;
        case 3: month = "March";
                break;
        case 4: month = "April";
                break;
        case 5: month = "May";
                break;
        case 6: month = "June";
                break;
        case 7: month = "July";
                break;
        case 8: month = "August";
                break;
        case 9: month = "September";
                break;
        case 10: month = "October";
                break;
        case 11: month = "November";
                break;
        case 12: month = "December";
                break;
    }
    
    cout << d << " " << month << " " << y << endl;
}

