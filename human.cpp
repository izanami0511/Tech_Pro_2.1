#include "human.h"

using namespace std;

void Human::Print()
{
}


void Human::FileEnter()
{
}

void Human::add_el()
{
	int _age;
	string h;
	int k = 0;
	bool exit = true;
	do{
	cout << "Choose who to add." << endl;
	cout << "1. Grandparent." << endl;
	cout << "2. Parents." << endl;
	cout << "3. Children." << endl;
	cin >> k;
	switch (k)
	{
	case 1:
		// если не заработает обнуляй h
		size_g++;
		cout << "Enter Person's First Name: " << endl;
		cin >> h;
		mas_g[size_g].setFName(h);
		cout << "Enter Person's  Surname: " << endl;
		cin >> h;
		mas_g[size_g].setSName(h);
		cout << "Enter Person's Patronymic: " << endl;
		cin >> h;
		mas_g[size_g].setPatr(h);
		cout << "Enter Person's BirthDay: " << endl;
		cin >> h;
		mas_g[size_g].setBday(h);
		cout << "Enter Person's Death Day (if it's neccesery): " << endl;
		cin >> h;
		mas_g[size_g].setDday(h);
		cout << "Enter Person's Age: " << endl;
		cin >> _age;
		mas_g[size_g].setAge(_age);
		cout << "Enter Person's Parents(if it's necccesery): " << endl;
		getline(cin, h);
		mas_g[size_g].setInfPar(h);
		cout << "Enter Person's Spouse(if it's necccesery): " << endl;
		getline(cin, h);
		mas_g[size_g].setInfSp(h);
		cout << "Enter Person's Children(if it's necccesery): " << endl;
		getline(cin, h);
		mas_g[size_g].setInfCh(h);
		break;
	case 2:
		size_p++;
		cout << "Enter Person's First Name: " << endl;
		cin >> h;
		mas_p[size_p].setFName(h);
		cout << "Enter Person's  Surname: " << endl;
		cin >> h;
		mas_p[size_p].setSName(h);
		cout << "Enter Person's Patronymic: " << endl;
		cin >> h;
		mas_p[size_p].setPatr(h);
		cout << "Enter Person's BirthDay: " << endl;
		cin >> h;
		mas_p[size_p].setBday(h);
		cout << "Enter Person's Death Day (if it's neccesery): " << endl;
		cin >> h;
		mas_p[size_p].setDday(h);
		cout << "Enter Person's Age: " << endl;
		cin >> _age;
		mas_p[size_p].setAge(_age);
		cout << "Enter Person's Parents(if it's necccesery): " << endl;
		getline(cin, h);
		mas_p[size_p].setInfPar(h);
		cout << "Enter Person's Spouse(if it's necccesery): " << endl;
		getline(cin, h);
		mas_p[size_p].setInfSp(h);
		cout << "Enter Person's Children(if it's necccesery): " << endl;
		getline(cin, h);
		mas_p[size_p].setInfCh(h);
		break;
	case 3:
		size_c++;
		cout << "Enter Person's First Name: " << endl;
		cin >> h;
		mas_c[size_c].setFName(h);
		cout << "Enter Person's  Surname: " << endl;
		cin >> h;
		mas_c[size_c].setSName(h);
		cout << "Enter Person's Patronymic: " << endl;
		cin >> h;
		mas_c[size_c].setPatr(h);
		cout << "Enter Person's BirthDay: " << endl;
		cin >> h;
		mas_c[size_c].setBday(h);
		cout << "Enter Person's Death Day (if it's neccesery): " << endl;
		cin >> h;
		mas_c[size_c].setDday(h);
		cout << "Enter Person's Age: " << endl;
		cin >> _age;
		mas_c[size_c].setAge(_age);
		cout << "Enter Person's Parents(if it's necccesery): " << endl;
		getline(cin, h);
		mas_c[size_c].setInfPar(h);
		cout << "Enter Person's Spouse(if it's necccesery): " << endl;
		getline(cin, h);
		mas_c[size_c].setInfSp(h);
		cout << "Enter Person's Children(if it's necccesery): " << endl;
		getline(cin, h);
		mas_c[size_c].setInfCh(h);
		break;
	case 5:
		exit = false;
		break;
	default:
		break;
	}
	}while (exit);
}






