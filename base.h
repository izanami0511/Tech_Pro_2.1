#pragma once

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class base
{
	string FirstName;
	string Surname;
	string Patronymic;
	string Bday;
	string Dday;
	string age;
	string Description;
	string inf_parents;
	string inf_spouse;
	string inf_children;

public:
	virtual string saymyname() = 0;
	virtual ~base() { cout << "~base " << endl; };
	virtual void setFName(string op) { FirstName = op; };
	virtual void setSName(string op) { Surname = op; };
	virtual void setPatr(string op) { Patronymic = op; };
	virtual void setBday(string op) { Bday = op; };
	virtual void setDday(string op) { Dday = op; };
	virtual void setAge(string op) { age = op; };
	virtual void setDesc(string op) { Description = op; };
	virtual void setInfPar(string op) { inf_parents = op; };
	virtual void setInfSp(string op) { inf_spouse = op; };
	virtual void setInfCh(string op) { inf_children = op; };

	virtual string* getFName() { return &FirstName; };
	virtual string* getSName() { return &Surname; };
	virtual string* getPatr() { return &Patronymic; };
	virtual string* getBday() { return &Bday; };
	virtual string* getDday() { return &Dday; };
	virtual string* getAge() { return &age; };
	virtual string* getDesc() { return &Description; };
	virtual string* getInfPar() { return &inf_parents; };
	virtual string* getInfSp() { return &inf_spouse; };
	virtual string* getInfCh() { return &inf_children; };

};

