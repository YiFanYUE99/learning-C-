#include <iostream>
using namespace std;
#include<deque>
//deque容器的插入和删除

void printdeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}


//1.两端操作
void test01()
{
	deque<int>d1;

	//1.1尾插
	d1.push_back(10);
	d1.push_back(20);

	//1.2头插
	d1.push_front(100);
	d1.push_front(200);

	printdeque(d1);

	//1.3尾删
	d1.pop_back();

	//1.4头删
	d1.pop_front();

	printdeque(d1);
}

//2.指定位置插入
void test02()
{
	deque<int>d1;
	d1.push_back(10);
	d1.push_back(100);
	d1.push_back(300);
	d1.push_front(400);
	printdeque(d1);

	//2.1迭代器插入
	d1.insert(d1.begin(), 1000);//第一个位置插入1000

	printdeque(d1);

	d1.insert(d1.begin(), 2,1000);//第一个位置插入2个10000

	printdeque(d1);

	deque<int>d2;
	d2.push_back(1);
	d2.push_back(2);
	d2.push_back(3);
	d2.push_back(4);
	d2.push_back(5);

	d1.insert(d1.begin(), d2.begin(), d2.end());//在d1的第一个位置上插入d2的从头到尾
	printdeque(d1);

}

//3.指定位置删除
void test03()
{
	deque<int>d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_front(200);
	d1.push_front(100);
	//100 200 10 20

	//删除 erase
	deque<int>::iterator it = d1.begin();
	it++;
	d1.erase(it);//删除了第二个位置上的数
	printdeque(d1);

	//区间方式删除
	d1.erase(d1.begin(), d1.end());//从头删到尾

	//清空
	d1.clear();
	printdeque(d1);
}

int main()
{

	test01();
	test02();
	test03();
	system("pause");

	return 0;

}