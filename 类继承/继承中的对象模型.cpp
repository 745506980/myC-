#include<iostream>
using namespace std;

/*
类在C++编译器的内部可以理解为结构体
子类是由父类成员叠加子类新成员得到的
*/
class A
{
public:
protected:
	int x;
	int y;
private:
	
};
class B :public A
{
public:
protected:
	int a;
private:
};
int main()
{
	B b;
	cout << sizeof(b) << endl;  //12 
	return 0;
}
