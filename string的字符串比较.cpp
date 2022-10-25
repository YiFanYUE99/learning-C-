#include <iostream>
using namespace std;
//string字符串比较.compare
//比较方式：按字符的ASCll码比较;主要是比较是否相等
//=返回0
//>返回1
//<返回-1
void test01()
{
	string str1 = "Hello";
	string str2 = "Hell";
	if (str1.compare(str2) == 0)
	{
		cout << "str1=str2" << endl;
	}
	else if (str1.compare(str2) == 1)
	{
		cout << "str1>str2" << endl;
	}
	else if (str1.compare(str2) == -1)
	{
		cout << "str1<str2" << endl;
	}
}


int main()
{
	test01();
	system("pause");

	return 0;

}