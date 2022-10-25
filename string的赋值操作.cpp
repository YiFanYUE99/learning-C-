#include <iostream>
using namespace std;
#include<string>
//string 字符串赋值
//等号的赋值方法assign实用
// 
// 
//
void test01()
{
	string str1;
	str1 = "hi!";//1char*型字符串赋值给当前字符串
	cout << "str1=" << str1 << endl;

	string str2;
	str2 = str1;//2拷贝赋值
	cout << "str2=" << str2 << endl;

	string str3;
	str3 = 'a';//3单个字符赋值，单引号
	cout << "str3=" << str3 << endl;

	string str4;
	str4.assign("Good luck");//4.assign赋值
	cout << "str4=" << str4 << endl;

	string str5;
	str5.assign("Good luck", 4);//5.将字符串的前4个赋值给str5
	cout << "str5=" << str5 << endl;

	string str6;
	str6.assign(str5);//6.assign的拷贝构造函数
	cout << "str6=" << str6 << endl;

	string str7;//7.10个w组成的字符串
	str7.assign(10, 'w');
	cout << "str7=" << str7 << endl;
}
int main()
{
	test01();
	system("pause");

	return 0;

}