#include <iostream>
using namespace std;
//C++�еĳ�Ա��������һ��Ķ������ǳƸó�ԱΪ�����Ա

class Phone//���һ���ֻ���
{
public:

	Phone(string pName)
	{
		m_PName = pName;
		cout << "Phone" << endl;
	}
	string m_PName;//�ֻ�Ʒ������

};
class Person//����
{
public:
	Person(string name, string pName) : m_Name(name),m_Phone(pName)
	{
		cout << "Person" << endl;
	}
	string m_Name;
	Phone m_Phone;

};
void test01()//����ʱ���ȹ���Phone�ٹ���Person�����ͷ�Person���ͷ�Phone
//�������ͷţ�˳���빹��˳���෴
{
	Person p("����", "iPhone Pro");
	cout << p.m_Name << "����" << p.m_Phone.m_PName << endl;
    //ע��p.m_Phone.m_PName
}
int main()
{
	test01();
	system("pause");

	return 0;

}