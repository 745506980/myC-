#include<iostream>
using namespace std;
/*
public :修饰的成员变量 方法 在类的内部、外部都能使用
private: 修饰的成员变量、方法 只能在类的内部使用
protected: 修饰的成员变量、方法 ，在类的内部使用，在继承的子类中使用
*/
class Parent
{
public:
	void print()
	{
		cout << a << endl;
		cout << b << endl;
	}
protected:
private:
	int a;
	int b;
};
/* 
1、子类(派生类)拥有父类(基类)的所有成员变量和成员函数
2、子类就是一种特殊的父类
3、子类对象可以当做父类对象使用
4、子类可以拥有父类没有的方法和属性
*/
//class Child : private Parent
//class Child : protected Parent
class Child : public Parent
{
public:
	
protected:

private:
	int c;

};
int main222()
{
	Child c1;
	
	return 0;
}