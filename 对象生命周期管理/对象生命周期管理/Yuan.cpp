#include "Yuan.h"
#include<iostream>
using namespace std;
Yuan::Yuan()
{
	a = 0;
	b = 0;
	cout << "无参构造函数被调用" << endl;
}
Yuan::Yuan(int a_, int b_)
{
	a = a_;
	b = b_;
	cout << "有参构造函数被调用" << endl;

}
Yuan::~Yuan()
{
	a = 0;
	b = 0;
	cout << "析构函数被调用" << endl;
}
int Yuan::printC()
{
	return c;
}
void Yuan::addC()
{
	c++;
}
void Yuan::print_()  
{
	/*静态成员函数 中只能使用静态成员变量 
	不能使用普通成员变量 和 普通成员函数...
	  原因是静态成员和静态成员变量都是属于整个类的，所有对象都共享
	  如果使用普通变量，则会报错 因为编译器不知道该普通变量是属于哪一个对象的变量


	*/
	cout << c << endl;
	//cout << a << endl; //对非静态成员“Yuan::a”的非法引用 
}