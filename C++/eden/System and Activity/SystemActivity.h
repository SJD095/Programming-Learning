#ifndef SYSTEMACTIVITY_H
#define SYSTEMACTIVITY_H
#include "abstract.h"

class Windows: public System
{
	public:
		virtual string info();
		virtual ~Windows();
};

class Linux: public System
{
	public:
		virtual string info();
		virtual ~Linux();
};

class Game: public Activity
{
	public:
		Game(System* s, string name);
		virtual string play();
};

class Study: public Activity
{
	public:
		Study(System* s, string name);
		virtual string play();
};

#endif