#include <iostream>
using namespace std;
//栈区数据的注意事项---不要返回局部变量的地址
//栈区的数据由编译器管理开辟和释放

int * func(int b)//形参数据也会存放在栈区
{
	b = 100;
	int a = 10;//局部变量存放在栈区，栈区数据在函数执行完后自动释放
	return &a;//返回局部变量的地址,不要返回局部变量地址
}
int main()
{
	//接收func函数的返回值
	int* p = func(1);
	cout << *p << endl;//打印正确是因为编译器做了保留，不要返回局部变量地址


	system("pause");

	return 0;

}