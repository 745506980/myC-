#pragma once //只包含一次 类似于c中的ifdef
//ctrl + shift + u 字符串变大写
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

