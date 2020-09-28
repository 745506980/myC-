#pragma once  //智能指针
#include<iostream>
using namespace std;
class Point
{
public:
	Point();
	Point(int* p);
	~Point();
	int & operator *(); //使用& *p可以做左值
	int * operator->();
private:
	int* p;
};

