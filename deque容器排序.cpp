#include <iostream>
using namespace std;
#include<deque>
#include<algorithm>//标准算法的头文件
//利用算法实现对deque容器排序


void test01()
{
	deque<int>d;
	d.push_back(10);
	d.push_back(40);
	d.push_back(30);
	d.push_front(10);
	d.push_front(100);
	d.push_front(100);//100 100 10 10 40 30

	for (int i = 0; i < d.size(); i++)
	{
		cout << d[i] << " ";
	}
	cout << endl;//遍历

	//排序sort
	//对于支持随机访问的迭代器都可用sort排序，比如vector
	sort(d.begin(), d.end());//sort默认升序

	cout << "排序后：" << endl;
	for (int i = 0; i < d.size(); i++)
	{
		cout << d[i] << " ";
	}
	cout << endl;//遍历

}

int main()
{
	test01();
	system("pause");

	return 0;

}