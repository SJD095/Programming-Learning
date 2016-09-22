#include <iostream>
#include <string>
#include <map>
#include <sstream>

using namespace std;

class WordsCounter
{	
	public:
		WordsCounter(int);
		void setBound(int);
		string operator()(string);
		
	private:
		static int bound;	
};

WordsCounter::WordsCounter(int n)
{
	bound = n;
}

int WordsCounter::bound = 0;

string WordsCounter::operator()(string s)
{
	int count  = 0;
	stringstream stream;
	stream << s;
	string tmp;
	
	while(stream >> tmp)
	{
		if(tmp.size() >= WordsCounter::bound)
		{
			count++;
		}
	}
	
	return to_string(count);
}

void WordsCounter::setBound(int n)
{
	bound = n;
}