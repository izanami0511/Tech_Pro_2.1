#include <iostream>
#include <Windows.h>
#include "Keeper.h"

using namespace std;

int main() {
	Keeper<grans> *b1 = new Keeper<grans>;
	grans b;
	b1->addObject(b);
	b1->print();
	cout << "---------------------------------------" << endl;
	b1->addObject(b);
	b1->print();
	system("pause");
	return 0;
}