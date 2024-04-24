#include "Sales.h"
void Sales:: set_gross_sales(float sales) {
	gross_sales = sales;
}

void Sales::set_comm_rate(float rate) {
	commrtial_rate = rate;
}

double Sales::get_total_salary() {
	return (get_salary() + (gross_sales * commrtial_rate));
}

void Sales::print() {
	std::cout << "Name: " << get_name() << std::endl;
	std::cout << "Employee ID: " << get_id() << std::endl;
	std::cout << "Salary: " << get_salary() << std::endl;
	std::cout << "Commission Rate: " << commrtial_rate << std::endl;
}
