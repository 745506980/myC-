#include<iostream>
using namespace std;
/*
public :���εĳ�Ա���� ���� ������ڲ����ⲿ����ʹ��
private: ���εĳ�Ա���������� ֻ��������ڲ�ʹ��
protected: ���εĳ�Ա���������� ��������ڲ�ʹ�ã��ڼ̳е�������ʹ��
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
1������(������)ӵ�и���(����)�����г�Ա�����ͳ�Ա����
2���������һ������ĸ���
3�����������Ե����������ʹ��
4���������ӵ�и���û�еķ���������
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