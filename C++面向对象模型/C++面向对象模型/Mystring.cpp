#include<iostream>
#include<string.h>
#include<cstdio>
using namespace std;

class MyString
{
public:
	MyString();
	MyString(const char* str);
	~MyString();
public:
	bool operator==(const MyString &str) const;  //需要使用引用 因为涉及到深拷贝与浅拷贝 默认的拷贝构造函数是浅拷贝
	bool operator!=(const MyString &str) const;
	bool operator>(const MyString &str) const;
	bool operator<(const MyString &str) const;
public:
	friend istream& operator>>(istream& input, MyString& arg);
	friend ostream& operator<<(ostream& output, const MyString& arg);
	friend bool operator==(const MyString & obj,const char*str);  
	friend bool operator!=(const MyString & obj,const char * str);
	friend bool operator>(const MyString& obj,const char *str) ;
	friend bool operator<(const MyString& obj, const char*str) ;
public:
	MyString& operator=(const MyString& str);//重载=操作符
	char& operator[](const int i);
public:
	char* retu_str();
	int str_len();
private:
	char* str;
	int len;
};
MyString::MyString()
{
	len = 0;
	str = new char[len + 1];
}
MyString::MyString(const char* str)
{
	if (str != NULL)
	{
		len = strlen(str);
		this->str = new char[len + 1];
		strcpy_s(this->str, len + 1, str);
	}
	else
	{
		this->str = NULL;
		len = 0;
	}
}
MyString::~MyString()
{
	delete[] str;
	str = NULL;
	len = 0;
}
bool MyString::operator==(const MyString &str) const 
{
	if (this->len != str.len)
		return false;
	else if (strcmp(this->str, str.str) == 0)
		return true;
	else
		return false;
}
bool MyString::operator!=(const MyString &str) const
{
	if (this->len != str.len)
		return true;
	else if (strcmp(this->str, str.str) != 0)
		return true;
	else
		return false;
}
bool MyString::operator>(const MyString &str) const 
{
	if (this->len > str.len)
		return true;
	else return false;
}
bool MyString::operator<(const MyString &str) const 
{
	if (this->len < str.len)
		return true;
	else return false;
}
char* MyString::retu_str() {
	return str;
}
int MyString::str_len() {
	return len;
}
istream& operator>>(istream& input, MyString& arg) 
{
	char str[1001] = {'\0'};
	input >> str;
	arg.len = strlen(str);
	delete[] arg.str;
	arg.str = new char[arg.len + 1];
	strcpy_s(arg.str, arg.len + 1, str);
	return input;
}
ostream& operator<<(ostream& output, const MyString& arg)
{
	output << arg.str;
	return output;
}
bool operator==(const MyString& obj, const char* str)
{
	if (strcmp(obj.str, str) == 0) return true;
	else return false;
	
}
bool operator!=(const MyString& obj, const char* str)
{
	/*if (strcmp(obj.str, str) != 0) return true;
	else return false; */
	return (strcmp(obj.str, str) != 0);
}
bool operator>(const MyString& obj, const char* str)
{
	if (obj.len > strlen(str)) return true;
	else return false;
}
bool operator<(const MyString& obj, const char* str)
{
	if (obj.len < strlen(str)) return true;
	else return false;
}
MyString& MyString::operator=(const MyString& str)
{
	if (this == &str)  //如果是同一个对象
		return *this;
	delete[] this->str;
	this->len = strlen(str.str);
	this->str = new char[this->len + 1];
	strcpy_s(this->str, this->len + 1, str.str);
	return *this;
}
char& MyString::operator[](const int i)
{
	if (this->len > i)
		return this->str[i];
	else
		cout << "无效的地址空间" << endl;
}
int mainhhhhhddd()
{
	cout << "hello world" << endl;
	MyString str1("hello world");
	MyString str3;
	str3 = str1;
	str3[4] = 'w';
	cout << str3;
/*	MyString str2;
	cin >> str2;
	if (str1 == str2)
	{
		cout << "相等" << endl;
	}
	if (str1 != str2)
	{
		cout << "不相等" << endl;
	} */
	return 0;
}
