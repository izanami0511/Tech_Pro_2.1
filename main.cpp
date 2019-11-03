#include <iostream>
#include <Windows.h>
<<<<<<< HEAD
#include "human.h"

using namespace std;

int main () {
	Human b;
	b.add_el();
	b.Print();
	cout << "********************";
	b.add_el();
	b.Print();
=======
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
>>>>>>> New Fixes
	system("pause");
	return 0;
}