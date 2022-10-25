#include <iostream>
using namespace std;
//1包含头文件
#include<fstream>
#include<string>
//文本文件 读文件 ifstream 或fstream
void test01()
{
	//2创建流对象
	ifstream ifs;

	//3打开文件
	ifs.open("D:\\C++\\基本操作学习\\62.文件操作\\test.txt", ios::in);//和python一样都是\\
	//且判断是否打开成功
	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return;
	}
	//4读数据
	////第一种
	//char buf[1024] = { 0 };
	//while (ifs >> buf)
	//{
	//	cout << buf << endl;
	//}
	////第二种
	//char buf[1024] = { 0 };
	//while (ifs.getline(buf, sizeof(buf)))
	//{
	//	cout << buf << endl;
	//}
	////第三种
	//string buf;
	//while ( getline (ifs,buf))//要直接使用getline需要string头文件
	//{
	//	cout << buf << endl;
	//}
	//第四种:效率低下
	char c;
	while ((c=ifs.get())!=EOF)//每次读一个字符，读到的放入c，判断是否读到文件尾end of file
	{
		cout << c;
	}

	//5.关闭文件
	ifs.close();
}
int main()
{
	test01();
	system("pause");

	return 0;

}