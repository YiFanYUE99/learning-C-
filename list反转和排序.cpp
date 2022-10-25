#include <iostream>
using namespace std;
#include<list>
#include<algorithm>
//list�����ķ�ת������
void printlist(const list<int>&L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	
	list<int>L1;

	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	printlist(L1);

	//��ת
	L1.reverse();
	printlist(L1);
}
bool mycompare(int v1,int v2)
{
	//������õ�һ�������ڵڶ�����
	return v1 > v2;

}

//����
void test02()
{
	list<int>L1;
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(10);
	L1.push_back(0);

	printlist(L1);
	
	//���в�֧��������ʵ�������������������ʹ�ñ�׼�㷨
	// ��֧��������ʵ��������������ڲ����ṩ��ӦһЩ�㷨
	//sort(L1.begin(), L1.end());  

	L1.sort();//sortĬ������
	printlist(L1);

	//���Ҫ����
	L1.sort(mycompare);
	printlist(L1);
}


int main()
{
	test01();

	system("pause");

	return 0;

}