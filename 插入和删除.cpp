#include <iostream>
using namespace std;
#include<set>
//set�����ɾ��
//insert clear erase clear

void printset(set<int>& s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//set�����������ɾ��
void test01()
{
	set<int>s1;
	//���� insert
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);

	printset(s1);

	//ɾ��erase
	s1.erase(s1.begin());//ɾ����һ������
	printset(s1);

	//ɾ�����صİ汾
	s1.erase(30);//ֱ�ӽ������е�30ɾ��
	printset(s1);

	//���
	/*s1.erase(s1.begin(), s1.end());*/
	s1.clear();
	printset(s1);
}
int main()
{
	test01();
	system("pause");

	return 0;

}