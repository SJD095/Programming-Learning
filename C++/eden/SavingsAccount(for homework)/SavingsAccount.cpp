#include <iostream>
#include <string>
#include "SavingsAccount.h"

using namespace std;

double  SavingsAccount::annualInterestRate = 0.03;

void SavingsAccount::calculateMonthlyInterest()
{
	savingsBalance *= 1 + annualInterestRate / 12;
}

void SavingsAccount::modifyInterestRate(double newRate)
{
	annualInterestRate = newRate;
}