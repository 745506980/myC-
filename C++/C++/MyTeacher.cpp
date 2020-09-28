#include "MyTeacher.h"
#include<string.h>

void MyTeacher::SetAge(int age)
{
	m_age = age;
}
void MyTeacher::SetName(const char* name)
{
	strncpy_s(m_name, name, strlen(name));
}
int MyTeacher::GetAge()
{
	return m_age;
}
char* MyTeacher::GetName()
{
	return m_name;
}
