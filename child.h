#pragma once
<<<<<<< HEAD
#include "FamilyTree.h"
=======
#include "base.h"
>>>>>>> New Fixes
class child :
	public base
{
	string FirstName;
	string Surname;
	string Patronymic;
	string Bday;
	string Dday;
<<<<<<< HEAD
	int age;
=======
	string age;
>>>>>>> New Fixes
	string Description;
	string inf_parents;
	string inf_spouse;
	string inf_children;

public:
	child();
	child(child& op);
<<<<<<< HEAD
	child(string op1, string op2, string op3, string op4, string op5, int op6, string op7, string inf1, string inf2, string inf3);
	~child();
	
=======
	child(string op1, string op2, string op3, string op4, string op5, string op6, string op7, string inf1, string inf2, string inf3);
	~child();

>>>>>>> New Fixes
	void saymyname();

	void setFName(string op) { base::setFName(op); };
	void setSName(string op) { base::setSName(op); };
	void setPatr(string op) { base::setPatr(op); };
	void setBday(string op) { base::setBday(op); };
	void setDday(string op) { base::setDday(op); };
<<<<<<< HEAD
	void setAge (int op) { base::setAge(op); };
=======
	void setAge(string op) { base::setAge(op); };
>>>>>>> New Fixes
	void setDesc(string op) { base::setDesc(op); };
	void setInfPar(string op) { base::setInfPar(op); };
	void setInfSp(string op) { base::setInfSp(op); };
	void setInfCh(string op) { base::setInfCh(op); };

	string* getFName() { return base::getFName(); };
	string* getSName() { return base::getSName(); };
	string* getPatr() { return base::getPatr(); };
	string* getBday() { return base::getDday(); };
	string* getDday() { return base::getDday(); };
<<<<<<< HEAD
	int* getAge() { return base::getAge(); };
=======
	string* getAge() { return base::getAge(); };
>>>>>>> New Fixes
	string* getDesc() { return base::getDesc(); };
	string* getInfPar() { return base::getInfPar(); };
	string* getInfSp() { return base::getInfSp(); };
	string* getInfCh() { return base::getInfCh(); };
<<<<<<< HEAD
};

=======
};
>>>>>>> New Fixes
