#include<iostream>
using namespace std;
/*
public :���εĳ�Ա���� ���� ������ڲ����ⲿ����ʹ��
private: ���εĳ�Ա���������� ֻ��������ڲ�ʹ��
protected: ���εĳ�Ա���������� ��������ڲ�ʹ�ã��ڼ̳е�������ʹ��
*/
/*
public:�̳� �����Ա�������б���ԭ�з��ʼ���
private:�̳� �����Ա�������б�Ϊprivate��Ա
protected:�̳� ������public��Ա����protected��Ա
			  ������protected��Ա��ȻΪprotected��Ա
			  ������private��Ա��ȻΪprivate��Ա
*/
/*C++�еļ̳з�ʽ��public��private��protected����Ӱ������Ķ����������
�ж�ĳһ�仰���ܷ񱻷���
	1����������䣬��仰д��������ڲ����ⲿ
	2����������δӸ���̳У�public��private��protected��
	3���������еķ��ʼ���public��private��protected��
*//*



������ķ��ʿ��ƽ���
//protected �ؼ������εĳ�Ա�����ͳ�Ա��������Ϊ���ڼ�����ʹ�ã���Ϊ�˼̳�
1����Ҫ�������ʵĳ�Ա���ó�public
2��ֻ���ڵ�ǰ���з��ʵĳ�Ա���ó�private
3��ֻ���ڵ�ǰ��������з��ʵĳ�Ա����Ϊprotected��protected��Ա���ʵ�Ȩ�޽���public��private֮��
*/

 //�̳еı��ʾ������ݵ�copy �����˽����������������һЩ�����޷����ʻ����˽������ 



class Parent1
{
public:
	int a;
protected:
	int b;
private:
	int c;
};

class Child1 : public Parent1  //ʹ�ù��м̳�
{
public:
	void print()
	{
		a = 10;  //public	�������ⶼ��ʹ��
		b = 20;	// protected  ������������ʹ�� �����޷�ʹ��
	//	c = 1;  //private  �޷�����
	}
protected:

private:
	
};
int main_public()  //public:�̳� 
{
	Child1 c1;
	c1.a = 10;
//	c1.b = 20;  //protected �����ⲻ�ɷ���
	
	return 0;
}
//˽�м̳�
class Child2 : private Parent1  //ʹ��˽�м̳�
{
public:
	void print()
	{
		a = 10;  //�����б��private	
		b = 20;	// �����б��private  
	//	c = 1;  //������private  �޷�����
	}
protected:

private:

};
/*class Child4 : private Child2  //ʹ��˽�м̳�
{
public:
	void print()
	{
		a = 10;  //Child2 ��Ϊprivate �޷�����	 ˽�м̳�
		b = 20;	// 
	//	c = 1;  //������private  �޷�����
	}
protected:

private:

}; */
int main022()
{
	Child2 c;
//	c.a = 10;  �������б����private �޷�������ⲿʹ��
//	c.b = 20;
	return 0;
}


// �����̳�  protected

class Child3 : protected Parent1  //ʹ�ñ����̳�
{
public:
	void print()
	{
		a = 10;  //����public �������б��protected //�������п���ʹ�� �����ⲻ��ʹ��	
		b = 20;	// ����protected ��������Ȼ��protected  
	//	c = 1;  //������private  �޷�����
	}
protected:

private:

};
