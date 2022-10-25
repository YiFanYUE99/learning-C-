#include <iostream>
using namespace std;
#include<string>
//string字符存取 [] 或者 at()
void test01()
{
	//读取
	string str = "hello";
	cout << "str=" << str << endl;
	//1.通过[]访问单个字符
	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i] << endl;
	}
	//2.通过at方式访问单个字符
	for (int i = 0; i < str.size(); i++)
	{
		cout << str.at(i) << " ";
	}
	cout << endl;


	//修改
	str[0] = 'x';//将第0个字符改为x
	cout << "str=" << str << endl;

	str.at(1) = 'x';
	cout << "str=" << str << endl;
}
int main()
{
	test01();
	system("pause");

	return 0;

}