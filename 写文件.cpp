#include <iostream>
using namespace std;
//1����ͷ�ļ�
#include<fstream>
#include<string>
//�ı��ļ� ���ļ� ifstream ��fstream
void test01()
{
	//2����������
	ifstream ifs;

	//3���ļ�
	ifs.open("D:\\C++\\��������ѧϰ\\62.�ļ�����\\test.txt", ios::in);//��pythonһ������\\
	//���ж��Ƿ�򿪳ɹ�
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return;
	}
	//4������
	////��һ��
	//char buf[1024] = { 0 };
	//while (ifs >> buf)
	//{
	//	cout << buf << endl;
	//}
	////�ڶ���
	//char buf[1024] = { 0 };
	//while (ifs.getline(buf, sizeof(buf)))
	//{
	//	cout << buf << endl;
	//}
	////������
	//string buf;
	//while ( getline (ifs,buf))//Ҫֱ��ʹ��getline��Ҫstringͷ�ļ�
	//{
	//	cout << buf << endl;
	//}
	//������:Ч�ʵ���
	char c;
	while ((c=ifs.get())!=EOF)//ÿ�ζ�һ���ַ��������ķ���c���ж��Ƿ�����ļ�βend of file
	{
		cout << c;
	}

	//5.�ر��ļ�
	ifs.close();
}
int main()
{
	test01();
	system("pause");

	return 0;

}