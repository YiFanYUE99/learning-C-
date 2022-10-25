#include <iostream>
using namespace std;
#include<deque>
//对deque容器的大小进行操作.和vector的操作很像，但deque没有capacity

void printdeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	deque<int>d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printdeque(d1);

	//1.容器是否为空
	if (d1.empty())
	{
		cout << "d1空" << endl;
	}
	else
	{
		cout << "d1不为空" << endl;
		cout << "d1的大小为：" << d1.size() << endl;//2.size查看deque的大小

	}

	//3.resize重新指定deque大小
	d1.resize(15);
	printdeque(d1);

	d1.resize(20, 1);//指定多余空间用1填充
	printdeque(d1);


	d1.resize(5);
	printdeque(d1);
}
int main()
{
	test01();

	system("pause");

	return 0;

}