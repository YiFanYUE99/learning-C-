#include <iostream>
using namespace std;
//�������� ͬ����Ա��ֱ�ӷ��ʼ���
//���ʸ��� ͬ����Ա��Ҫ��������
class Base
{
public:
	Base()
	{
		m_A = 100;
	}
	void func(int a)
	{
		cout << "Base��func" << endl;
	}

	int m_A;
};
class Son :public Base
{
public:
	Son()
	{
		m_A = 200;
	}
	void func()
	{
		cout << "Son��func" << endl;
	}
	int m_A;
};
void test01()
{
	Son s;
	cout << "ֱ�ӷ���m_A=" << s.m_A << endl;
	cout << "�����е�m_A=" << s.Base::m_A << endl;//��Ҫ��������

	s.func();//ֱ�ӵ��õ��õ�������ĳ�Ա
    //����������ø����ͬ������
	s.Base::func(100);

	//��������к͸���� ͬ����Ա���� �����Զ����ص���������ͬ����Ա����
	//Ҫ���ʸ����ͬ����Ա����Ҫ�Ӳ���

}
int main()
{
	test01();//ֱ�ӷ��ʵ��� ͬ����Ա �� �� ���
	system("pause");

	return 0;

}