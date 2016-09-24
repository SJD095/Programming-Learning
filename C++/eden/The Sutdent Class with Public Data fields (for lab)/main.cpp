#include <iostream>
#include "Student.h"
using std::cin;
int main() {
	int test;
	int id, nid, age;
	char names[10][20] = { "Aries", "Bill gates",
						   "John Smith", "Blanton",
							"Blanche", "Halley",
							"Hamilton", "Rachel",
							"Jacobs", "Jan"};
	cin >> test;
	cin >> id >> nid >> age;
	if (test == 0) {
		Student st;
		print(st);
		
	} else if (test == 1) {
		Student st(id, names[nid], age);
		print(st);
	} else if (test == 2) {
		Student st;
		set(&st, id, names[nid], age);
		print(st);
	} else if (test == 3) {
		Student st(id);
		print(st);
	} else {
		Student st(id, names[nid]);
		print(st);
	}
  return 0;
}