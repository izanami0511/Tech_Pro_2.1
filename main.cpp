#include "Keeper.h"

using namespace std;

int main() {
	Keeper<grans> *b1 = new Keeper<grans>;
	grans b;
	Keeper<parents> *p1 = new Keeper<parents>;
	parents p;
	p1->addObject(p);
	system("cls");
	p1->print();
	cout << "---------------------------------------" << endl;
	p1->addObject(p);
	system("cls");
	p1->print();
	cout << "---------------------------------------" << endl;
	p1->addObject(p);
	system("cls");
	p1->print();
	p1->deleteObject_index(0);
	p1->print();
	system("pause");
	return 0;
}