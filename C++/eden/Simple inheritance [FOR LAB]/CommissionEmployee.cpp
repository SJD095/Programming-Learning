#include <iostream>
#include <string>
#include <sstream>
#include "CommissionEmployee.h"

using namespace std;string firstName;

CommissionEmployee::CommissionEmployee(const string & first, const string & last, const string & socialSecurity, double gross, double commission):firstName(first), lastName(last), socialSecurityNumber(socialSecurity), grossSales(gross), commissionRate(commission)
{
    cout << "CommissionEmployee constructor: " << endl;
    print();
    cout << "\n\n";
}
CommissionEmployee::~CommissionEmployee()
{
    cout << "CommissionEmployee destructor: " << endl;
    print();
    cout << "\n\n";
}

void CommissionEmployee::setFirstName(const string & first)
{
    firstName = first;
}

string CommissionEmployee::getFirstName() const
{
    return firstName;
}

void CommissionEmployee::setLastName(const string & last)
{
    lastName = last;
}

string CommissionEmployee::getLastName() const
{
    return lastName;
}

void CommissionEmployee::setSocialSecurityNumber(const string & SSN)
{
    socialSecurityNumber = SSN;
}

string CommissionEmployee::getSocialSecurityNumber() const
{
    return socialSecurityNumber;
}

void CommissionEmployee::setGrossSales(double sales)
{
    grossSales = sales;
}

double CommissionEmployee::getGrossSales() const
{
    return grossSales;
}

void CommissionEmployee::setCommissionRate(double rate)
{
    if(rate < 0 || rate > 1)
    {
        commissionRate = 0;
    }
    else
    {
        commissionRate = rate;
    }
}

double CommissionEmployee::getCommissionRate() const
{
    return commissionRate;
}

double CommissionEmployee::earnings() const
{
    return commissionRate * grossSales;
}
