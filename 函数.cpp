//6.函数：将经常使用的代码封装起来，减少重复代码
//6.1函数定义的五个步骤：①返回值类型②函数名③参数列表④函数体语句⑤return表达式
//返回值类型 函数名（参数列表）
//{
//      函数体语句
//      return表达式
// }
// 6.2调用函数
// 6.3值传递：值传递时，如果形参改变不影响实参
// 6.4函数的常见样式4种：有无参数、有无返回值
// 6.5函数的声明：可以多次，告诉编译器如何使用(当该函数写在main函数后面时需要用到)
// 6.6 函数的分文件编写（4个步骤）
//①创建.h后缀名的头文件
//②创建.cpp后缀名的源文件
//③在头文件中写函数的声明void swap(int a, int b);
//④在原文件中写函数的定义 
//⑤在.h中写上 #include <iostream> using namespace std;
//⑥在.cpp中写上#include "fenwenjian.h"；引号表示自定义的函数
//⑦在需要用到此函数的cpp文件中写上#include "fenwenjian.h"

//6.练习：实现一个加法函数，功能是传入两个整型数据，计算数据相加结果，并且返回
#include <iostream>
using namespace std;
#include "fenwenjian.h"
//num1 num2是形参
int add(int num1, int num2)//①返回值类型是int②函数名是add③参数列表：传入两个int
{
	int sum = num1 + num2;//④传入函数体语句

	return sum;//⑤return表达式
}
//定义数值交换函数，如果函数不需要返回值，返回值类型写为void,不写return
void exchan(int numb1, int numb2) 
{
	cout << "numb1=" << numb1 << endl;
	cout << "numb2=" << numb2 << endl;
	int temp = numb1;
	numb1 = numb2;
	numb2 = temp;
	cout << "numb1=" << numb1 << endl;
	cout << "numb2=" << numb2 << endl;
   
}
//6.4函数常见样式
//①无参() 无返void
void test1()
{
	cout << "①无参无返" << endl;
}
//②有参（。。。）无返void
void test2(int a)
{
	cout << "②有参无返 " << a << endl;
}
//③无参() 有返return
int test3()
{
	return 0;
}
//④有参（。。。）有返return
int test4(int num4)
{
	return num4;
}
//6.5函数的声明:提前告诉编译器函数存在
int max(int a, int b);//函数的声明；没有大括号




int main()//不需要传入东西
{
	//6.2在main函数中调用add函数
	int a = 90;
	int b = 30;
	int c = add(a, b);//调用时实参的值会传递给形参
	cout << c << endl;
	//6.3值传递，交换后d和e并不会改变；实参和形参和temp占用不同的内存
	int d = 30;
	int e = 49;
	exchan(d, e);
	cout << "d" << d << endl;//d和e的值不会改变
	cout << "e" << e << endl;

	test1();//6.4①调用无参无返的函数
	test2(2);//6.4②调用有参无返的函数
	int q = test3();//6.4③调用无参有返的函数
	cout << q << endl;
	int p = test4(2000);//6.4④调用有参有返的函数
	cout << p << endl;
	//6.5函数的声明
	int a1 = 20;
	int b1 = 10;
	cout << max(a1, b1) << endl;
	//6.6分文件
	swap(10, 20);



	system("pause");

	return 0;

}
//6.5函数的声明练习：比较两数大小返回大的
int max(int a, int b)
{
	return a > b ? 1 : 2;//三目运算符比大小；a大返回1，否则返回2
}

