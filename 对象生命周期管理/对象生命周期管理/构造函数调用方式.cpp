#include<iostream>
using namespace std;

class hello{
public:
	hello()
	{
		a = 0;
		b = 0;
	}
	hello(int a, int b)
	{
		this->a = a;
		this->b = b;
	}
	hello(const hello& h)
	{
		a = h.a;
		b = h.b;
		cout << "copy" << endl;
	}
	~hello()
	{
		a = 0;
		b = 0;
	}
private:
	int a;
	int b;
};


int main()
{

	//类没有提供构造函数 C++自动提供默认的构造函数
	//
	
	hello h; //默认构造函数
/*	hello h2(1, 2);  //隐式的调用构造函数
	hello h5 = hello(1, 2);//显示的调用构造函数
	hello(h6);  //调用默认构造函数 */
	hello h8 = hello(h);  //调用copy构造函数 
	//隐式调用copy构造函数  hello h8(h)  
	//构造函数与new放一起的方式
	hello *h3 = new hello(1, 2); /*创建一个hello对象，将其初始化为参数提供的值，
								 并将该对象的地址赋值给h3指针，在这种情况下对象没有名称，
								 但可以通过指针来管理该对象*/
	
	return 0;

}