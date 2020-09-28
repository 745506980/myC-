#include<iostream>
using namespace std;
class Parent_1
{
public:
	Parent_1()
	{
		a = 0;
		b = 0;
	}
	void print_p()
	{
		cout << "我是爹" << endl;
	}
protected:
private:
	int a;
	int b;
};
class Child_1 : public Parent_1
{
public:
	void print_c()
	{
		cout << "我是孩子" << endl;
	}
protected:
private:
};
/*
兼容性原则中所指的替代包括以下情况
	子类对象可以当做父类对象使用     子类是特殊的父类
	子类对象可以直接赋值给父类对象
	子类对象可以初始化父类对象    //调用父类的copy构造函数
	父类指针可以直接指向子类对象
	父类引用可以直接引用子类对象
*/
void howtoprint(Parent_1* base)
{
	base->print_p();  //只能使用父类的方法
}
void howtoprint2(Parent_1& base)
{
	base.print_p();  //只能使用父类的方法
}
int main11125()
{
	Parent_1 p;
	p.print_p();
	Child_1 c;
	c.print_p();
	c.print_c();
	// 赋值兼容性原则
	// 1、基类指针 (引用) 可以指向 派生类
	Parent_1* p1 = &c;
	p1->print_p();
	//1_2、 指针做函数参数
	howtoprint(&p);
	howtoprint(&c);
	//1_3、引用做函数参数
	howtoprint2(p);
	howtoprint2(c);


	return 0;
}