#include <iostream>
using namespace std;
#include<deque>
//��deque��ֵ:�͸�vector��ֵ������ͬ

void printdeque(const deque<int>&d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	//1.��ͨ����
	deque<int>d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printdeque(d1);

	//2.operator=��ֵ
	deque<int>d2;
	d2 = d1;
	printdeque(d2);

	//3.assign��ֵ
	deque<int>d3;
	d3.assign(d1.begin(), d1.end());
	printdeque(d3);

	//4.10��100��ֵ��d4
	deque<int>d4;
	d4.assign(10, 100);
	printdeque(d4);

}
int main()
{
	test01();

	system("pause");

	return 0;

}