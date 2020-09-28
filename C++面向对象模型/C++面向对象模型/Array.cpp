#include"Array.h"
#include<iostream>
#include<stdlib.h>
#include<cstring>
using namespace std;
Array::Array(int length)
{
	Alenth = length;
	Marray = new int[length];
}
Array::Array(const Array &obj)
{
	Alenth = obj.Alenth;
	Marray = new int[Alenth];
	for (int i = 0; i < Alenth; i++)
	{
		Marray[i] = obj.Marray[i];
	}
	cout << "copy构造函数被调用" << endl;
}
Array::~Array()
{
	if (Marray != NULL)
	{
		delete[] Marray;
		Alenth = 0;
	}
	cout << "析构函数被调用" << endl;
}
void Array::setData(int index, int value)
{
	Marray[index] = value;
}
int Array::getindex(int value)
{
	int i = 0;
	while (i < Alenth)
	{
		if (Marray[i] == value)
			return i;
		i++;
	}
	if (i == Alenth)
	return -1;
}
void Array::getArray()
{
	for (int i = 0; i < Alenth; i++)
	{
		cout <<i<<" "<< Marray[i] << endl;
	}
}