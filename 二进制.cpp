#include <iostream>
using namespace std;
//1包含头文件
#include<fstream>
//二进制文件的打开方式为 ios::binary
#include<string>
class Person
{
public:
	char m_Name[64];
	int m_Age;
};
void test01()
{
	//2创建输出流对象
	ofstream ofs("person.txt", ios::out | ios::binary);

	//3打开文件
	/*ofs.open("person.txt", ios::out | ios::binary);*/
	Person p = { "张三",18 };

	//4写文件:通过write函数以二进制方式写数据
	ofs.write((const char*)&p, sizeof(p));
	
	//5关闭文件
	ofs.close();
}
//读取二进制文件 :istream read(char *buffer,int len)字符指针只想内存中一段存储空间，len是读写的字节数
void test02()
{
	//2创建流对象
	ifstream ifs;

	//3打开文件并判断是否打开成功
	ifs.open("person.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return;
	}
	//4读文件
	Person p;

	ifs.read((char*)&p, sizeof(Person));
	cout << p.m_Age << p.m_Name << endl;
	//5关闭文件
	ifs.close();
}

int main()
{
	test01();
	test02();
	system("pause");

	return 0;

}