#include<iostream>
using namespace std;

class MyIntPointer
{
public:
public:
	MyIntPointer()
	{
		p = NULL;
	}
	MyIntPointer(int* p)
	{
		this->p = p;
	}
	~MyIntPointer()
	{
		delete p;
	}
	int* operator->()
	{
		return p;
	}
	int& operator*()
	{
		return *p;
	}
protected:
	int b;
	int* p;
};

void mainhelodsd()
{
	int* p = new int(100);
	cout << *p << endl;
	delete p;

	MyIntPointer myp = new int(200); //�������вι��캯��
	MyIntPointer mypp(new int(300)); 
	cout << *mypp << endl;
	cout << *myp << endl; //����*������
}