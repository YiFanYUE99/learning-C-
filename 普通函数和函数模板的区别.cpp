#include <iostream>
using namespace std;

//����ͨ��������ʱ���Է���  �Զ�����ת������ʽ����ת����
//�ں���ģ�����ʱ���������  �Զ������Ƶ�  �����ᷢ����ʽ����ת��
//�����������ʾ  ָ�����͵ķ�ʽ  �����Է�����ʽ����ת��

//��ͨ����:�������
int myadd01(int a,int b)
{
	return a + b;
}
void test01()
{
	int a = 10;
	int b = 20;
	char c = 'c';//a->97,c->99
	cout << myadd01(a, c) << endl;//�Զ����ַ��ͱ���ת������asc�룬
}

//����ģ�壺�������
template <class T>
T myadd02(T a, T b)
{
	return a + b;
}

void test02()
{
	int a = 10;
	int b = 20;
	char c = 'c';//a->97,c->99

	//�Զ������Ƶ��޷�������ʽ����ת��
	cout << myadd02(a, b) << endl;

	//��ʽָ������ ���� ������ʽ����ת����תΪint
	cout << myadd02<int>(a, c) << endl;
}





int main()
{
	test01();
	test02();
	system("pause");

	return 0;

}