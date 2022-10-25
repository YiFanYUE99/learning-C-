#include <iostream>
using namespace std;
#include<deque>
//deque�����Ĳ����ɾ��

void printdeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}


//1.���˲���
void test01()
{
	deque<int>d1;

	//1.1β��
	d1.push_back(10);
	d1.push_back(20);

	//1.2ͷ��
	d1.push_front(100);
	d1.push_front(200);

	printdeque(d1);

	//1.3βɾ
	d1.pop_back();

	//1.4ͷɾ
	d1.pop_front();

	printdeque(d1);
}

//2.ָ��λ�ò���
void test02()
{
	deque<int>d1;
	d1.push_back(10);
	d1.push_back(100);
	d1.push_back(300);
	d1.push_front(400);
	printdeque(d1);

	//2.1����������
	d1.insert(d1.begin(), 1000);//��һ��λ�ò���1000

	printdeque(d1);

	d1.insert(d1.begin(), 2,1000);//��һ��λ�ò���2��10000

	printdeque(d1);

	deque<int>d2;
	d2.push_back(1);
	d2.push_back(2);
	d2.push_back(3);
	d2.push_back(4);
	d2.push_back(5);

	d1.insert(d1.begin(), d2.begin(), d2.end());//��d1�ĵ�һ��λ���ϲ���d2�Ĵ�ͷ��β
	printdeque(d1);

}

//3.ָ��λ��ɾ��
void test03()
{
	deque<int>d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_front(200);
	d1.push_front(100);
	//100 200 10 20

	//ɾ�� erase
	deque<int>::iterator it = d1.begin();
	it++;
	d1.erase(it);//ɾ���˵ڶ���λ���ϵ���
	printdeque(d1);

	//���䷽ʽɾ��
	d1.erase(d1.begin(), d1.end());//��ͷɾ��β

	//���
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