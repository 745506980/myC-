#include<iostream>
#include<stdlib.h>
#include"Yuan.h"
using namespace std;
 // new �� delete �ǲ����� c++���﷨
// malloc �� free  �Ǻ���


int main1__new()
{
    // �����������
    int* a = new int(100);//�ڶ��Ϸ���һ��4�ֽڴ�С���ڴ� �������Ϊ100��
    int* b = (int*)malloc(sizeof(int));
    *b = 100;
    cout << *a << " " << *b << endl;
    free(a);
    delete b;


    return 0;

}
// �����������
int main_N()
{
    int* p = new int[10];
    *p = 10;
    *(p + 1) = 20;
    cout << *p << " " << *(p + 1) << endl;
    delete []p;
    int* q = (int*)malloc(sizeof(int) * 10); // int array[10]
    * q = 30;
    *(q + 1) = 40;
    cout << *q << " " << *(q + 1) << endl;
    return 0;
}

//�������
int main__ddd()
{
    Yuan *a =(Yuan*)malloc(sizeof(Yuan));
    free(a);
    //new Ϊ��������ڴ� ����ù��캯��
    // delete �ͷ�Ϊ���������ڴ棬�������������
    Yuan* b = new Yuan(1, 2);
    delete b;
    return 0;
}