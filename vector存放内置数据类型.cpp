#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
//vector���Ϊ���飬���������������
//����vector
//�㷨 for_each����
//��������vector<int>::iterator
void myPrint(int val)
{
	cout << val << endl;
}

void test01()
{
	//����һ��vector����������
	vector<int>v;
	//�������в�������
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	////ͨ�����������������е�����
	//vector<int>::iterator itBegin = v.begin();//v.begin()��ʼ��������ָ�������е�һ��Ԫ��
	//
	//vector<int>::iterator itEnd = v.end();//v.begin()������������ָ�����������һ��Ԫ�ص���һ��λ��

 //   //��һ�ֱ�����ʽ
	//while (itBegin != itEnd)
	//{
	//	cout << *itBegin << endl;
	//	itBegin++;
	//}
	
	////�ڶ��ֱ�����ʽ 
	//for (vector<int>::iterator it = v.begin(); it != v.end();it++)
	//{
	//	cout << *it << endl;//*it�൱�ڶ�v����ȡֵ����
	//}

	//�����ֱ�����ʽ������STL�ṩ�����㷨
	for_each(v.begin(), v.end(), myPrint);//for_each�����㷨

}
int main()
{
	test01();

	system("pause");

	return 0;

}
