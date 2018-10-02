/* 
 * File:   main.cpp
 * Author: Brandon West
 * Created on October 19, 2017, 4:46 PM
 * Purpose:
 * 
 */

#include <cstdlib>
#include <string>
#include <iostream>
#include "PersInfo.h"

using namespace std;

int main(int argc, char** argv) {

    string name;
    int age = 0;
    
    
    int size = 1;
    int phSize = 10;
    //char phone[phSize];
    int phone = 0;
    PersInfo currnt[size];
    
    for(int i = 0;i < size;i++)
    {
        cout << "Enter name:";
        cin >> name;
        currnt[i].setName(name);
        cout << "Enter age:";
        cin >> age;
        currnt[i].setAge(age);
        cout << "Enter phone number:";
        cin >> phone;
        currnt[i].setPhne(phone);
        cin.ignore();
    }
    
    for(int i = 0;i < size;i++)
    {
        cout << currnt[i].getName() << endl;
        cout << currnt[i].getAge() << endl;
        cout << currnt[i].getPhne() << endl;
    }
    
    
    return 0;
}

