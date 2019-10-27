#pragma once
#include "FamilyTree.h"
class child :
	public base
{
	string FirstName;
	string Surname;
	string Patronymic;
	string Bday;
	string Dday;
	int age;
	string Description;
	string inf_parents;
	string inf_spouse;
	string inf_children;

public:
	child();
	child(child& op);
	child(string op1, string op2, string op3, string op4, string op5, int op6, string op7, string inf1, string inf2, string inf3);
	~child();

	virtual void setFName(string op) { base::setFName(op); };
	virtual void setSName(string op) { base::setSName(op); };
	virtual void setPatr(string op) { base::setPatr(op); };
	virtual void setBday(string op) { base::setBday(op); };
	virtual void setDday(string op) { base::setDday(op); };
	virtual void setAge (int op) { base::setAge(op); };
	virtual void setDesc(string op) { base::setDesc(op); };
	virtual void setInfPar(string op) { base::setInfPar(op); };
	virtual void setInfSp(string op) { base::setInfSp(op); };
	virtual void setInfCh(string op) { base::setInfCh(op); };

	virtual string* getFName() { return base::getFName(); };
	virtual string* getSName() { return base::getSName(); };
	virtual string* getPatr() { return base::getPatr(); };
	virtual string* getBday() { return base::getDday(); };
	virtual string* getDday() { return base::getDday(); };
	virtual int* getAge() { return base::getAge(); };
	virtual string* getDesc() { return base::getDesc(); };
	virtual string* getInfPar() { return base::getInfPar(); };
	virtual string* getInfSp() { return base::getInfSp(); };
	virtual string* getInfCh() { return base::getInfCh(); };
};

