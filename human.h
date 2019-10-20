#pragma once
#include "FamilyTree.h"

class Human : public base
{
protected:

public:

	Human();
	Human(Human& op);
	Human(char &op1);
	~Human();

	virtual void Print();
	virtual void Enter();
	virtual void FilePrint();
	virtual void FileEnter();

	virtual void Description();
	virtual void Name(); 
	virtual void Relantionships();
	virtual void BirthDay();
	virtual void DeathDay();
	virtual void Age();

};

