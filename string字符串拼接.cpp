#include <iostream>
using namespace std;
#include<string>
//string字符串拼接：实现在字符串 末尾 拼接 字符串
//重载版本很多
void test01()
{
	string str1 = "我";

	//1.
	str1 += "爱玩游戏";
	cout << "str1=" <<str1<< endl;

	//2.一个字符用单引号
	str1 += ':';
	cout << "str1=" << str1 << endl;

	//3.
	string str2 = "LOL DNF";
	str1 += str2;
	cout << "str1" << str1 << endl;

	//4.
	string str3 = "I ";
	str3.append("love playing");
	cout << "str3=" << str3 << endl;

	//5.前n个字符拼接到字符串
	str3.append(" gamejaij", 5);
	cout << "str3=" << str3 << endl;

	//6.
	str3.append(str2);
	cout << "str3=" << str3 << endl;

	//7.只截取一个字符串的0-3个字符添加
	str3.append(str2, 0, 3);
	cout << "str3=" << str3 << endl;


}


int main()
{
	test01();
	system("pause");

	return 0;

}