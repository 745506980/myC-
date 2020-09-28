#include<iostream>
using namespace std;

class Test1 {
private:
	int a;
	int b;
public:
	Test1(int a, int b);
	~Test1();
	 void  getA_(int a, int b ) const;	
};
Test1::Test1(int a, int b)  //--->> Test1(Test *const this, int a, int b)
{							//默认隐含一个this指针，指向调用该函数的对象
	this->a = a;
	this->b = b;
}
Test1::~Test1()
{
	a = 0;
	b = 0;
}
 void  Test1::getA_(int a ,int b) const //const 修饰的是this指针  --->getA_(const Test *this,int a, int b)
										//*this 不可修改 即this指针所指向的内存空间不能修改
{
	//this->a = 100;  

	cout <<"a"<< a <<" b"<< b << endl;

}
int mainwwww555()
{
	Test1 t(1, 2);
	Test1 t2 = { 1,2 };// 相当于 Test1 t2(1,2);
	t.getA_(3, 4);

	system("pause");
	return 0;
}