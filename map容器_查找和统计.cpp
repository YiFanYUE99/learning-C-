#include <iostream>
using namespace std;
#include<map>
//map�Ĳ��Һ�ͳ��
//find count
//find���ص��ǵ�����
//����map��countֻ�ܷ���0��1��multimap���Է���1���ϵ�ֵ
void test01()
{
	//����
	map<int, int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 100));
	m.insert(pair<int, int>(3, 1));
	m.insert(pair<int, int>(4, 90));
	
	map<int, int>::iterator pos = m.find(3);
	if (pos != m.end())//end�����һ���ĺ�һ��
	{
		cout << "�鵽��" << (*pos).first << (*pos).second << endl;
	}
	else
	{
		cout << "û�ҵ�" << endl;
	}

	//ͳ��
	int num = m.count(4);
	cout << "num=" << num << endl;
}
int main()
{
	test01();

	system("pause");

	return 0;

}