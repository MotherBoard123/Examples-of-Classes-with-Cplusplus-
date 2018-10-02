/* 
 * File:   main.cpp
 * Author: Brandon West
 * Created on October 19, 2017, 9:43 AM
 * Purpose: Payroll class declaration
 * 
 */

#ifndef PAYROLL_H
#define PAYROLL_H

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class Payroll {

private:
    float hrPay,hrsWorkd,totPay;
    
public:
    Payroll();
    virtual ~Payroll();
    void setInfo();
    int getPaid();

};

#endif /* PAYROLL_H */

