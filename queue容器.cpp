#include <iostream>
using namespace std;
#include<queue>
#include<string>
//queue����
//queue�Ƚ��ȳ�����ͬ��stack������
//queue�������ڣ���ͷ������β�������Ҳ���ܱ���

class Person
{
public:
	Person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}
	string m_name;
	int m_age;
};

void test01()
{
	//��������
	queue<Person>q;

	//׼������
	Person p1("��ɮ", 30);
	Person p2("�����", 30);
	Person p3("��˽�", 30);
	Person p4("ɳ����", 30);

	//���
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);

	//ֻҪ���в�Ϊ�գ��鿴��ͷ����β������
	while (!q.empty())
	{
		//�鿴��ͷԪ��
		cout << "��ͷԪ��-����" << q.front().m_name << "����" << q.front().m_age << endl;

		//�鿴��βԪ��
		cout << "��βԪ��-����" << q.back().m_name << "����" << q.back().m_age << endl;

		q.pop();//����
        
		cout << endl;
	}



}
int main()
{
	test01();

	system("pause");

	return 0;

}