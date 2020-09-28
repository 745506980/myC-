#include<iostream>
using namespace std;
/*
	
*/
class Complex {
private:
	int a;
	int b;
public:
	Complex(int a = 0, int b = 0)
	{
		this->a = a;
		this->b = b;
	}
	void output()
	{
		cout << a << "  "<< b << endl;
	}
	Complex(const Complex& c)
	{
		a = c.a;
		b = c.b;
	//	cout <<"copy"<< a << b << endl;
		
	}
	/*Complex& operator+(Complex& c2)
	{
		this->a = this->a + c2.a;
		this->b = this->b + c2.b;
		return *this;
	}*/
	~Complex()
	{
	//	cout << a << b << endl;
	}
	friend Complex operator+(Complex &c1, Complex &c2); //全局函数法
	//因为数据为私有属性在全局函数使用时需要声明为友元函数
	//2、成员函数法
	Complex operator-(Complex& c2)
	{
		Complex tmp(this->a - c2.a, this->b - c2.b);
		return tmp;
	}
};

//运算符重载本质是一个函数 operator  //全局函数法
Complex operator+(Complex &c1, Complex &c2)
{
	Complex tmp(c1.a + c2.a, c1.b + c2.b);
	return tmp;
}
int main125()
{
	int a = 0, b = 0;
	int c;
	c = a + b;//基础数据类型 c++编译器已知道如何运算	
	Complex c1(1, 2);
	Complex c2(3, 4);
	Complex c3 = c1 + c2;
	Complex c4 = c1 - c2;
	c3.output();
	c4.output();
	return 0;
}