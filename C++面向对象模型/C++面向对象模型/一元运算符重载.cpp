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
	Complex& operator--() //ǰ��--  
	{
		this->a--;
		this->b--;
		return *this;
	}
	Complex& operator++() //ǰ��++
	{
		this->a++;
		this->b++;
		return *this;
	}
	//����++  ʹ��һ��ռλ�������ɺ�������  ���ú�+
	Complex operator++(int)
	{
		Complex tmp ; // this = &xx;
		this->a++;
		this->b++;
		return tmp;

	}
	friend ostream& operator<<(ostream & out, const Complex & c1); //��Ԫ�������������Ҳ�������ͬ�ĳ���
};
Complex fun()
{
	Complex tmp;
	return tmp;
}
//���Ʋ����� 
/*ΪComplex ����Ԫ���� ���ǲ�����ostream����Ԫ���� 
��Ϊֻ������Complex��˽�г�Ա��δ����ostream��˽�г�Ա*/
/*void operator<<(ostream& out, Complex& c1) //����д�ɳ�Ա���� ��Ϊ�ڵ���ʱ cout.opreator(c1); �޷��޸�ostream��Դ��
{
	out << c1.a << "+" << c1.b << "i" ;
}*/
//�޸ĺ��<<
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
	cout << c1 << "hello world" << endl; //�������Ϊvoid �൱��void.opreator<<(...)
	system("pause");
	return 0;
}
