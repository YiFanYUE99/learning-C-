#include <iostream>
using namespace std;
#include<deque>
//deque���������ݴ�ȡ;��vectorҲ����
void test01()
{
	deque<int>d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_back(40);
	d.push_front(10);
	d.push_front(11);

	//1.ͨ��[]����Ԫ��
	for (int i = 0; i < d.size(); i++)
	{
		cout << d[i] << " ";
	}
	cout << endl;

	//2.at��ʽ����
	for (int i = 0; i < d.size(); i++)
	{
		cout << d.at(i) << " ";
	}
	cout << endl;
	cout << "��һ��" << d.front();
	cout << "���һ��" << d.back();
}

int main()
{
	test01();
	system("pause");

	return 0;

}