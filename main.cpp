#include <iostream>
#include <Windows.h>
#include "human.h"

using namespace std;

int main () {
	Human b;
	b.add_el();
	b.Print();
	cout << "********************";
	b.add_el();
	b.Print();
	system("pause");
	return 0;
}