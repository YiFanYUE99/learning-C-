#include <iostream>
using namespace std;
#include<map>
//��������
//ͳ��map������С�Լ�����map����


void printmap(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << (*it).first << " " << (*it).second << endl;
	}
	cout << endl;
}

void test01()
{
	map<int, int>m;
	//��������
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 30));
	m.insert(pair<int, int>(3, 50));
	m.insert(pair<int, int>(4, 20));
	//�ж��Ƿ�Ϊ��
	if (m.empty())
	{
		cout << "mΪ��" << endl;
	}
	else
	{
		cout << "map�Ĵ�СΪ" << m.size() << endl;//�鿴map��С
	}
}
//����
void test02()
{
	map<int, int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 30));
	m.insert(pair<int, int>(3, 50));
	m.insert(pair<int, int>(4, 20));

	map<int, int>m2;
	m2.insert(pair<int, int>(1, 10));
	m2.insert(pair<int, int>(4, 50));
	m2.insert(pair<int, int>(9, 60));
	m2.insert(pair<int, int>(3, 70));

	cout << "����ǰ��" << endl;
	printmap(m);
	printmap(m2);

	//����
	m.swap(m2);
	cout << "������" << endl;
	printmap(m);
	printmap(m2);



}
int main()
{
	test01();

	test02();
	system("pause");

	return 0;

}