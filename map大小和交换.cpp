#include <iostream>
using namespace std;
#include<map>
//功能描述
//统计map容器大小以及交换map容器


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
	//插入数据
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 30));
	m.insert(pair<int, int>(3, 50));
	m.insert(pair<int, int>(4, 20));
	//判断是否为空
	if (m.empty())
	{
		cout << "m为空" << endl;
	}
	else
	{
		cout << "map的大小为" << m.size() << endl;//查看map大小
	}
}
//交换
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

	cout << "交换前：" << endl;
	printmap(m);
	printmap(m2);

	//交换
	m.swap(m2);
	cout << "交换后：" << endl;
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