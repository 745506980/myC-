#include "Point.h"

Point::Point()
{
	p = NULL;
}
Point::Point(int* p)
{
	this->p = p;
}
Point::~Point()
{
	delete p;
}
int& Point::operator *()//使用& *p可以做左值
{
	return*p;
}
int* Point::operator->()
{
	return p;
}