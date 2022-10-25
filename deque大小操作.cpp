#include <iostream>
using namespace std;
#include<deque>
//��deque�����Ĵ�С���в���.��vector�Ĳ������񣬵�dequeû��capacity

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

	//1.�����Ƿ�Ϊ��
	if (d1.empty())
	{
		cout << "d1��" << endl;
	}
	else
	{
		cout << "d1��Ϊ��" << endl;
		cout << "d1�Ĵ�СΪ��" << d1.size() << endl;//2.size�鿴deque�Ĵ�С

	}

	//3.resize����ָ��deque��С
	d1.resize(15);
	printdeque(d1);

	d1.resize(20, 1);//ָ������ռ���1���
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