#include <iostream>
using namespace std;
#include<string>
//对string字符串进行插入和删除字符操作

void test01()
{
	string str = "hi";
	//插入
	str.insert(1, "1111");//在第一个位置前插入1111,
	cout << str << endl;//输出h1111i

	//删除
	str.erase(1, 4);//从第一个位置起删除4个

	cout << str << endl;//变回hi
}
int main()
{
	test01();
	system("pause");

	return 0;

}