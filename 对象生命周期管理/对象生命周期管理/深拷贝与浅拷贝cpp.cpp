/*#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

class Test4 {
public:
	Test4()
	{
		cout << "无参构造函数" << endl;
	}
	Test4(const char* str)
	{
		len = strlen(str) + 1;
		p = (char*)malloc(len);
		strcpy_s(p, len, str);
	}
	~Test4()
	{
		if (p != NULL)
		{
			free(p);
			p = NULL;
			len = 0;
		}
	}
	Test4(const Test4 &n)
	{
		len = n.len;
		p = (char*)malloc(len);
		strcpy_s(p, len,n.p);
	}
	void show()
	{
		cout << p << endl;
	}
private:
	char * p;
	int len;
};
int main0011111()
{
	Test4 t1("hello world");
	Test4 t2 = t1;
	t2.show();
	return 0;
}
*/