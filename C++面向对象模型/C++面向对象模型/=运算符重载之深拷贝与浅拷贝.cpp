/*#include<iostream>
#include<stdlib.h>
#include<cstring>
using namespace std; 
class Name
{
public:
	Name(const char* pname)
	{
		size = strlen(pname);
		pName = (char*)malloc(size + 1);
		strcpy_s(pName,size+1, pname);
	}
	Name(Name& obj)
	{
		//��obj����ʼ���Լ�
		pName = (char*)malloc(obj.size + 1);
		strcpy_s(pName, obj.size + 1,obj.pName);
		size = obj.size;
	}
	~Name()
	{
		cout << "��ʼ����" << endl;
		if (pName != NULL)
		{
			free(pName);
			pName = NULL;
			size = 0;
		}
	}

	Name& operator=(Name& obj3)
	{
		if (pName != NULL)
		{
			free(pName);
			pName = NULL;
			size = 0;
		}
		cout << "������û�е����ҡ�������" << endl;

		//��obj3��=�Լ�
		pName = (char*)malloc(obj3.size + 1);
		strcpy_s(pName,obj3.size + 1,obj3.pName);
		size = obj3.size;
		return *this;
	}

protected:
private:
	char* pName;
	int size;
};

//����ĳ�ʼ�� �� ����֮��=�Ų�����������ͬ�ĸ���
void playObj()
{
	Name obj1("obj1.....");
	Name obj2 = obj1; //obj2��������ʼ��  ���ÿ������캯��

	Name obj3("obj3...");

	//����=�Ų�����
	obj2 = obj3; //=�Ų���
	//obj2.operator=(obj3) 
	cout << "ҵ�����������5000" << endl;

}
void mainhello()
{
	playObj();
	system("pause");
}

*/