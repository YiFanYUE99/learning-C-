#include <iostream>
using namespace std;
#include<string>
//pair对组，不用包含头文件
//成对出现的数据，利用对组可以返回两个数据
//两种创建方法
void test01()
{
	//第一种方式
	pair<string, int>p("Tom", 20);//first是赋予的第一个值，如Tom,second就是第二个20
	cout << "姓名" << p.first << "年龄" << p.second;

	//第二种方式
	pair<string, int>p2 = make_pair("Jerry", 10);
	cout << "姓名" << p2.first << "年龄" << p2.second;
}
int main()
{
	test01();
	system("pause");

	return 0;

}