#include <iostream>

using namespace std;

template <typename T>
class Base
{
	public:
		Base();
		Base(T d):data(d)
		{
			
		}
		
		void print()
		{
			cout << data << endl;
		}
		
	private:
		T data;
};

template <typename C, typename T>
class Derived: public Base<T>
{
	public:
		Derived(C d):data(d)
		{
			
		}
		
		void print()
		{
			cout << data << endl;
		}
	
	private:
		C data;
};