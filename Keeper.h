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
	T *arr;//������ ��������, T ����� ���� ����� �� grans, parents, child
	unsigned int size;//������ �������(���-�� ��������)

public:
	Keeper() { 
		cout << "Constructor Keeper." << endl;
		size = 0;
		arr = new T [1];
	}

	~Keeper() {
		cout << "~Keeper." << endl;
	}

	//T* buildObject() { T* obj = new T; return obj; }

	void addObject(T obj) {
		cin.ignore(10000, '\n');
		string h;
		cout << "Enter Person's First Name: " << endl;
		cin >> h;
		obj.setFName(h);
		cout << "Enter Person's  Surname: " << endl;
		cin >> h;
		obj.setSName(h);
		cout << "Enter Person's Patronymic: " << endl;
		cin >> h;
		obj.setPatr(h);
		cout << "Enter Person's BirthDay: " << endl;
		cin >> h;
		obj.setBday(h);
		cout << "Enter Person's Death Day (if it's neccesery): " << endl;
		cin >> h;
		obj.setDday(h);
		cout << "Enter Person's Age: " << endl;
		cin >> h;
		obj.setAge(h);
		cout << "Enter Person's Parents(if it's necccesery): " << endl;
		getchar();
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
	void deleteObject(unsigned int index); // index - ����� ���������� ��������

	void print();
};

template <typename T>
void Keeper<T>::print()
{
	for (int i = 0; i < size; i++) {
		cout << arr[i]->getFName() << endl;
	}
}

/*�������� ���������� (��������� � �����, ��. ��� ������)

 template <typename T>
 void MyArray<T>::addAtEnd(T _object) {
 T *tmp = new T[size + 1];
 for (int i = 0; i < size; ++i) tmp[i] = arr[i];
 delete[] this->arr;
 arr = new T[++size];
 for (int i = 0; i < size - 1; ++i) arr[i] = tmp[i];
 arr[size - 1] = _object;
 delete[] tmp;
 }


 */
 /*�������� �������� (������� �� �������, ��. ��� ������)


  template <typename T>
  void MyArray<T>::removeFromIndex(unsigned short _index) {
  if (_index >= size) exc.out_of_bounds_ecx();

  T* temp = new T[size];
  for (unsigned short i = 0; i < size; ++i) temp[i] = arr[i];

  delete[] arr;
  arr = new T[size-1];

  for (unsigned short i = 0, j = 0; i < size; ++i, ++j)
  if (i != _index) arr[j] = temp[i];
  else --j;
  --size;

  delete[] temp;
  }

  */

  //��� ������ - ������������ ������ ��� ����