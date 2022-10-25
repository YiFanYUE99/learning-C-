#include <iostream>
using namespace std;
//函数调用（）运算符重载 仿函数 没有固定写法，非常灵活
//打印输出类
class myprint
{
public:
	//*重载的 函数调用运算符 反函数
	void operator()(string test)
	{
		cout << test << endl;
	}
};
class myadd
{
public:
	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}
};
//真正的函数
void myprint2(string test)
{
	cout << test << endl;
}
void test01()
{
	myprint myprint;
	myprint("hello world");//非常像真的函数故叫仿函数
	myprint2("hello world");
	myadd add;//先写函数名再写函数
	int ret = add(100, 100);
	cout << ret << endl;

	//匿名函数对象
	cout << myadd()(100, 100) << endl;
}
int main()
{
	test01();
	system("pause");

	return 0;

}