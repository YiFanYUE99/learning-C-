#include <iostream>
using namespace std;
//3�ּ̳з�ʽ��1�����̳�public2�����̳�protected3˽�м̳�private
//˽��Ȩ����Զ��˽��Ȩ�������޷�����
//�����̳�ʹ�ù���Ȩ�ޱ�Ϊ����Ȩ��
//˽�м̳�ʹ�ù����ͱ���Ȩ�޾���Ϊ˽��Ȩ��
class Base1
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class son1 :public Base1
{
public:
	void func()
	{
		m_A = 10;//���ǹ���Ȩ��
		m_B = 10;//���Ǳ���Ȩ��
		//m_C=10;//������˽��Ȩ�޲��ܷ���
	}
};
class son2 :protected Base1
{
public:
	void func()
	{
		m_A = 10;//��Ϊ����Ȩ��
		m_B = 10;//���Ǳ���Ȩ��
		//m_C=10;//������˽��Ȩ�޲��ܷ���
	}
};
class son3 :private Base1
{
public:
	void func()
	{
		m_A = 10;//��Ϊ˽��Ȩ��
		m_B = 10;//��Ϊ˽��Ȩ��
		//m_C=10;//������˽��Ȩ�޲��ܷ���
	}
};
class grandson :public son3
{
	void func()
	{
		//m_A = 1000;//�Ǹ���son3��˽�г�Ա
	}
};
void test01()
{
	son1 s1;
	s1.m_A = 100;
	//s1.m_B = 100;//����Ȩ��������ʲ���
	son2 s2;
	//s2.m_A = 100;//��Ϊ����Ȩ�ޣ�������ʲ���
}
int main()
{
	test01();
	system("pause");

	return 0;

}