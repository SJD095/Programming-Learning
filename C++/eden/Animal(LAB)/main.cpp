#include <string>
#include <iostream>
#include "animal.h"
 
using namespace std;
 
int main() {
 
	Dog mdog("Golf", "yellow");
	Donkey mdonkey("Eeyore", 98);
 
	cout << mdog.shout() << endl;
	cout << mdog.getColor() << endl;
	cout << mdonkey.shout() << endl;
	cout << mdonkey.getWeight() << endl;
 
	return 0;
}