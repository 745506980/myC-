#pragma once  //����ָ��
#include<iostream>
using namespace std;
class Point
{
public:
	Point();
	Point(int* p);
	~Point();
	int & operator *(); //ʹ��& *p��������ֵ
	int * operator->();
private:
	int* p;
};

