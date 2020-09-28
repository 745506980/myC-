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
	cout << "构造函数调用" << endl;

}
test1::~test1()
{
	cout << "a" << " " << b;
	cout << "析构函数调用" << endl;
}
test1::test1(const test1& obj)
{
	a = obj.a;
	b = obj.b;
	cout << "copy构造函数被调用" << endl;
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
 //使用全局函数
 test1 test_Add(test1& obj1, test1& obj2)
 {
	 obj1.a = obj1.a + obj2.a;
	 obj1.b = obj1.b + obj2.b;
	 return obj1;//调用匿名对象的copy构造函数 obj1 并未析构因为此时是引用了obj1,obj1的生命周期在main中
 }
 test1& test1::testadd(test1& t) //返回一个引用相当于返回自身 也就是返回了 该对象的地址 &t1
 {
	 this->a = this->a + t.a;
	 this->b = this->b + t.b;
	 return *this; // *this 相当于  *(&t1)  this = &t 
 }
 int main11()
 {
	 test1 t1(1, 2);
	 test1 t2(3, 4);
	 test1 t3; //调用构造函数
	 t1.testAdd(t2);
	 t3 = test_Add(t1, t2); //使用匿名对象赋值给t3 然后匿名对象析构
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