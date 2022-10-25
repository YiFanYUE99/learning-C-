#include <iostream>
using namespace std;
#include<deque>
//deque容器的数据存取;对vector也适用
void test01()
{
	deque<int>d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_back(40);
	d.push_front(10);
	d.push_front(11);

	//1.通过[]访问元素
	for (int i = 0; i < d.size(); i++)
	{
		cout << d[i] << " ";
	}
	cout << endl;

	//2.at方式访问
	for (int i = 0; i < d.size(); i++)
	{
		cout << d.at(i) << " ";
	}
	cout << endl;
	cout << "第一个" << d.front();
	cout << "最后一个" << d.back();
}

int main()
{
	test01();
	system("pause");

	return 0;

}