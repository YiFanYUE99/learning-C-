#include <iostream>
using namespace std;
//��̬��Ա����
//1.���ж�����ͬһ������
//2.��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
class Person
{
public:
	//��̬��Ա����
	static void func()
	{
		m_A = 100;//��̬��Ա�������Է��ʾ�̬��Ա��������ȫ������
		//m_B = 200;//��̬��Ա���� �����Է��� �Ǿ�̬��Ա�������ڶ�����
		cout << "static void func ����" << endl;
	}
	static int m_A;//��̬��Ա����
	int m_B;//�Ǿ�̬��Ա����
	//��̬��Ա����Ҳ�з���Ȩ�ޣ�˽��Ȩ����������ʲ���
private:
	static void func2()
	{
		cout << "static void func2����" << endl;
	}

};
int Person::m_A = 0;
//���ַ��ʷ�ʽ
void test01()
{
	//1.ͨ���������
	Person p;
	p.func();
	//2.ͨ����������
	Person::func();

	//Person::func2();//������ʲ���˽�еĳ�Ա����
}

int main()
{
	test01();
	system("pause");

	return 0;

}