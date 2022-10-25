#include <iostream>
using namespace std;
#include<deque>
//deque容器为双端数组，可对 头端 进行插入和删除；push_front pop_back
//vector头插很慢，deque较快
//vector访问元素的速度比deque快

//deque内部有中控器，维护每段缓冲区中内容，缓冲区存放真实数据
//deque像一段连续空间，实则不是
//deque容器的迭代器支持随机访问

void printdeque(const deque<int>& d)//只读加const，下面迭代器要改为const_iterator
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)//迭代器改为const_iterator
	{
		cout << *it << " ";
	}
	cout << endl;
}





//deque的构造函数
void test01()
{
	//1.常规赋值
	deque<int>d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}

	printdeque(d1);

	//2.区间方式给deque赋值
	deque<int>d2(d1.begin(), d1.end());
	printdeque(d2);

	//3.10个100赋值给deque
	deque<int>d3(10, 100);
	printdeque(d3);

	//4.拷贝构造
	deque<int>d4(d3);
	printdeque(d4);
}



int main()
{
	test01();

	system("pause");

	return 0;

}