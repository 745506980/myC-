#include<iostream>
using namespace std;

class Test3{
public:
	Test3() {
		cout << "�޲ι��캯��" << endl;
	}
	Test3(int x, int y)
	{
		a = x;
		b = y;
		cout << "�вι��캯��" << endl;
	}
	Test3(const Test3 & obj)
	{
		a = obj.a;
		b = obj.b;
		cout << "copy���캯��" << endl;
	}
	~Test3()
	{
		cout <<a<<","<< b<<"��������" << endl;
	}
	void show()
	{
		cout << "a" << a << "b" << b << endl;
	}
	Test3 fun_0()
	{
		Test3 t1(1, 2);
		return t1;
	}
private:
	int a;
	int b;
};
void fun(Test3 p)  //�Զ���Ϊ����ʱ �����copy���캯�� �������Ϊ�����򲻵���copy���캯��
{
	p.show();
}
int main01()
{
	Test3 t0;
	Test3 t1(1, 2);
	Test3 t3(0, 0);
	t3 = t1;//��ֵ���� �������copy���캯��

	Test3 t2 = t1;//ʹ��t1 ��ʼ��t2  ����t2 �Ŀ������캯����ɳ�ʼ��
	Test3 t4(t1);//�ڶ���copy���÷���   ʹ��t1 ��ʼ��t4
	t3.show();
	t2.show();
	return 0;
}
int main001()
{
//	Test3 t0;
	Test3 t1(1, 2);
	fun(t1);  // t1ʵ�γ�ʼ��p�β�   ��ʱ�����copy���캯��  ��3�ֵ��ó���
	return 0;
}

//�������캯���ĵ�����Ӧ�ó���  ��������
Test3 g()
{
	Test3 t(1, 2);
	return t;  // ��ʱ����ÿ������캯��������һ����������  ���ú���ִ����� t������
	//�������  tΪ�ֲ����� ��ջ�� ���ú���ִ�������ջ ����ڷ���������ڴ�й©  ��������һ����������
//	����1: �����ķ���ֵ��һ��Ԫ�أ��������͵ģ������ص���һ���µ���������(���Ե�����������Ŀ������캯��)
	//��ôд�ͷ���һ���µĶ��� (��������)
}
void fun_()
{
	g();//��ʱ���ص���������δ������  ������  
	while (1);
}
void fun_2()
{
	Test3 m = g(); //�����������ʼ��m,��ʱc++��������ֱ�Ӱ���������ת��m
	m.show();
}
void fun_3()
{
	Test3 m;   //�޲ι��캯��
//	cout << sizeof(m) << endl;
	m = g();   //��m��ֵ Ȼ�� ������������
	m.show();  // ִ�����m������
}
int mainhhhh()
{
//	Test3 t1(1,2);
	Test3 t2;
	t2.fun_0(); //�������� ���˽��� ��������
	return 0;


}
int mainddd()
{
	Test3 t2(1, 1);
	Test3 t4 = Test3(t2); //����copy���캯��
	Test3 *t3 = new Test3(t2); //����copy���캯��
	return 0; 
}
