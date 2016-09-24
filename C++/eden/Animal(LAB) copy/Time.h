#ifndef TIME_H
#define TIME_H

#include <ctime>

using namespace std;

class Time
{
	public:
		Time();
		explicit Time(int totalSeconds);
		int getHour();
		int getMinute();
		int getSecond();
	
	private:
		int seconds;
};

Time::Time()
{
	seconds = time(NULL);
}

Time::Time(int totalSeconds)
{
	seconds = totalSeconds;
}

int Time::getHour()
{
	return seconds / 3600;
}

int Time::getMinute()
{
	return seconds / 60;
}

int Time::getSecond()
{
	return seconds;
}

#endif