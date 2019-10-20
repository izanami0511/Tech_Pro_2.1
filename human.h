#pragma once
#include "FamilyTree.h"

using namespace std;

class Human : public base
{
protected:

	string *FirstName = new string;
	string *Surname = new string;
	string *Patronymic = new string;
	string *Bday = new string;
	string *Dday = new string;
	int *age = new int;
	string *Description = new string;
	string *inf_parents = new string;
	string *inf_spouse = new string;
	string *inf_children = new string;


public:

	Human();
	Human(Human& op);
	Human(string *op1, string *op2, string *op3, string *op4, string *op5, int *op6, string *op7, string *inf1, string *inf2, string *inf3);
	~Human();

	virtual void Print();
	virtual void Enter();
	virtual void FilePrint();
	virtual void FileEnter();

	void add_el(base &op);
	void desc();
	void relantionships();
};

