#pragma once
#include<iostream>
#include"Employee.h"
using namespace std;
class Engineer:Employee
{
private:
    string Specialty;
    int exp;
    int overtime_hours;
    float overtime_hour_rate;
public:
    void set_overtime_hours(int hours);
    void set_overtime_hour_rate(float rate);
    double get_salary();
    void print();

};

