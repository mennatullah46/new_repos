#pragma once
#include"Employee.h"
class Sales:Employee
{
private:
	float gross_sales, commrtial_rate;
public:

	void set_gross_sales(float sales);
	void set_comm_rate(float rate);
	double get_total_salary();
	void print();

};

