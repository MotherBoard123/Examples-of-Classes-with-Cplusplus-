/* 
 * File:   PersInfo.cpp
 * Author: sudoCode
 * 
 * Created on October 19, 2017, 4:48 PM
 */

#include "PersInfo.h"

PersInfo::PersInfo() {
    this->name = "None";
    this->age = 0;
    this->phone = 0;
}

PersInfo::~PersInfo() {
}

void PersInfo::setName(string name)
{
    this->name = name;
}

void PersInfo::setAge(int age)
{
    this->age = age;
}

void PersInfo::setPhne(int phone)
{ 
    this->phone = phone;
    
}

string PersInfo::getName()
{
    return name;
}

int PersInfo::getAge()
{
    return age;
}

int PersInfo::getPhne()
{
    return phone;
}



