#pragma once //ֻ����һ�� ������c�е�ifdef
//ctrl + shift + u �ַ������д
class MyTeacher
{
private:
	int m_age;
	char  m_name[32];
public:
	void SetAge(int age);
	void SetName(const char* name);
	int GetAge();
	char* GetName();
};

