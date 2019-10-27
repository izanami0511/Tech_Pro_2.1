#pragma once
#include "FamilyTree.h"
#include "child.h"
#include "grans.h"
#include "parents.h"

using namespace std;

class Human
{
protected:
	int size_g = 0;
	int size_p = 0;
	int size_c = 0;
	base *mas_g = new grans[size_g];
	base *mas_p = new parents[size_p];
	base *mas_c = new child[size_c];
public:

	void Print();
	void FilePrint();
	void FileEnter();

	void add_el();
	
};

