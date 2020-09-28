#include<iostream>
#include"Array.h"
using namespace std;

int main1111111()
{
	Array a1(20);
	for (int i = 0; i < 20; i++)
	{
		a1.setData(i, i);
	}
	a1.getArray();
	int a = a1.getindex(30);
	if (a == -1)
	{
		cout << "该值不存在" << endl;
	}
	else
		cout << a << endl;
	
	Array a2 = a1;

	a2.getArray();

	return 0;
}