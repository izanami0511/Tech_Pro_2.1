

#include "human.h"

using namespace std;

Human::Human()
{
	cout << "Main constructor was used.";
	FirstName = nullptr;
	Surname = nullptr;
	Patronymic = nullptr;
	Bday = nullptr;
	Dday = nullptr;
	age = nullptr;
	Description = nullptr;
	inf_parents = nullptr;
	inf_spouse =  nullptr;
	inf_children = nullptr; 
}

Human::Human(Human & op)
{
	cout << "Main copy constructor was used.";
	FirstName = op.FirstName;
	Surname = op.Surname;
	Patronymic = op.Patronymic;
	Bday = op.Bday;
	Dday = op.Dday;
	age = op.age;
	Description = op.Description;
	inf_parents = op.inf_parents;
	inf_spouse = op.inf_spouse;
	inf_children = op.inf_spouse;
}

Human::Human(string *op1, string *op2, string *op3, string *op4, string *op5, int *op6, string *op7, string *inf1, string *inf2, string *inf3)
{
	cout << "Main constructor with parameters was used.";
	FirstName = op1;
	Surname = op2;
	Patronymic = op3;
	Bday = op4;
	Dday = op5;
	age = op6;
	Description = op7;
	inf_parents = inf1;
	inf_spouse = inf2;
	inf_children = inf3;
}


Human::~Human()
{
	delete FirstName;
	delete Surname;
	delete Patronymic;
	delete Bday;
	delete Dday;
	delete age;
	delete Description;
	delete inf_parents;
	delete inf_spouse;
	delete inf_children;
}

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
	char k;
	cout << "Choose who to add: ";
	switch (k)
	{
		case '1': 
		{
			//
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



