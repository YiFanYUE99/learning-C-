#include <iostream>
using namespace std;
//ǳ�������򵥸�ֵ�������������ṩ�Ŀ������캯����

//������ڶ�����������ռ䣬���п�������

class Person
{
public:
	Person()
	{
		cout << "Person��Ĭ�Ϲ��캯������" << endl;
	}
	Person(int age,int height)
	{
		m_Age = age;
		new int(height);
		m_Height = new int(height);//ʹ��ָ����ܶ�������
		cout << "Person���вι��캯������" << endl;
	}
	//�Լ������������캯��������ǳ��������������
	Person(const Person& p)
	{
		cout << "Person������������" << endl;
		m_Age = p.m_Age;
		//������Ĭ��ʵ��m_Height = p.m_Height;
		//*�����������
		m_Height = new int(*p.m_Height);
	}
	~Person()
	{
		////�������룬�����������������ͷŲ���
		if (m_Height != NULL)
		{
			delete m_Height;
			m_Height = NULL;
		}
		//ǳ����ʱ���ϲ�������

		cout << "Person��������������" << endl;
	}
	int m_Age;
	int *m_Height;//ָ��
};
void test01()
{
	Person p1(18,169);
	cout << "p1������" << p1.m_Age<<"���Ϊ"<< *p1.m_Height<< endl;
	//p1.m_Height��߻����ָ�룬��Ҫ��*������
	Person p2(p1);
	cout << "p2������Ϊ" << p2.m_Age << "���Ϊ" << *p2.m_Height << endl;
	//���н��p2������ҲΪ18
	//�������ṩ�˿������캯����ǳ������
	//ָ��ָ��������һ���ڴ棬ǳ�����ᵼ�¶����ڴ��ظ��ͷţ���Ҫ�����
	//�������ָ��һ���ڴ棬�����ڴ��д������ͬ������
}

int main()
{
	test01();
	system("pause");

	return 0;

}