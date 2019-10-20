#pragma once

#include <iostream>

using namespace std;

class base
{
public:
	
	virtual ~base() { cout << "~base " << endl; };

	virtual void Print() = 0;
	virtual void Enter() = 0;
	virtual void FilePrint() = 0;
	virtual void FileEnter() = 0;

	virtual void Description() = 0;
	virtual void Name() = 0;
	virtual void Relantionships() = 0;
	virtual void BirthDay() = 0;
	virtual void DeathDay() = 0;
	virtual void Age() = 0;
};

