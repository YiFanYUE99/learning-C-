#include <iostream>
using namespace std;
//1����ͷ�ļ�
#include<fstream>
//�������ļ��Ĵ򿪷�ʽΪ ios::binary
#include<string>
class Person
{
public:
	char m_Name[64];
	int m_Age;
};
void test01()
{
	//2�������������
	ofstream ofs("person.txt", ios::out | ios::binary);

	//3���ļ�
	/*ofs.open("person.txt", ios::out | ios::binary);*/
	Person p = { "����",18 };

	//4д�ļ�:ͨ��write�����Զ����Ʒ�ʽд����
	ofs.write((const char*)&p, sizeof(p));
	
	//5�ر��ļ�
	ofs.close();
}
//��ȡ�������ļ� :istream read(char *buffer,int len)�ַ�ָ��ֻ���ڴ���һ�δ洢�ռ䣬len�Ƕ�д���ֽ���
void test02()
{
	//2����������
	ifstream ifs;

	//3���ļ����ж��Ƿ�򿪳ɹ�
	ifs.open("person.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return;
	}
	//4���ļ�
	Person p;

	ifs.read((char*)&p, sizeof(Person));
	cout << p.m_Age << p.m_Name << endl;
	//5�ر��ļ�
	ifs.close();
}

int main()
{
	test01();
	test02();
	system("pause");

	return 0;

}