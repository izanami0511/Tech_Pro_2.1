#include "Keeper.h"

using namespace std;

int main() {
	Keeper<grans> *ga = new Keeper<grans>;
	grans g;
	Keeper<parents> *pa = new Keeper<parents>;
	parents p;
	Keeper<child> *ca = new Keeper<child>;
	child c;

	ifstream fig("grans_in.txt");
	ofstream fog("grans_out.txt"); 
	ifstream fip("parents_in.txt");
	ofstream fop("parents_out.txt"); 
	ifstream fic("children_in.txt");
	ofstream foc("children_out.txt");

	int menu = 0;
	int submenu = 0;
	int index = 0;
	bool exit = true;

	do {
		system("cls");
		cout << "Choose:" << endl;
		cout << "[1] Add element." << endl;
		cout << "[2] Delete last added element." << endl;
		cout << "[3] Delete element by index." << endl;
		cout << "[4] Print." << endl;
		cout << "[5] Print element by index." << endl;
		cout << "[6] Enter elements from the file." << endl;
		cout << "[7] Print elements in the file." << endl;
		cout << "[8] Exit." << endl;
		cout << ">";
		cin >> menu;
		switch (menu) {
		case 1:
			system("cls");
			cout << "Who you want add?" << endl;
			cout << "[1] Grandparent." << endl;
			cout << "[2] Parent." << endl;
			cout << "[3] Child." << endl;
			cout << ">";
			cin >> submenu;
			switch (submenu) {
			case 1:
				system("cls");
				cin.ignore(1000, '\n');
				ga->addObject(g);
				system("cls");
				cout << "Element was added!" << endl;
				break;
			case 2:
				system("cls");
				cin.ignore(1000, '\n');
				pa->addObject(p);
				system("cls");
				cout << "Element was added!" << endl;
				break;
			case 3:
				system("cls");
				cin.ignore(1000, '\n');
				ca->addObject(c);
				system("cls");
				cout << "Element was added!" << endl;
				break;
			}
			break;
		case 2:
			system("cls");
			cout << "Which element you want to delete?" << endl;
			cout << "[1] Grandparent." << endl;
			cout << "[2] Parent." << endl;
			cout << "[3] Child." << endl;
			cout << ">";
			cin >> submenu;
			switch (submenu) {
			case 1:
				system("cls");
				ga->deleteObject();
				system("cls");
				cout << "Last element was deleted!" << endl;
				break;
			case 2:
				system("cls");
				pa->deleteObject();
				system("cls");
				cout << "Last element was deleted!" << endl;
				break;
			case 3:
				system("cls");
				ca->deleteObject();
				system("cls");
				cout << "Last element was deleted!" << endl;
				break;
			}
			break;
		case 3:
			system("cls");
			cout << "Which element you want to delete?" << endl;
			cout << "[1] Grandparent." << endl;
			cout << "[2] Parent." << endl;
			cout << "[3] Child." << endl;
			cout << ">";
			cin >> submenu;
			switch (submenu) {
			case 1:
				system("cls");
				ga->deleteObject_index(index);
				system("cls");
				cout << "[" << index << "] element was deleted!" << endl;
				break;
			case 2:
				system("cls");
				pa->deleteObject_index(index);
				system("cls");
				cout << "[" << index << "] element was deleted!" << endl;
				break;
			case 3:
				system("cls");
				ca->deleteObject_index(index);
				system("cls");
				cout << "[" << index << "] element was deleted!" << endl;
				break;
			}
			break;
		case 4:
			system("cls");
			cout << "Which element you want to print on the screen?" << endl;
			cout << "[1] Grandparent." << endl;
			cout << "[2] Parent." << endl;
			cout << "[3] Child." << endl;
			cout << ">";
			cin >> submenu;
			switch (submenu) {
			case 1:
				system("cls");
				ga->print();
				system("pause");
				system("cls");
				break;
			case 2:
				system("cls");
				pa->print();
				system("pause");
				system("cls"); 
				break;
			case 3:
				system("cls");
				ca->print();
				system("pause");
				system("cls");
				break;
			}
			break;
		case 5:
			system("cls");
			cout << "Which element you want to print on the screen?" << endl;
			cout << "[1] Grandparent." << endl;
			cout << "[2] Parent." << endl;
			cout << "[3] Child." << endl;
			cout << ">";
			cin >> submenu;
			switch (submenu) {
			case 1:
				system("cls");
				ga->print_index(index);
				system("pause");
				system("cls");
				break;
			case 2:
				system("cls");
				pa->print_index(index);
				system("pause");
				system("cls");
				break;
			case 3:
				system("cls");
				ca->print_index(index);
				system("pause");
				system("cls");
				break;
			}
			break;
		case 6:
			system("cls");
			cout << "What do you want to enter from the file?" << endl;
			cout << "[1] Grandparent." << endl;
			cout << "[2] Parent." << endl;
			cout << "[3] Child." << endl;
			cout << ">";
			cin >> submenu;
			switch (submenu) {
			case 1:
				system("cls");
				cout << "How many elements you want to read from file?" << endl;
				cin >> index;
				ga->enter_from_file(fig,g,index);
				cout << "Read from file!" << endl;
				system("cls");
				break;
			case 2:
				system("cls");
				cout << "How many elements you want to read from file?" << endl;
				cin >> index;
				pa->enter_from_file(fip, p,index);
				cout << "Read from file!" << endl;
				system("cls");
				break;
			case 3:
				system("cls");
				cout << "How many elements you want to read from file?" << endl;
				cin >> index;
				ca->enter_from_file(fic, c,index);
				cout << "Read from file!" << endl;
				system("pause");
				break;
			}
			break;
		case 7:
			system("cls");
			cout << "Who you want to print in the file?" << endl;
			cout << "[1] Grandparent." << endl;
			cout << "[2] Parent." << endl;
			cout << "[3] Child." << endl;
			cout << ">";
			cin >> submenu;
			switch (submenu) {
			case 1:
				system("cls");
				ga->print_in_file(fog);
				system("cls");
				cout << "Printed in the file!" << endl;
				break;
			case 2:
				system("cls");
				pa->print_in_file(fop);
				system("cls");
				cout << "Printed in the file!" << endl;
				break;
			case 3:
				system("cls");
				ca->print_in_file(foc);
				system("cls");
				cout << "Printed in the file!" << endl;
				break;
			}
		case 8:
			exit = false;
			break;
		}
	} while (exit);
	fig.close();
	fog.close();
	fip.close();
	fop.close();
	fic.close();
	foc.close();
	system("pause");
	return 0;
}