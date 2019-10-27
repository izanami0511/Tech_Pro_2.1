#pragma once
#include "FamilyTree.h"
#include "child.h"
#include "grans.h"
#include "parents.h"

using namespace std;

class Human
{
protected:
	base **mas;
public:

	void Print();
	void Enter();
	void FilePrint();
	void FileEnter();

	void add_el(base &op);
	
};

