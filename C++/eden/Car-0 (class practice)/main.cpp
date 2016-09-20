#include <iostream>
#include <string>
#include "Car.h"

using namespace std;
 
int main() {
	Car a;
	string ts;
	double td;
	cin >> ts >> td;
	a.setManufacturer(ts);
	a.setDisplacement(td);
	cout << a.getManufacturer() << "," << a.getDisplacement() << endl;
	cin >> ts >> td;
	a.setManufacturer(ts);
	a.setDisplacement(td);
	cout << a.getManufacturer() << "," << a.getDisplacement() << endl;
	return 0;
}