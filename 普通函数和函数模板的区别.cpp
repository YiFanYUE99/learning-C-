#include <iostream>
using namespace std;

//①普通函数调用时可以发生  自动类型转换（隐式类型转换）
//②函数模板调用时，如果利用  自动类型推到  ，不会发生隐式类型转换
//③如果利用显示  指定类型的方式  ，可以发生隐式类型转换

//普通函数:两数相加
int myadd01(int a,int b)
{
	return a + b;
}
void test01()
{
	int a = 10;
	int b = 20;
	char c = 'c';//a->97,c->99
	cout << myadd01(a, c) << endl;//自动将字符型变量转化成了asc码，
}

//函数模板：两数相加
template <class T>
T myadd02(T a, T b)
{
	return a + b;
}

void test02()
{
	int a = 10;
	int b = 20;
	char c = 'c';//a->97,c->99

	//自动类型推导无法发生隐式类型转换
	cout << myadd02(a, b) << endl;

	//显式指定类型 可以 发生隐式类型转换，转为int
	cout << myadd02<int>(a, c) << endl;
}





int main()
{
	test01();
	test02();
	system("pause");

	return 0;

}