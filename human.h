#pragma once
#include "FamilyTree.h"
#include "child.h"
#include "grans.h"
#include "parents.h"

using namespace std;

class Human
{
protected:
	int size_g;
	int size_p;
	int size_c;
	base *mas_g;
	base *mas_p;
	base *mas_c;
public:
	Human();
	void Print();
	void FilePrint();
	void FileEnter();

	void add_el();
	base* mem_g();
	base* mem_p();
	base* mem_c();
};

