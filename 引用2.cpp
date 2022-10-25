#include <iostream>
using namespace std;
//4.引用做函数返回值
//作用：引用是可以作为函数的返回值存在的
//1.注意：不要返回局部变量引用
int &test1()//假如返回局部变量引用
{
	int a = 10;//局部变量存放在四区中的栈区
	return a;
}
//2.（等号左边是左值）如果函数的返回值是引用，这个函数的调用可以作为左值
int& test2()
{
	static int a = 10;//静态变量存放在全局区；程序结束后全局区数据释放
	return a;//返回a的引用（变量）
}
//5.引用的本质：指针常量（指针指向不可以修改）
//int a = 10;
//int& ref = a;自动转换为 int*const ref=&a;指针常量指向不能更改
//ref = 20;内部发现ref是引用，自动转换为*ref=20;(指针指向的内容变为20)；就把ref当成a即可

//6.常量引用：主要用来修饰形参，防止误操作
//在形参列表中，加const修饰形参，防止形参改变实参
//打印数据的函数
void show(const int& val)//防止误操作改变val
{
	//val = 1000;加上const后无法修改val
	cout << "val= " << val << endl;
}

int main()
{
	int& ref = test1();
	cout << "ref=" << ref << endl;//乱码了因为返回了局部变量

	
	int& ref2 = test2();
	cout << "ref2=" << ref2 << endl;//静态变量存在全局区，程序结束才会被释放

	test2() = 1000;//（使得a=1000,ref2是a的别名）
	//如果函数的返回值是引用，这个函数调用可以作为左值
	cout << "ref2=" << ref2 << endl;

	//6.常量引用
	//加上const后，编译器将代码修改 int temp=10;const int &ref3=temp;
	const int& ref3 = 10;
	
	//用引用的方式输出a
	int a = 100;
	show(a);


	system("pause");

	return 0;

}