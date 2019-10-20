#pragma once

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class base
{
public:
	
	virtual ~base() { cout << "~base " << endl; };

	virtual void Print() = 0;
	virtual void Enter() = 0;
	virtual void FilePrint() = 0;
	virtual void FileEnter() = 0;
	virtual void desc() = 0;
	virtual void relantionships() = 0;
};

