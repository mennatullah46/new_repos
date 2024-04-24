#include "Engineer.h"
void Engineer::set_overtime_hours(int hours) {
    overtime_hours = hours;
}

void Engineer:: set_overtime_hour_rate(float rate) {
    overtime_hour_rate = rate;
}

double Engineer::get_salary() {
    double overtime_pay = (double)overtime_hours * (double)overtime_hour_rate;
    return ((double)exp * 1000) + overtime_pay;
}

void Engineer::print() {
    std::cout << "Name: " << get_name() << std::endl;
    std::cout << "ID: " << get_id() << std::endl;
    std::cout << "Salary: " << get_salary() << std::endl;
    std::cout << "Spciality: " << exp << std::endl;
    std::cout << "Exp: " << exp << std::endl;
    std::cout << "overtime_hours: " << exp << std::endl;
    std::cout << "overtime_hour_rate: " << exp << std::endl;
}
