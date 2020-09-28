#pragma once
class Yuan
{
private:
	int a;
	int b;
	static int c; //静态成员变量 属于该类的成员共享
public:
	Yuan();
	~Yuan();
	Yuan(int a_, int b_);
	int printC();
	void addC();	
	static void print_();
};

