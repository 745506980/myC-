#include<iostream>
using namespace std;

/*
����C++���������ڲ��������Ϊ�ṹ��
�������ɸ����Ա���������³�Ա�õ���
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
