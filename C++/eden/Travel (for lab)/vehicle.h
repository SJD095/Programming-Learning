#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <cmath>

using namespace std;

struct City {
	double x, y;          // position of the city
	string name;  // name of city
};

class Vehicle {
 public:
	explicit Vehicle(double _speed) : speed(_speed) {}
	virtual void doTravel(const City& src, const City& dest) = 0;
	double getSpeed() const {
		return speed;
	}
	virtual ~Vehicle() {}

 private:
	double speed;
};

class BicycleStrategy: public Vehicle
{
	public:
		BicycleStrategy(double _speed):Vehicle(_speed)
		{
			
		}
		
		virtual void doTravel(const City& src, const City& dest)
		{
			double des;
			des = abs(src.x - dest.x) + abs(src.y - dest.y);
			
			cout << "It takes " << des / getSpeed() << " hours to Travel from Beijing to Guangzhou by Bicycle." << endl;
		}
};

class TrainStrategy: public Vehicle
{
	public:
		TrainStrategy(double _speed):Vehicle(_speed)
		{
			
		}
		
		virtual void doTravel(const City& src, const City& dest)
		{
			double des;
			des = sqrt((src.x - dest.x) * (src.x - dest.x) + (src.y - dest.y) * (src.y - dest.y));
			
			cout << "It takes " << des / getSpeed() << " hours to Travel from Beijing to Guangzhou by Train." << endl;
		}
};

class AirplaneStrategy: public Vehicle
{
	public:
		AirplaneStrategy(double _speed):Vehicle(_speed)
		{
			
		}
		
		virtual void doTravel(const City& src, const City& dest)
		{
			double des;
			des = max(abs(src.x - dest.x), abs(src.y - dest.y));
			
			cout << "It takes " << des / getSpeed() << " hours to Travel from Beijing to Guangzhou by Airplane." << endl;
		}
};

#endif