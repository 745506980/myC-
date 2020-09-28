#include<iostream>
using namespace std;

void fun_(int **matx)
{
	*(*(matx+1)+1) = 1;
}
int main1111()
{
	int a[2][2] = { {2,2},{2,2} };
	int** p = (int**)a;
	fun_(p);
	cout << a[1][1] << endl;
	return 0;
}