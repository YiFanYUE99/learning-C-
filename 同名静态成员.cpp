#include <iostream>
using namespace std;
//�̳���ͬ����̬��Ա�Ĵ���ʽ
class Base
{
public:
	static int m_A;
    
	static void func()
	{
		cout << "Base func" << endl;
	}
};
int Base::m_A = 100;
class Son :public Base
{
public:
	static int m_A;
	static void func()//������� ��̬ͬ������ ������ ����ͬ����Ա���� ��������
	{
		cout << "Son func" << endl;
	}
};
int Son::m_A = 200;
//ͬ����̬��Ա����
void test01()
{
	Son s;
	//1.ͨ���������
	cout << "ͨ���������" << endl;

	s.func();
	s.Base::func();//��������

	
	cout << "Son��m_A" << s.m_A << endl;
	cout << "Base��m_A" << s.Base::m_A << endl;
	//2.ͨ����������
	cout << "ͨ����������" << endl;

	Son::func();
	Son::Base::func();
	
	cout << "Son��m_A" << Son::m_A << endl;
	cout << "Base��m_A" << Son::Base::m_A << endl;
	//�����ķ�ʽ ���� �����������µ� m_A

	
}
int main()
{
	test01();
	system("pause");

	return 0;

}