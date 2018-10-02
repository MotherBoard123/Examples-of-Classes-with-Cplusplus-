/* 
 * File:   main.cpp
 * Author: Brandon West
 * Created on October 19, 2017, 9:43 AM
 * Purpose: Payroll class implementation
 * 
 */

#include "Payroll.h"

Payroll::Payroll() {
    this->hrPay = 0.0;
    this->hrsWorkd = 0.0;
    this->totPay = 0.0;
}

Payroll::~Payroll() {
}

void Payroll::setInfo(){
    cin >> hrsWorkd;
    cout << "Enter houly pay:";
    cin >> hrPay;
}

int Payroll::getPaid(){
    
    return hrPay * hrsWorkd;
}

