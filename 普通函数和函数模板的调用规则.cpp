#include <iostream>
using namespace std;
//1��� ��ͨ���� ����ģ�� ���ɵ��ã����޵�����ͨ����
//2ͨ�� ��ģ������б� ǿ�� ���ú���ģ��
//3����ģ�� Ҳ���� ����
//4�������ģ�� ���õ�ƥ�� �����ȵ��� ����ģ��

//��ò�Ҫ���к���ģ�壬������ͨ����

//��ͨ���� (ֻ�������� ���ǻ���� ��ͨ����)
void myprint(int a, int b)
{
	cout << "���õ���ͨ����" << endl;
}

//����ģ��(����ͨ��������ͬ)
template<class T>
void myprint(T a, T b)
{
	cout << "���õ�ģ��" << endl;
}
//void myprint(T a, T b,T c)
//{
//	cout << "���õ�ģ��" << endl;
//}


void test01()
{
	int a = 10;
	int b = 20;

	myprint(a, b);//�������ͨ����

	//ͨ����ģ������б�ǿ�Ƶ��ú���ģ��
	myprint<>(a, b);
	//myprint(a, b, 100);//��������

	//���õ�ƥ�䣬����ģ��
	char c1 = 'a';
	char c2 = 'b';
	myprint(c1, c2);
}


int main()
{
	test01();
	system("pause");

	return 0;

}