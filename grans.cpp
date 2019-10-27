#include "grans.h"

grans::grans()
{
	cout << "Class grans constructor was used.";
	FirstName = nullptr;
	Surname = nullptr;
	Patronymic = nullptr;
	Bday = nullptr;
	Dday = nullptr;
	age = 0;
	Description = nullptr;
	inf_parents = nullptr;
	inf_spouse = nullptr;
	inf_children = nullptr;
}

grans::grans(grans & op)
{
	cout << "Class grans copy constructor was used.";
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

grans::grans(string op1, string op2, string op3, string op4, string op5, int op6, string op7, string inf1, string inf2, string inf3)
{
	cout << "Class grans constructor with parameters was used.";
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


grans::~grans()
{
	cout << "~grans" << endl;
}
