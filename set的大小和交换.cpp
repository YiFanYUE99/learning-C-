#include <iostream>
using namespace std;
#include<set>
//ͳ��set������С�Լ�����set����
//֧�� size empty swap ����֧��resize

void printset(set<int>& s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//��С
void test01()
{
	set<int>s1;
	//��������
	s1.insert(10);
	s1.insert(30);
	s1.insert(50);
	s1.insert(70);

	printset(s1);
	//�ж��Ƿ�Ϊ��
	if (s1.empty())//�ж�set�Ƿ�Ϊ��
	{
		cout << "s1Ϊ��" << endl;
	}
	else
	{
		cout << "s1��Ϊ��" << endl;
		cout << "s1�Ĵ�СΪ��" << s1.size() << endl;//ͳ��set�Ĵ�С
	}


}

//����
void test02()
{
	set<int>s1;
	//��������
	s1.insert(10);
	s1.insert(30);
	s1.insert(50);
	s1.insert(70);

	set<int>s2;
	//��������
	s2.insert(100);
	s2.insert(300);
	s2.insert(500);
	s2.insert(700);

	printset(s1);
	printset(s2);

	s1.swap(s2);//����

	printset(s1);
	printset(s2);


}

int main()
{

	//test01();
	test02();
	system("pause");

	return 0;

}