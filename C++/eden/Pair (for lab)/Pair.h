#include <iostream>
#include <string>
#include <map>
#include <sstream>

using namespace std;

template<typename T1, typename T2>
class Pair
{
	public:
		Pair();
		void setFirst(T1);
		void setSecond(T2);
		T1 getFirst();
		T2 getSecond();
		void swap(Pair&);
	private:
		T1 first;
		T2 second;
};

template<typename T1, typename T2>
Pair<T1, T2>::Pair()
{
}

template<typename T1, typename T2>
void Pair<T1, T2>::setFirst(T1 a)
{
	first = a;
}

template<typename T1, typename T2>
void Pair<T1, T2>::setSecond(T2 b)
{
	second = b;
}

template<typename T1, typename T2>
T1 Pair<T1, T2>::getFirst()
{
	return first;
}

template<typename T1, typename T2>
T2 Pair<T1, T2>::getSecond()
{
	return second;
}

template<typename T1, typename T2>
void Pair<T1, T2>::swap(Pair& other)
{
	T1 tmp1 = first;
	T2 tmp2 = second;
	
	first = other.first;
	second = other.second;
	
	other.first = tmp1;
	other.second = tmp2;
}