#ifndef ARITHMETIC_H
#define ARITHMETIC_H

using namespace std;
 
template<typename T>
class Arithmetic
{
	public:
		Arithmetic(T , T);
		T addition();
		T subtraction();
		T multiplication();
		T division();
		
	private:
		T a;
		T b;
};
 
#endif