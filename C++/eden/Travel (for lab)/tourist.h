#ifndef VIRTUALBASE_H
#define VIRTUALBASE_H

#include <iostream>
#include "vehicle.h"

using namespace std;

class Tourist {
	 public:
		explicit Tourist(Vehicle* strategy_)
		{
			strategy = strategy_;
		}

		void setStrategy(Vehicle* strategy_)
		{
			strategy = strategy_;
		}

		void travel(const City& src, const City& dest)
		{
			strategy -> doTravel(src, dest);
		}

	 private:
		Vehicle* strategy;
	};

#endif