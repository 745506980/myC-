#include<iostream>
using namespace std;

class Complex{
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
		cout << a << "  " << b << endl;
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
	Complex& operator--() //前置--  
	{
		this->a--;
		this->b--;
		return *this;
	}
	Complex& operator++() //前置++
	{
		this->a++;
		this->b++;
		return *this;
	}
	//后置++  使用一个占位符来构成函数重载  先用后+
	Complex operator++(int)
	{
		Complex tmp ; // this = &xx;
		this->a++;
		this->b++;
		return tmp;

	}
	friend ostream& operator<<(ostream & out, const Complex & c1); //友元函数常用语左右操作数不同的场景
};
Complex fun()
{
	Complex tmp;
	return tmp;
}
//左移操作符 
/*为Complex 的友元函数 但是并不是ostream的友元函数 
因为只访问了Complex的私有成员并未访问ostream的私有成员*/
/*void operator<<(ostream& out, Complex& c1) //不能写成成员函数 因为在调用时 cout.opreator(c1); 无法修改ostream的源码
{
	out << c1.a << "+" << c1.b << "i" ;
}*/
//修改后的<<
ostream& operator<<(ostream & out, const Complex & c1)
{
	out << c1.a << "+" << c1.b << "i";
	return out;
}
int main2834()
{
	Complex c1(1,2);
	/*--c1;
	++c1;
	c1++;
	c1.output();*/
//	Complex a = fun();
	cout << c1;
	cout << c1 << "hello world" << endl; //左操作数为void 相当于void.opreator<<(...)
	system("pause");
	return 0;
}
