

#include <iostream>
using namespace std;

class Test {
public:
    Test();  //无参构造函数
    Test(int x);
    Test(int x, int y);//有参构造函数
    ~Test(); 
private:
    int a;
    int b;
};
Test::Test()
{
    a = 1;
    b = 2;
    cout << "无参构造函数" << endl;
}
Test::Test(int x)
{
    a = x;
    b = 2;
    cout << "一个参数的构造函数" << endl;
}
Test::Test(int x, int y)
{
    a = x;
    b = y;
    cout << "两个参数的构造函数" << endl;
}
Test::~Test()
{
    cout << "析构函数" << endl;
}
void hell()
{   //自动调用无参构造函数
    Test t1, t2;//构造函数是t1、t2  析构时 t2、t1 相当于an_exit()  t1、t2 先后进栈
 }
int main1()
{
 //   hell();
    Test a1;//自动调用无参构造函数
    //调用有参构造函数的三个方法
    Test a2(1, 2);//调用两个参数的构造函数    括号法      编译器自动调用
    Test a3 = 5;//调用一个参数的构造函数      = 法        编译器自动调用
    Test a4 = (1, 3);//逗号表达式   右边为逗号最后的值 3
    Test a5 = Test(1, 2);   //直接调用构造函数法   会产生一个匿名对象
   
    a1 = a5;  //对象的赋值  赋值和初始化是两个不同的概念！

    
    return 0;
}

