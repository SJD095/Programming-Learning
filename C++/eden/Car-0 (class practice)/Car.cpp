#include <iostream>
#include "Car.h"

using namespace std;

string Car::getManufacturer() const
{
	return manufacturer;
}

void Car::setManufacturer(string newManufacturer)
{
	manufacturer = newManufacturer;
}

double Car::getDisplacement()  const
{
	return displacement;
}
void Car::setDisplacement(double newDisplacement)
{
	displacement = newDisplacement;
}