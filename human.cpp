#include "human.h"

using namespace std;

void Human::Print()
{

}

void Human::Enter()
{
	cout << "Enter Firstname: ";
	cin >> *FirstName;
	cout << "Enter Surname: ";
	cin >> *Surname;
	cout << "Enter Patronymic: ";
	cin >> *Patronymic;
	cout << "Enter Birth day: ";
	cin >> *Bday;
	cout << "Enter Death day (if it's necessary: ";
	cin >> *Dday;
	cout << "Enter age: ";
	cin >> *age;
}

void Human::FilePrint()
{
}

void Human::add_el(base &op)
{
	op.desc();
	op.Enter();
	op.relantionships();
}

void Human::desc()
{
	base* G = new grans;

	char k;
	cout << "Choose who to add: " << endl;
	cout << "1.Grand Parent." << endl;
	cout << "2. Parent." << endl;
	cout << "3. Child." << endl;
	cin >> k;
	switch (k)
	{
		case '1': 
		{
			
		}
		default:
			break;
	}
}

void Human::relantionships()
{
	cout << "Enter Person's parents: " << endl;
	cin >> *inf_parents;
	cout << "Enter Person's spouse: " << endl;
	cin >> *inf_spouse;
	cout << "Enter Person's children: " << endl;
	cin >> *inf_children;
}



