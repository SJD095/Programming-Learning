#ifndef MANAGER_H
#define MANAGER_H
 
#include <iostream>
#include <map>

using namespace std;

class Manager
{
	public:
		Manager(int);
		double& operator[](string);
		void making_table();
	
	private:
		int max_;
		int size_;
		map<string, double> table_;
};

Manager::Manager(int max):max_(max), size_(0)
{
	
}

double& Manager::operator[](string name)
{
	if(size_ == max_)
	{
		cout << "Full" << endl;
		double re;
		return re;
	}
	else
	{
		if(table_.find(name) == table_.end())
		{
			size_++;
		}
		return table_[name];
	}
}
void Manager::making_table()
{
	for(auto c: table_)
	{
		cout << c.first << "\t" << c.second << endl;
	}
}

#endif