#include "human.h"

using namespace std;



Human::Human()
{
	size_g = size_c = size_p = 0;
	mas_g = new grans[1];
	mas_p = new parents[1];
	mas_c = new child[1];
}

base* Human::mem_g()
{
	base *ob_g = new grans;
	return ob_g;
}

base* Human::mem_p()
{
	base *ob_p = new parents;
	return ob_p;
}

base* Human::mem_c()
{
	base *ob_c = new child;
	return ob_c;
}


void Human::Print()
{
	for (int i = 0; i < size_g; i++) {
		cout << *mas_g[i].getFName() << endl;
	}
}


void Human::FileEnter()
{
}



void Human::add_el()
{/*
	int _age = 0;
	string h;
	int k = 0;
	bool exit = true;
	int sizetmp = 1;

	do{
	cout << "Choose who to add." << endl;
	cout << "1. Grandparent." << endl;
	cout << "2. Parents." << endl;
	cout << "3. Children." << endl;
	cin >> k;
	switch (k)
	{
	case 1:{
		cin.ignore(10000,'\n');
		base *tmp = new grans;
		cout << "Enter Person's First Name: " << endl;
		cin >> h;
		tmp->setFName(h);
		cout << "Enter Person's  Surname: " << endl;
		cin >> h;
		tmp->setSName(h);
		cout << "Enter Person's Patronymic: " << endl;
		cin >> h;
		tmp->setPatr(h);
		cout << "Enter Person's BirthDay: " << endl;
		cin >> h;
		tmp->setBday(h);
		cout << "Enter Person's Death Day (if it's neccesery): " << endl;
		cin >> h;
		tmp->setDday(h);
		cout << "Enter Person's Age: " << endl;
		cin >> _age;
		tmp->setAge(_age);
		cout << "Enter Person's Parents(if it's necccesery): " << endl;
		getchar();
		getline(cin, h);
		tmp->setInfPar(h);
		cout << "Enter Person's Spouse(if it's necccesery): " << endl;
		getline(cin, h);
		tmp->setInfSp(h);
		cout << "Enter Person's Children(if it's necccesery): " << endl;
		getline(cin, h);
		tmp->setInfCh(h);
		if (size_g == 0) {
			base *tmp_arr = new grans[1];
			for (int i = 0; i < size_g; i++) {
				tmp_arr[i] = mas_g[i];
			}
			delete[] mas_g;
			mas_g = new grans[1];
			for (int i = 0; i < size_g; i++) {
				mas_g[i] = tmp_arr[i];
			}
			mas_g[size_g] = *tmp;
			sizetmp++;
			size_g++;
			delete[] tmp_arr;
			delete tmp;
		}
		else {
			base *tmp_arr = new grans[sizetmp];
			for (int i = 0; i < size_g; i++) {
				tmp_arr[i] = mas_g[i];
			}
			delete[] mas_g;
			mas_g = new grans[sizetmp];
			for (int i = 0; i < size_g; i++) {
				mas_g[i] = tmp_arr[i];
			}
			mas_g[size_g] = *tmp;
			sizetmp++;
			size_g++;
			delete[] tmp_arr;
			delete tmp;
		}
		
		exit = false;
		break;
	}
	case 2:{
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
	}
	case 3:{
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
	}
	case 5:
		exit = false;
		break;
	}
	}while (exit);
	*/
cin.ignore(10000, '\n');
int _age = 0;
string h;
base *tmp = new grans;
cout << "Enter Person's First Name: " << endl;
cin >> h;
tmp->setFName(h);
cout << "Enter Person's  Surname: " << endl;
cin >> h;
tmp->setSName(h);
cout << "Enter Person's Patronymic: " << endl;
cin >> h;
tmp->setPatr(h);
cout << "Enter Person's BirthDay: " << endl;
cin >> h;
tmp->setBday(h);
cout << "Enter Person's Death Day (if it's neccesery): " << endl;
cin >> h;
tmp->setDday(h);
cout << "Enter Person's Age: " << endl;
cin >> _age;
tmp->setAge(_age);
cout << "Enter Person's Parents(if it's necccesery): " << endl;
getchar();
getline(cin, h);
tmp->setInfPar(h);
cout << "Enter Person's Spouse(if it's necccesery): " << endl;
getline(cin, h);
tmp->setInfSp(h);
cout << "Enter Person's Children(if it's necccesery): " << endl;
getline(cin, h);
tmp->setInfCh(h);
base *temp = new grans[size_g + 1];
for (int i = 0; i < size_g; ++i) temp[i] = mas_g[i];
delete[] this->mas_g;
mas_g = new grans[++size_g];
for (int i = 0; i < size_g - 1; ++i) mas_g[i] = temp[i];
mas_g[size_g - 1] = *tmp;
delete tmp;
delete[] temp;
}







