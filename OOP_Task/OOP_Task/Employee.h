#pragma once
#include<iostream>
using namespace std;
class Employee
{
private:
	string name;
	int id;
	double salary;
public:
	virtual double get_total_salary() = 0;
	virtual void print() = 0;
	double get_salary();
	string get_name();
	int get_id();
};

