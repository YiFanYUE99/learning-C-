#include <iostream>
using namespace std;
//堆区：由程序员分配释放，若程序员不释放，程序结束时由操作系统回收
//C++中主要利用new在堆区开辟内存，手动释放内存用delete
//1.new的基本语法
int* func()
{
	//利用new将数据开辟到堆区
	//指针 的本质是局部变量，放在栈上，指针保存到数据放在堆区

	//在堆区创建整型数据
	//new返回的是该数据类型的指针
	int* p = new int(10);
	return p;

}
void test1()
{
	int* p = func();
	cout << *p << endl;
	//利用关键词delete释放内存区数据
	delete p;
}
//2.在堆区用new开辟数组
void test2()
{
	//在堆区创建10整型数据的数组
	int* arr = new int[10];//10代表数组有10个元素 方括号
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;//给10个元素赋值100-109
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	//释放堆区数组;释放数组要加[]才可以
	delete[] arr;
}

int main()
{
	test1();
	test2();
	int* p = func();
	cout << *p << endl;
	system("pause");

	return 0;

}