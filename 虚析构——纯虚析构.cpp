#include <iostream>
using namespace std;
//������û�ж������ݿ��Բ�д�������������������������ڳ�����
class Animal
{
public:
	Animal()
	{
		cout << "ani���캯������" << endl;
	}

	////������������� ����ָ���ͷ�����ʱ�ͷŲ��ɾ�
	//virtual ~Animal()//
	//{
	//	cout << "ani��������������" << endl;
	//}

	//��������
	//���˴��������������Ҳ���ڳ����࣬�޷�ʵ��������
	virtual ~Animal() = 0;//��������������ʵ��


	virtual void speak() = 0;//���麯��
};
Animal::~Animal()//����������ʵ��
{
	cout << "ani����������������" << endl;

}


class cat :public Animal
{
public:
	cat(string name)
	{
		cout << "cat���캯������" << endl;
		m_Name = new string(name);
	}
	virtual void speak()
	{
		cout << *m_Name<<"è˵��" << endl;
	}
	virtual ~cat()//���������ͷŶ������ԣ�û���ͷţ���Ҫ��Ϊ������
	//������������� ����ָ���ͷ�����ʱ�ͷŲ��ɾ�
	{
		if (m_Name != NULL)
		{
			cout << "cat������������" << endl;
			delete m_Name;
			m_Name = NULL;
		}
	}
	string* m_Name;//è���ڶ���
};
void test01()
{
	Animal* animal = new cat("Tom");
	animal->speak();
	//����ָ���������ǣ�������������е�����������������������ж������Ի��ڴ�й©
	delete animal;
}

int main()
{
	test01();
	system("pause");

	return 0;

}