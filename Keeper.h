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

	void addObject(T obj);
	void deleteObject(); 
	void print();
	void deleteObject_index(unsigned int index);
	void print_index(unsigned int index);
	void enter_from_file(ifstream &file,T obj);
	void print_in_file(ofstream &file);
};

template <typename T>
void Keeper<T>::addObject(T obj) {
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
	T *temp = new T[size + 1];
	for (int i = 0; i < size; i++)
		temp[i] = arr[i];
	delete[] arr;
	arr = new T[++size];
	for (int i = 0; i < size - 1; ++i)
		arr[i] = temp[i];
	arr[size - 1] = obj;
	delete[] temp;
}

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
	T *temp = new T[size + 1];
	for (int i = 0; i < size; i++)
		temp[i] = arr[i];
	delete[] arr;
	arr = new T[size];
	for (int i = 0, j = 0; i < size; ++i,++j) {
		if (i != index)
			arr[j] = temp[i];
		else  
			j--; 
	}
	size--;
	delete[]temp;
}

template <typename T>
void Keeper<T>::print_index(unsigned int index)
{
	
		cout << "[" << index + 1 << "] Person, you had added." << endl;
		cout << *(arr[index].getFName()) << endl;
		cout << *(arr[index].getSName()) << endl;
		cout << *(arr[index].getPatr()) << endl;
		cout << *(arr[index].getBday()) << endl;
		cout << *(arr[index].getDday()) << endl;
		cout << *(arr[index].getAge()) << endl;
		cout << *(arr[index].getInfPar()) << endl;
		cout << *(arr[index].getInfSp()) << endl;
		cout << *(arr[index].getInfCh()) << endl;
}

template <typename T>
void Keeper<T>::enter_from_file(ifstream &file,T obj)
{
	string h;
	getline(file, h);
	obj.setFName(h);
	getline(file, h);
	obj.setSName(h);
	getline(file, h);
	obj.setPatr(h);
	getline(file, h);
	obj.setBday(h);
	getline(file, h);
	obj.setDday(h);
	getline(file, h);
	obj.setAge(h);
	getline(file, h);
	obj.setInfPar(h);
	getline(file, h);
	obj.setInfSp(h);
	getline(file, h);
	obj.setInfCh(h);
	T *temp = new T[size + 1];
	for (int i = 0; i < size; i++)
		temp[i] = arr[i];
	delete[] arr;
	arr = new T[++size];
	for (int i = 0; i < size - 1; ++i)
		arr[i] = temp[i];
	arr[size - 1] = obj;
	delete[] temp;
}

template <typename T>
void Keeper<T>::print_in_file(ofstream &file)
{
	for (int i = 0; i < size; i++) {
		file << "[" << i + 1 << "] Person, you had added." << endl;
		file << *(arr[i].getFName()) << endl;
		file << *(arr[i].getSName()) << endl;
		file << *(arr[i].getPatr()) << endl;
		file << *(arr[i].getBday()) << endl;
		file << *(arr[i].getDday()) << endl;
		file << *(arr[i].getAge()) << endl;
		file << *(arr[i].getInfPar()) << endl;
		file << *(arr[i].getInfSp()) << endl;
		file << *(arr[i].getInfCh()) << endl;
	}
}