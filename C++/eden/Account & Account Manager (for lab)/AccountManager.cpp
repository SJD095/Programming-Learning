#include <iostream>
using std::cout;
 
#include "AccountManager.h" 

double AccountManager::interest_rate_ = 0.05;

void AccountManager::createAccount(const string& name)
{
	accounts_[Account::getCount()] = new Account(name);
}

void AccountManager::createAccount(const string& name, int balance)
{
	accounts_[Account::getCount()] = new Account(name, balance);
}

void AccountManager::caculateInterest()
{
	if(Account::getCount() == 0)
	{
		cout << "Not any account!" << std::endl;
		return;
	}
	
	for (int i = 0; i < Account::getCount(); i++)
	{
		accounts_[i]->deposit(accounts_[i]->getBalance() * interest_rate_);
	}
}

Account* AccountManager::getAccount(int position)
{
	return accounts_[position];
}

AccountManager::~AccountManager()
{
	for(auto p: accounts_)
	{
		delete p;
	}
}