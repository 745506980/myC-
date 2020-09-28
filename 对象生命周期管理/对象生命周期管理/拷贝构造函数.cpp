#include<iostream>
using namespace std;

class Test3{
public:
	Test3() {
		cout << "无参构造函数" << endl;
	}
	Test3(int x, int y)
	{
		a = x;
		b = y;
		cout << "有参构造函数" << endl;
	}
	Test3(const Test3 & obj)
	{
		a = obj.a;
		b = obj.b;
		cout << "copy构造函数" << endl;
	}
	~Test3()
	{
		cout <<a<<","<< b<<"析构函数" << endl;
	}
	void show()
	{
		cout << "a" << a << "b" << b << endl;
	}
	Test3 fun_0()
	{
		Test3 t1(1, 2);
		return t1;
	}
private:
	int a;
	int b;
};
void fun(Test3 p)  //以对象为参数时 会调用copy构造函数 如果参数为引用则不调用copy构造函数
{
	p.show();
}
int main01()
{
	Test3 t0;
	Test3 t1(1, 2);
	Test3 t3(0, 0);
	t3 = t1;//赋值操作 不会调用copy构造函数

	Test3 t2 = t1;//使用t1 初始化t2  调用t2 的拷贝构造函数完成初始化
	Test3 t4(t1);//第二种copy调用方法   使用t1 初始化t4
	t3.show();
	t2.show();
	return 0;
}
int main001()
{
//	Test3 t0;
	Test3 t1(1, 2);
	fun(t1);  // t1实参初始化p形参   此时会调用copy构造函数  第3种调用场景
	return 0;
}

//拷贝构造函数的第四种应用场景  匿名对象
Test3 g()
{
	Test3 t(1, 2);
	return t;  // 此时会调用拷贝构造函数，产生一个匿名对象  当该函数执行完毕 t被析构
	//问题分析  t为局部变量 在栈中 当该函数执行完毕则弹栈 如果在访问则造成内存泄漏  所以引出一个匿名对象
//	结论1: 函数的返回值是一个元素（复杂类型的），返回的是一个新的匿名对象(所以调用匿名对象的拷贝构造函数)
	//这么写就返回一个新的对象 (匿名对象)
}
void fun_()
{
	g();//此时返回的匿名对象未被接受  被析构  
	while (1);
}
void fun_2()
{
	Test3 m = g(); //用匿名对象初始化m,此时c++编译器，直接把匿名对象转成m
	m.show();
}
void fun_3()
{
	Test3 m;   //无参构造函数
//	cout << sizeof(m) << endl;
	m = g();   //对m赋值 然后 匿名对象被析构
	m.show();  // 执行完毕m被析构
}
int mainhhhh()
{
//	Test3 t1(1,2);
	Test3 t2;
	t2.fun_0(); //匿名对象 无人接收 立即析构
	return 0;


}
int mainddd()
{
	Test3 t2(1, 1);
	Test3 t4 = Test3(t2); //调用copy构造函数
	Test3 *t3 = new Test3(t2); //调用copy构造函数
	return 0; 
}
