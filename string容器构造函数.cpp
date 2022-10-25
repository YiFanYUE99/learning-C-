#include <iostream>
using namespace std;
#include<string>
//string容器构造函数
//string是C++风格字符串，string容器 是一个类
//string容器是一个类，内部封装了char*（字符串），管理此字符串，是一个char*型的容器


//string类内部封装了很多成员方法：find copy delete replace insert
//string管理char*所分配的内存，不用担心复制越界和取值越界等，由类内部进行负责

//string的构造函数
//string()创建一个空字符串
// string(const char*s)使用字符串s初始化
// string(const string& str) 使用一个string对象初始化另一个string对象
// string(int n,char c)使用n个字符c初始化字符串
void test01()
{
	string s1;//默认构造

	const char* str = "Hi";
	string s2(str);//使用字符串s初始化
	cout << "s2=" << s2 << endl;

	string s3(s2);//使用一个string对象初始化另一个string对象
	cout << "s3=" << s3 << endl;

	string s4(10, 'b');//使用n个字符c初始化字符串,单引号注意
	cout << "s4=" << s4 << endl;
}
int main()
{
	test01();
	system("pause");

	return 0;

}