//set�����ϣ�������Ԫ�ض����ڲ���ʱ�Զ�����
#include <iostream>
using namespace std;
#include<set>
//set multiset���ڹ���ʽ�������ײ�ṹ�Ƕ�����ʵ��
//set��multiset������
//set���������������ظ�Ԫ��
//multiset�������������ظ���Ԫ��

//set����͸�ֵ

void printset(set<int>& s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{

	//��ͨ����
	set<int>s1;


	//set��������ֻ��insert��ʽ
	s1.insert(1);
	s1.insert(2);
	s1.insert(3);
	s1.insert(3);
	s1.insert(5);
	s1.insert(4);
	//��������

	printset(s1);//����������3��set��Ҳֻ����1��3

	//set�������ص㣺����������ظ�ֵ������ʱ�Զ�����

	//��������
	set<int>s2(s1);
	printset(s2);

	//��ֵ
	set<int>s3;
	s3 = s2;
	printset(s3);


}

int main()
{
	test01();

	system("pause");

	return 0;

}