#include<iostream>
using namespace std;

class hello{
public:
	hello()
	{
		a = 0;
		b = 0;
	}
	hello(int a, int b)
	{
		this->a = a;
		this->b = b;
	}
	hello(const hello& h)
	{
		a = h.a;
		b = h.b;
		cout << "copy" << endl;
	}
	~hello()
	{
		a = 0;
		b = 0;
	}
private:
	int a;
	int b;
};


int main()
{

	//��û���ṩ���캯�� C++�Զ��ṩĬ�ϵĹ��캯��
	//
	
	hello h; //Ĭ�Ϲ��캯��
/*	hello h2(1, 2);  //��ʽ�ĵ��ù��캯��
	hello h5 = hello(1, 2);//��ʾ�ĵ��ù��캯��
	hello(h6);  //����Ĭ�Ϲ��캯�� */
	hello h8 = hello(h);  //����copy���캯�� 
	//��ʽ����copy���캯��  hello h8(h)  
	//���캯����new��һ��ķ�ʽ
	hello *h3 = new hello(1, 2); /*����һ��hello���󣬽����ʼ��Ϊ�����ṩ��ֵ��
								 �����ö���ĵ�ַ��ֵ��h3ָ�룬����������¶���û�����ƣ�
								 ������ͨ��ָ��������ö���*/
	
	return 0;

}