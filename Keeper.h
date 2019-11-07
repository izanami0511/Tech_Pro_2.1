#pragma once
#include <iostream>
#include <string>
#include "base.h"
#include "child.h"
#include "grans.h"
#include "parents.h"

using namespace std;

template <typename T>
class Keeper {
	T *arr;//Массив объектов, T может быть любым из grans, parents, child
	unsigned int size;//Размер массива(кол-во объектов)

public:
	Keeper() { 
		cout << "Constructor Keeper." << endl;
		size = 0;
		arr = new T [1];
	}

	~Keeper() {
		cout << "~Keeper." << endl;
	}

	void addObject(T obj) {
		string h;
		cout << "Enter Person's First Name: " << endl;
		getline(cin, h);
		obj.setFName(h);
		cout << "Enter Person's  Surname: " << endl;
		getline(cin, h);
		obj.setSName(h);
		cout << "Enter Person's Patronymic: " << endl;
		getline(cin, h);
		obj.setPatr(h);
		cout << "Enter Person's BirthDay: " << endl;
		getline(cin, h);
		obj.setBday(h);
		cout << "Enter Person's Death Day (if it's neccesery): " << endl;
		getline(cin, h);
		obj.setDday(h);
		cout << "Enter Person's Age: " << endl;
		getline(cin, h);
		obj.setAge(h);
		cout << "Enter Person's Parents(if it's necccesery): " << endl;
		getline(cin, h);
		obj.setInfPar(h);
		cout << "Enter Person's Spouse(if it's necccesery): " << endl;
		getline(cin, h);
		obj.setInfSp(h);
		cout << "Enter Person's Children(if it's necccesery): " << endl;
		getline(cin, h);
		obj.setInfCh(h);
		T *temp = new T[size+1];
		for (int i = 0; i < size; i++)
			temp[i] = arr[i];
		delete[] arr;
		arr = new T[++size];
		for (int i = 0; i < size - 1; ++i) 
			arr[i] = temp[i];
		arr[size - 1] = obj;
		delete[] temp;
	}
	void deleteObject(); 
	void print();
	void deleteObject_index(unsigned int index);
};

//add po nomeru

//del po nomeru

//print/vivod po nomeru

template <typename T>
void Keeper<T>::print()
{
	for (int i = 0; i < size; i++) {
		cout << "[" << i + 1 << "] Person, you had added." << endl;
		cout << *(arr[i].getFName()) << endl;
		cout << *(arr[i].getSName()) << endl;
		cout << *(arr[i].getPatr()) << endl;
		cout << *(arr[i].getBday()) << endl;
		cout << *(arr[i].getDday()) << endl;
		cout << *(arr[i].getAge()) << endl;
		cout << *(arr[i].getInfPar()) << endl;
		cout << *(arr[i].getInfSp()) << endl;
		cout << *(arr[i].getInfCh()) << endl;
	}
}

template <typename T>
void Keeper<T>::deleteObject()
{
	T *temp = new T[size + 1];
	for (int i = 0; i < size; i++)
		temp[i] = arr[i];
	delete[] arr;
	arr = new T[--size];
	for (int i = 0; i < size; ++i)
		arr[i] = temp[i];
}

template <typename T>
void Keeper<T>::deleteObject_index(unsigned int index)
{
	//doesn't delete last of 3 element...
	T *temp = new T[size + 1];
	for (int i = 0; i < size; i++)
		temp[i] = arr[i];
	delete[] arr;
	arr = new T[size-1];
	for (int i = 0, j = 0; i < size; ++i,++j) {
		if (i != index)
			arr[j] = temp[i];
		else { j--; }
			size--;
	}
	delete[]temp;
}