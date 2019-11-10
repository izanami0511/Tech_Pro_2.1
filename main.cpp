#include "Keeper.h"

using namespace std;

int main() {
	Keeper<grans> *b1 = new Keeper<grans>;
	grans b;
	Keeper<parents> *p1 = new Keeper<parents>;
	parents p;
	ifstream fin("grans_in.txt");
	ofstream fout("grans_out.txt");
	p1->enter_from_file(fin,p);
	p1->enter_from_file(fin, p);
	p1->print_in_file(fout);
	system("pause");
	return 0;
}