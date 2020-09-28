#include<iostream>
#include<stdlib.h>
#include"Yuan.h"
using namespace std;
 // new 和 delete 是操作符 c++的语法
// malloc 和 free  是函数


int main1__new()
{
    // 分配基础类型
    int* a = new int(100);//在堆上分配一个4字节大小的内存 里面的数为100；
    int* b = (int*)malloc(sizeof(int));
    *b = 100;
    cout << *a << " " << *b << endl;
    free(a);
    delete b;


    return 0;

}
// 分配数组变量
int main_N()
{
    int* p = new int[10];
    *p = 10;
    *(p + 1) = 20;
    cout << *p << " " << *(p + 1) << endl;
    delete []p;
    int* q = (int*)malloc(sizeof(int) * 10); // int array[10]
    * q = 30;
    *(q + 1) = 40;
    cout << *q << " " << *(q + 1) << endl;
    return 0;
}

//分配对象
int main__ddd()
{
    Yuan *a =(Yuan*)malloc(sizeof(Yuan));
    free(a);
    //new 为对象分配内存 会调用构造函数
    // delete 释放为对象分配的内存，会调用析构函数
    Yuan* b = new Yuan(1, 2);
    delete b;
    return 0;
}