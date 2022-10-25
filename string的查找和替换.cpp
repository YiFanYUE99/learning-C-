#include <iostream>
using namespace std;
//查找：查找指定的字符串是否存在
//替换：在指定的位置替换字符串

//1.查找find rfind
void test01()
{
	//1.find 从左往右找
	string str1 = "abcdegfgf";
	int pos = str1.find("gf");//d在第四个位置0开始计数；如果不存在返回-1
	cout << "pos=" << pos << endl;
    
	if (pos == -1)
	{
		cout << "未找到字符串" << endl;

	}
	else
	{
		cout << "找到字符串" << endl;
	}
	//2.rfind从右往左查找   找到的是靠右的gf
	int pos2 = str1.rfind("gf");
	cout << "pos2=" << pos2 << endl;

}
//2.替换 replace
void test02()
{
	string str1 = "abcdefg";
	str1.replace(1, 3, "1111");//是将1-3号位的东西变为1111
	cout << "str1=" << str1 << endl;
}
int main()
{
	test01();
	test02();
	system("pause");

	return 0;

}