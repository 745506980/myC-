#include<iostream>
using namespace std;
class MyArray
{
public: 
	MyArray(int i);
	~MyArray();
	friend istream& operator>>(istream& input, MyArray& arg);
	friend ostream& operator<<(ostream& output,const MyArray& arg);
	//重载[]
	int &operator[](int i);
private: 
	int* Arry;
	int len;
};
MyArray::MyArray(int i)
{
	if (i >= 0 && i <= 100)
	{
		Arry = new int[i];
		len = i;
	}
	else
	{
		Arry = NULL;
		len = 0;
		cout << "size is too long" << endl;
	}
}
MyArray::~MyArray()
{
	delete[] Arry;
}
istream& operator>>(istream& input, MyArray& arg)
{
	for (int i = 0; i < arg.len; i++)
	{
		input >> arg.Arry[i];
	}
	return input;
}
ostream& operator<<(ostream& output, const MyArray& arg)
{
	for (int i = 0; i < arg.len; i++)
	{
		output << arg.Arry[i] << endl;
	}
	return output;
}
int & MyArray::operator[](int i)
{
	return this->Arry[i];
}
int mainwwwww()
{
	int size;
	cout << "输入数组的大小" << endl;
	cin >> size;
	MyArray a(size);
	cin >> a;
	a[2] = 10;
	cout << a;
	return 0;
}
