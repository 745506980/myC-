#include<iostream>
#include"Yuan.h"
using namespace std;

int Yuan::c = 0;

int main11111111()
{
	//静态成员变量 对象共享
	Yuan x, y;
	x.addC(); // 1
	y.addC(); // 2 
	cout << x.printC() << endl; // 2
	cout << y.printC() << endl; // 2 
	Yuan::print_();
	return 0;
}