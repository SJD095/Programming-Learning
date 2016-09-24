#include <iostream>
#include "BasePlusCommissionEmployee.h" 

using namespace std;

BasePlusCommissionEmployee::BasePlusCommissionEmployee(const string & first, const string & last, const string & socialSecurity, double gross, double commission, double base):CommissionEmployee(first, last, socialSecurity, gross, commission), baseSalary(base)
{
	cout << "BasePlusCommissionEmployee constructor: " << endl;
	print();
	cout << "\n\n";
}

BasePlusCommissionEmployee::~BasePlusCommissionEmployee()
{
	cout << "BasePlusCommissionEmployee destructor: " << endl;
	print();
	cout << "\n\n";
}

void BasePlusCommissionEmployee::setBaseSalary(double salary)
{
	if(salary > 0)
	{
		baseSalary = salary;
	}
	else
	{
		baseSalary = 0;
	}
}

double BasePlusCommissionEmployee::getBaseSalary() const
{
	return baseSalary;
}

double BasePlusCommissionEmployee::earnings() const
{
	return baseSalary + CommissionEmployee::earnings();
}

void BasePlusCommissionEmployee::print() const
{
	cout << "base-salaried ";
	CommissionEmployee::print();
	cout << "\nbase salary: " << getBaseSalary();
}