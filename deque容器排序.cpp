#include <iostream>
using namespace std;
#include<deque>
#include<algorithm>//��׼�㷨��ͷ�ļ�
//�����㷨ʵ�ֶ�deque��������


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
	cout << endl;//����

	//����sort
	//����֧��������ʵĵ�����������sort���򣬱���vector
	sort(d.begin(), d.end());//sortĬ������

	cout << "�����" << endl;
	for (int i = 0; i < d.size(); i++)
	{
		cout << d[i] << " ";
	}
	cout << endl;//����

}

int main()
{
	test01();
	system("pause");

	return 0;

}