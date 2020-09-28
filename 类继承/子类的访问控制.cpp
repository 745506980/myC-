#include<iostream>
using namespace std;
/*
public :修饰的成员变量 方法 在类的内部、外部都能使用
private: 修饰的成员变量、方法 只能在类的内部使用
protected: 修饰的成员变量、方法 ，在类的内部使用，在继承的子类中使用
*/
/*
public:继承 父类成员在子类中保持原有访问级别
private:继承 父类成员在子类中变为private成员
protected:继承 父类中public成员会变成protected成员
			  父类中protected成员仍然为protected成员
			  父类中private成员仍然为private成员
*/
/*C++中的继承方式（public、private、protected）会影响子类的对外访问属性
判断某一句话，能否被访问
	1）看调用语句，这句话写在子类的内部、外部
	2）看子类如何从父类继承（public、private、protected）
	3）看父类中的访问级别（public、private、protected）
*//*



派生类的访问控制结论
//protected 关键字修饰的成员变量和成员函数，是为了在家族中使用，是为了继承
1、需要被外界访问的成员设置成public
2、只能在当前类中访问的成员设置成private
3、只能在当前类和子类中访问的成员设置为protected，protected成员访问的权限介于public和private之间
*/

 //继承的本质就是数据的copy 基类的私有属性在子类中做一些处理无法访问基类的私有属性 



class Parent1
{
public:
	int a;
protected:
	int b;
private:
	int c;
};

class Child1 : public Parent1  //使用共有继承
{
public:
	void print()
	{
		a = 10;  //public	类内类外都可使用
		b = 20;	// protected  可以在子类中使用 类外无法使用
	//	c = 1;  //private  无法访问
	}
protected:

private:
	
};
int main_public()  //public:继承 
{
	Child1 c1;
	c1.a = 10;
//	c1.b = 20;  //protected 在类外不可访问
	
	return 0;
}
//私有继承
class Child2 : private Parent1  //使用私有继承
{
public:
	void print()
	{
		a = 10;  //子类中变成private	
		b = 20;	// 子类中变成private  
	//	c = 1;  //父类中private  无法访问
	}
protected:

private:

};
/*class Child4 : private Child2  //使用私有继承
{
public:
	void print()
	{
		a = 10;  //Child2 中为private 无法访问	 私有继承
		b = 20;	// 
	//	c = 1;  //父类中private  无法访问
	}
protected:

private:

}; */
int main022()
{
	Child2 c;
//	c.a = 10;  在子类中变成了private 无法在类的外部使用
//	c.b = 20;
	return 0;
}


// 保护继承  protected

class Child3 : protected Parent1  //使用保护继承
{
public:
	void print()
	{
		a = 10;  //父类public 在子类中变成protected //在子类中可以使用 在类外不可使用	
		b = 20;	// 父类protected 子类中仍然是protected  
	//	c = 1;  //父类中private  无法访问
	}
protected:

private:

};
