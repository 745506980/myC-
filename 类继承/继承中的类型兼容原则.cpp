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
		cout << "���ǵ�" << endl;
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
		cout << "���Ǻ���" << endl;
	}
protected:
private:
};
/*
������ԭ������ָ����������������
	���������Ե����������ʹ��     ����������ĸ���
	����������ֱ�Ӹ�ֵ���������
	���������Գ�ʼ���������    //���ø����copy���캯��
	����ָ�����ֱ��ָ���������
	�������ÿ���ֱ�������������
*/
void howtoprint(Parent_1* base)
{
	base->print_p();  //ֻ��ʹ�ø���ķ���
}
void howtoprint2(Parent_1& base)
{
	base.print_p();  //ֻ��ʹ�ø���ķ���
}
int main11125()
{
	Parent_1 p;
	p.print_p();
	Child_1 c;
	c.print_p();
	c.print_c();
	// ��ֵ������ԭ��
	// 1������ָ�� (����) ����ָ�� ������
	Parent_1* p1 = &c;
	p1->print_p();
	//1_2�� ָ������������
	howtoprint(&p);
	howtoprint(&c);
	//1_3����������������
	howtoprint2(p);
	howtoprint2(c);


	return 0;
}