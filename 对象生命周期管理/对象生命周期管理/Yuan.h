#pragma once
class Yuan
{
private:
	int a;
	int b;
	static int c; //��̬��Ա���� ���ڸ���ĳ�Ա����
public:
	Yuan();
	~Yuan();
	Yuan(int a_, int b_);
	int printC();
	void addC();	
	static void print_();
};

