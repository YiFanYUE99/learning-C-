#include <iostream>
using namespace std;
//1.���ã������������
//�������ͣ���ԭ��һ����&����=ԭ��
//��ԭ����������������ͬһ���ڴ棬���ݱ���ԭ��Ҳ���

//2.���õ�ע������
//�����ñ���Ҫ��ʼ��������ʾ�� int &b;
//������һ����ʼ����Ͳ��ܸ����ˣ����� b��a�ı����������Ϊc�ı�����ֻ�ܽ�c��ֵ����bͬʱ������a

//3.��������������
//���ã���������ʱ�������������õļ������β�����ʵ�Σ���ָ���޸�ʵ�Σ�
//��������
//��ֵ���ݣ��βα���ʵ��û��
void exchange1(int c,int d)
{
	int temp = c;
	c = d;
	d= temp;
	cout << "exhange1 c=" << c << endl;
	cout << "exchange1 d=" << d << endl;

}
//�ڵ�ַ���ݣ�ʵ���βζ��ı���
void exchange2(int *c, int *d)
{
	int temp = *c;
	*c = *d;
	*d = temp;
	cout << "exhange2 c=" << *c << endl;
	cout << "exchange2 d=" << *d << endl;

}

//�����ô���:�����ֵ����һ����������һ�����ñ����޸ģ��ٿص�ͬһ���ڴ�
void exchange3(int& c, int& d)
{

	int temp = c;
	c = d;
	d = temp;
	cout << "exhange3 c=" << c << endl;
	cout << "exchange3 d=" << d << endl;

}


int main()
{
	int a = 10;
	int &b = a;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	b = 100;//���ı���ԭ��Ҳ���
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	//ֵ����
	int c = 10;
	int d = 20;
	cout << "��ʼc=" << c << endl;
	cout << "��ʼd=" << d << endl;
	exchange1(c, d);//ֵ���ݣ��ββ�������ʵ��
	cout << "ֵ����c=" << c << endl;
	cout << "ֵ����d=" << d << endl;

	//��ַ���ݣ�ʵ�λ�ı�
	exchange2(&c, &d);
	cout << "��ַ����c=" << c << endl;
	cout << "��ַ����d=" << d << endl;

	//���ô��ݣ�ʵ�λ�ı�
	exchange3(c, d);
	cout << "���ô���c=" << c << endl;
	cout << "���ô���d=" << d << endl;

	system("pause");

	return 0;

}