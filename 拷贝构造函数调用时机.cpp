//�������캯������ʱ�����������
//��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
//��ֵ���ݷ�ʽ������������ֵ
//����ֵ��ʽ���ؾֲ�����
//���캯���ĵ��ù���

//***Ĭ������£�C++���������ٸ�һ�����������������1���캯��2��������3�������캯��
#include <iostream>
using namespace std;
class Person
{
public:
	//Person()
	//{
	//	cout << "Person��Ĭ�Ϲ��캯������" << endl;
	//}
	~Person()
	{
		cout << "Person��������������" << endl;
	}
	Person(int age)
	{
		cout << "Person���вι��캯������" << endl;
		m_Age = age;
	}
	Person(const Person& p)//��д������Ҳ��д
	{
		m_Age = p.m_Age;
		cout << "Person�Ŀ������캯������" << endl;
	}
	int m_Age;
};
//�������д���вι��캯�����������Ͳ����ṩĬ�Ϲ��캯������Ȼ�ṩ��������
//���д�˿������캯�����������Ͳ����ṩ������ͨ���캯����
//void test01()
//{
//	Person p;
//	p.m_Age = 18;
//	Person p2(p);
//	cout << "p2������Ϊ��" << p2.m_Age <<endl;
//}
void test02()
{
	Person p(28);
	Person p2(p);
}


int main()
{
	//test01();

	test02();
	system("pause");

	return 0;

}