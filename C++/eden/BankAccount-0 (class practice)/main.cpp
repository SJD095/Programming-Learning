#include <iostream>
#include "BankAccount.h"

using namespace std;
 
void display(const BankAccount &b) {
	cout << b.getBalance() << "-" << b.getName() << endl;
}
 
int main() {
	BankAccount b;
	int p, q = 5;
	b.setBalance(1205);
	b.setName("Kotenbu");
	display(b);
	b.reset();
	display(b);
	b.setName("");
	display(b);
	b.setName("Oreki");
	while (q--) {
		cin >> p;
		b.setBalance(p);
		display(b);
	}
	return 0;
}