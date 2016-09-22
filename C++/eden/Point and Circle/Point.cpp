#include <iostream>
#include <string>
#include <sstream>
#include "Point.h"

using namespace std;

Point::Point(int j, int k)
{
	x = j;
	y = k;
}
void Point::setPoint(int j, int k)
{
	x = j;
	y = k;
}

int Point::getX() const
{
	return x;
}

int Point::getY() const
{
	return y;
}

void Point::print() const
{
	cout << "This Point is [" << x << ',' << y << "]" << endl;
}