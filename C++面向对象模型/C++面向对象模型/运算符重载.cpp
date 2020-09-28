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
	friend Complex operator+(Complex &c1, Complex &c2); //ȫ�ֺ�����
	//��Ϊ����Ϊ˽��������ȫ�ֺ���ʹ��ʱ��Ҫ����Ϊ��Ԫ����
	//2����Ա������
	Complex operator-(Complex& c2)
	{
		Complex tmp(this->a - c2.a, this->b - c2.b);
		return tmp;
	}
};

//��������ر�����һ������ operator  //ȫ�ֺ�����
Complex operator+(Complex &c1, Complex &c2)
{
	Complex tmp(c1.a + c2.a, c1.b + c2.b);
	return tmp;
}
int main125()
{
	int a = 0, b = 0;
	int c;
	c = a + b;//������������ c++��������֪���������	
	Complex c1(1, 2);
	Complex c2(3, 4);
	Complex c3 = c1 + c2;
	Complex c4 = c1 - c2;
	c3.output();
	c4.output();
	return 0;
}