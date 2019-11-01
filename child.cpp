#include "child.h"

child::child()
{
	cout << "Class child constructor was used.";
	FirstName = "0";
	Surname = "0";
	Patronymic = "0";
	Bday = "0";
	Dday = "0";
	age = 0;
	Description = "0";
	inf_parents = "0";
	inf_spouse = "0";
	inf_children = "0";
}

child::child(child & op)
{
	cout << "Class child copy constructor was used.";
	setFName(*op.getFName());
	setSName(*op.getSName());
	setPatr(*op.getPatr());
	setBday(*op.getBday());
	setDday(*op.getDday());
	setAge(*op.getAge());
	setDesc(*op.getDesc());
	setInfPar(*op.getInfPar());
	setInfSp(*op.getInfSp());
	setInfCh(*op.getInfCh());
}

child::child(string op1, string op2, string op3, string op4, string op5, int op6, string op7, string inf1, string inf2, string inf3)
{
	cout << "Class child constructor with parameters was used.";
	setFName(op1);
	setSName(op2);
	setPatr(op3);
	setBday(op4);
	setDday(op5);
	setAge(op6);
	setDesc(op7);
	setInfPar(inf1);
	setInfSp(inf2);
	setInfCh(inf3);
}


child::~child()
{
	cout << "~child" << endl;
}

void child::saymyname()
{
	;
}
