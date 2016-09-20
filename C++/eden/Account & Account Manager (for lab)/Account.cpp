#include <iostream>
#include <string>
#include <sstream>
#include "Account.h"

using namespace std;

int Account::count_ = 0;

int Account::getCount()
{
	return count_;
}
 
Account::Account(const string& name)
{
	name_ = name;
	balance_ = 0;
	count_++;
	log_ += "Create an account "+name+"\n";
}

Account::Account(const string& name, int balance)
{
	name_ = name;
	balance_ = balance;
	log_ += "Create an account "+name+"\n";
	count_++;
}

Account::~Account()
{
	count_--;
}

void Account::deposit(int amount)
{
	if(amount < 0)
	{
		cout << "Error operation!" << endl;
		log_ += "Error operation!\n";
	}
	else
	{
		balance_ += amount;
		log_ += "Deposit " + intToStr(amount) + " yuan\n"; 
	}
}

bool Account::withdraw(int amount)
{
	if(amount < 0)
	{
		cout << "You don't have enough money!" << endl;
		log_ += "Error operation!\n";
	}
	else if(amount > balance_)
	{
		cout << "Error operation!" << endl;
		log_ += "Error operation!\n";
	}
	else
	{
		balance_ -= amount;
		log_ += "Withdraw " + intToStr(amount) + " yuan\n"; 
	}
}

string Account::intToStr(int target)
{
	stringstream s;
	s << target;
	
	return s.str();
}