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
int& Point::operator *()//ʹ��& *p��������ֵ
{
	return*p;
}
int* Point::operator->()
{
	return p;
}