#include <iostream>
#include "Circle.h" 

using namespace std;

Circle::Circle(double r, int x, int y):Point(x, y)
{
	radius = r;
}
void Circle::setRadius(double r)
{
	radius = r;
}

double Circle::getRadius() const
{
	return radius;
}

double Circle::area() const
{
	return PI * radius * radius;
}

void Circle::print() const
{
	Point::print();
	cout << "The radius of Circle is " << radius << endl;
}