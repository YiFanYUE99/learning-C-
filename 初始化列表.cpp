#include <iostream>
using namespace std;
//C++�ṩ�˳�ʼ���б��﷨��������ʼ������
class Person
{
public:
	////��ͳ��ʼ������
	//Person(int a, int b, int c)
	//{
	//	m_A = a;
	//	m_B = b;
	//	m_C = c;
	//}

	////��ʼ���б��ʼ������
	//Person() :m_A(10), m_B(20), m_C(30)
	//{

	//}
	//�����ó�ʼ���б��ʼ�����ԣ�ע��ð��λ��
	Person(int a,int b,int c) :m_A(a), m_B(b), m_C(c)
	{

	}


	int m_A;
	int m_B;
	int m_C;
};
void test01()
{
	//Person p(10, 20, 30);//��ͳ��ʼ������
	
	//Person p;//��ʼ���б��ʼ������
	//cout << "m_A= " << p.m_A << endl;
	//cout << "m_B= " << p.m_B << endl;
	//cout << "m_C= " << p.m_C << endl;

	Person p(30,20,10);//���ĳ�ʼ���б��ʼ������
	cout << "m_A= " << p.m_A << endl;
	cout << "m_B= " << p.m_B << endl;
	cout << "m_C= " << p.m_C << endl;

}

int main()
{
	test01();
	system("pause");

	return 0;

}