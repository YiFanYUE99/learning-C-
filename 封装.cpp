#include <iostream>
using namespace std;
//��Ա��������Ϊ˽�У��ٿ����Լ����ƶ�дȨ�ޢڿ����Լ�������ݵ���Ч��
class person
{
public:
	//��������:ʹ�������ɶ���д
	void setname(string name)
	{
		m_name = name;
	}
	//��ȡ����
	string getname()
	{
		return m_name;
	}
	//��ȡ����:ֻ����д
	int getage()
	{
		//��ʼ������Ϊ0��
		return m_age;
	}
	//ʹ�������������
	void setage(int age)
	{
		if (age < 0 || age>150)
		{
			cout << "�����������" << endl;
			return;//���ô���ֱ�ӷ���
		}
		m_age = age;
	}

	void setlover(string lover)
	{
		m_lover = lover;
	}
private:
	//���� �ɶ���д
	string m_name;

	//���� ֻ��
	int m_age;

	//���� ֻд
	string m_lover;
};
int main()
{
	person p;
	//��д����
	p.setname("����");
	p.setage(1);
	cout << p.getname() <<"������Ϊ"<<p.getage() << endl;
	p.setlover("����");//������ֻд�����Ĳ��ܷ���
	

	system("pause");

	return 0;

}