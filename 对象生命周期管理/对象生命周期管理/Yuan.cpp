#include "Yuan.h"
#include<iostream>
using namespace std;
Yuan::Yuan()
{
	a = 0;
	b = 0;
	cout << "�޲ι��캯��������" << endl;
}
Yuan::Yuan(int a_, int b_)
{
	a = a_;
	b = b_;
	cout << "�вι��캯��������" << endl;

}
Yuan::~Yuan()
{
	a = 0;
	b = 0;
	cout << "��������������" << endl;
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
	/*��̬��Ա���� ��ֻ��ʹ�þ�̬��Ա���� 
	����ʹ����ͨ��Ա���� �� ��ͨ��Ա����...
	  ԭ���Ǿ�̬��Ա�;�̬��Ա������������������ģ����ж��󶼹���
	  ���ʹ����ͨ��������ᱨ�� ��Ϊ��������֪������ͨ������������һ������ı���


	*/
	cout << c << endl;
	//cout << a << endl; //�ԷǾ�̬��Ա��Yuan::a���ķǷ����� 
}