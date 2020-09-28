
#include <iostream>
// C++成员变量 与成员函数是分开存储的，
/*
    普通成员变量：存储于对象中，
                         与struct变量有相同的内存分布和字节对齐方式
    静态成员变量：存储于全局数据区中  内存4区
    成员函数：存储于代码段中
      */
class Test {
private: 
    int m;
public:
    Test(int i)
    {
        m = i;
    }

};
// 成员函数test的原型为
/*
void Test_initialize(Test * pThis, int i)
{   
    pThis->m = i;
}
在
*/
//C++中类的普通成员函数都隐式包含了一个指向当前对象的this指针
int main2221122()
{
    std::cout << "Hello World!\n";
    return 0;
}

