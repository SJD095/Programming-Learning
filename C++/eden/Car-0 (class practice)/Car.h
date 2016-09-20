#ifndef CAR_H
#define CAR_H
 
#include <string>

using namespace std;
 
class Car {
	public:
		string getManufacturer() const;
		void setManufacturer(string newManufacturer);
		double getDisplacement()  const;
		void setDisplacement(double newDisplacement);
	private:
		string manufacturer;
		double displacement;
};
 
#endif