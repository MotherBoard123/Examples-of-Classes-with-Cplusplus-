/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PersInfo.h
 * Author: sudoCode
 *
 * Created on October 19, 2017, 4:48 PM
 */

#ifndef PERSINFO_H
#define PERSINFO_H

#include <cstdlib>
#include <string>
#include <iostream>
using namespace std;

class PersInfo {

    private:
        static const int SIZE = 2;
        string name;
        int age;
        int phone;

    public:
        PersInfo();
        ~PersInfo();
        void setName(string);
        void setAge(int);
        void setPhne(int);
        string getName();
        int getAge();
        int getPhne();

};

#endif /* PERSINFO_H */

