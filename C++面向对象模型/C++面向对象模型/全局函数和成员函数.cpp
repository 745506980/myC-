#include<iostream>
using namespace std;

class test1 {
public:
	int a;
	int b;
public:
	test1(int a, int b);
	~test1();
	test1(const test1& obj);
	void testAdd(test1& obj);
	void gettest();
	test1& testadd(test1& t);
};
test1::test1(int a = 0, int b = 0)
{
	this->a = a;
	this->b = b;
	cout << "���캯������" << endl;

}
test1::~test1()
{
	cout << "a" << " " << b;
	cout << "������������" << endl;
}
test1::test1(const test1& obj)
{
	a = obj.a;
	b = obj.b;
	cout << "copy���캯��������" << endl;
}
 void test1::testAdd(test1 & obj)
{
	 this->a = this->a + obj.a;
	 this->b = this->b + obj.b;
	 
}
 void test1::gettest()
 {
	 cout << " a " << a << " " << " b " << b << endl;
 }
 //ʹ��ȫ�ֺ���
 test1 test_Add(test1& obj1, test1& obj2)
 {
	 obj1.a = obj1.a + obj2.a;
	 obj1.b = obj1.b + obj2.b;
	 return obj1;//�������������copy���캯�� obj1 ��δ������Ϊ��ʱ��������obj1,obj1������������main��
 }
 test1& test1::testadd(test1& t) //����һ�������൱�ڷ������� Ҳ���Ƿ����� �ö���ĵ�ַ &t1
 {
	 this->a = this->a + t.a;
	 this->b = this->b + t.b;
	 return *this; // *this �൱��  *(&t1)  this = &t 
 }
 int main11()
 {
	 test1 t1(1, 2);
	 test1 t2(3, 4);
	 test1 t3; //���ù��캯��
	 t1.testAdd(t2);
	 t3 = test_Add(t1, t2); //ʹ����������ֵ��t3 Ȼ��������������
	 t3.gettest();
	 return 0;
 }
 int main11122()
 {
	 test1 t1(1, 2);
	 test1 t2(3, 4);
	 test1 t3 = t1.testadd(t2);	  
	 t3.gettest();
	 return 0;
 }