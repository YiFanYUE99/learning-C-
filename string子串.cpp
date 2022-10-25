#include <iostream>
using namespace std;
#include<string>
//string求子串

void test01()
{
	string str = "abcdefg";

	string substr = str.substr(1, 3);//求子串,从①号位开始，截取3个，不是截到第三个

	cout << substr << endl;//输出bcd
}

void test02()
{
	string email = "hello@sina.com";

	//从邮件地址中获取用户名
	int pos = email.find("@");
	string username = email.substr(0, pos);
	cout << username << endl;


}
int main()
{
	test01();
	test02();

	system("pause");

	return 0;

}