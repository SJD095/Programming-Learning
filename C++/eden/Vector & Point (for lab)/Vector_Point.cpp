#include <iostream>
#include "Vector_Point.h"

using namespace std;

Point::Point()
{
	x_ = 0;
	y_ = 0;
}

Point::Point(int x, int y)
{
    x_ = x;
	y_ = y;
}

// copy constructor
Point::Point(const Point& other)
{
    x_ = other.x_;
	y_ = other.y_;
}

// overloading operator <<, format : "1 2"
ostream& operator<<(ostream& out, const Point& point)
{
    out << point.x_ << " " << point.y_ << endl;

	return out;
}


Vector::Vector()
{
    x_ = 0;
	y_ = 0;
}

Vector::Vector(int x, int y)
{
    x_ = x;
	y_ = y;
}

// copy constructor
Vector::Vector(const Vector& other)
{
    x_ = other.x_;
	y_ = other.y_;
}

Vector Vector::operator+(const Vector& other)
{
    return Vector(x_ + other.x_, y_ + other.y_);
}

// declare as friend function for class Vector
Point operator+(const Point& point, const Vector& other)
{
    return Point(point.x_ + other.x_, point.y_ + other.y_);
}

// overloading operator <<, format : "1 2"
ostream& operator<<(ostream& out, const Vector& vect)
{
    out << vect.x_ << " " << vect.y_ << endl;

	return out;
}
