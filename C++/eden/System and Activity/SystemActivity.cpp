#include <iostream>
#include "SystemActivity.h" 

using namespace std;

string Windows::info()
{
	return "Windows QAQ";
}

Windows::~Windows()
{
	cout << "Windows shutdown" << endl;
}

string Linux::info()
{
	return "Linux T_T";
}
Linux::~Linux()
{
	cout << "Liux shutdown" << endl;
}

Game::Game(System* s, string n):Activity(s, n)
{
	system_ = s;
	name_ = n;
}

string Game::play()
{
	return name_ + " is playing game on " + system_ -> info() + "\n";
}

Study::Study(System* s, string n):Activity(s, n)
{
	system_ = s;
	name_ = n;
}

string Study::play()
{
	return name_ + " is studying on " + system_ -> info() + "\n"; 
}