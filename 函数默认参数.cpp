#include <iostream>
using namespace std;
//1.函数默认参数
int func1(int a, int b=20, int c=30)//这样可以只传一个参数；如果我们自己传入数据就用自己的数据，没传入用默认值
{
	return a + b + c;
}
//int func2(int a, int b = 20, int c)
//注意1：如果某个位置已经有了默认参数，则此位置以后都必须有默认参数
//{
//	return a + b + c;
//}
//注意2：如果函数的声明有默认参数，函数现实就不能有默认参数;否则会报错
// 声明函数和实现只能有一个默认参数
int func3(int a =20 , int b =20);
int func3(int a , int b)
{
	return a + b;
}
//2.函数占位参数,这样要传两个参数进去才能正常调用此函数
void func4(int a,int)
{
	cout << "this is func" << endl;
}
//3.1函数重载：函数名可以相同，提高复用性
//函数重载的满足条件：1.必须在同一个作用域（全局 局部）下2.函数名称相同3.函数的参数类型不同 或者个数不同 或者顺序不同
//注意函数返回值不可以作为重载的条件（比如void改int）
//3.2函数重载的注意事项：①引用②碰到默认参数

void func5()
{
	cout << "func5调用" << endl;
}
void func5(int a)//参数不同,可以重载
{
	cout << "func5(int a)的调用" << endl;
}
void func5(double a)//参数不同,可以重载
{
	cout << "func5(double a)的调用" << endl;
}
void func5(double a, int b)//顺序不同，可以重载
{
	cout << "func5(double a,int b)的调用" << endl;
}
void func5(int a , double b)//顺序不同，可以重载
{
	cout << "func5(int a,double b)的调用" << endl;
}

//1.引用作为重载条件
void func6(int& a)//int &a=10;不合法，引用需要先初始化比如int b=10；int &a=b;
{
	cout << "func6(int &a)调用" << endl;
}
void func6(const int& a)//const int 引用和int引用属于类型不同
//const int &a=10;合法；相当于先创建int temp=10；再使得const int &a=temp；
{
	cout << "func6(const int &a)调用" << endl;
}
//2.函数重载碰到默认函数
void func7(int a ,int b = 10)
{
	cout << "func7(int a，int b)的调用" << endl;

}
void func7(int a)
{
	cout << "func7(int a)的调用" << endl;

}

int main()
{
	
	cout << func1(10,30) << endl;//这样会把b=20改为b=30，而不是把c赋值

	cout << func3() << endl;
	
	func4(10,30);//含有占位参数；必须输入两个参数才能运行

	func5();//函数重载调用
	func5(3.14);//函数重载调用
	func5(2, 9.8);//函数重载调用
	func5(9.8, 2);//函数重载调用

	//1.引用作为重载条件
	int a = 10;
	func6(a);//调用的是不加const的函数

	func6(10);//调用的是带const的函数

	//func7(10);不能这么调用了，编译器不知道该调用哪个;有歧义
	func7(10, 20);


	system("pause");

	return 0;

}