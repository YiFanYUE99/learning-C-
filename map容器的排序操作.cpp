#include <iostream>
using namespace std;
#include<map>
//map容器的排序

//自行写仿函数改变其排序规则
class mycompare
{
public:
	bool operator()(const int&v1,const int&v2)const//一定要在行末加上const
	{
		return v1 > v2;
	}
};

void test01()
{
	map<int, int,mycompare>m;//指定自己的排序规则，使其降序
	m.insert(make_pair(1, 30));
	m.insert(make_pair(2, 20));
	m.insert(make_pair(3, 60));
	m.insert(make_pair(4, 90));
	m.insert(make_pair(5, 80));

	for (map<int, int,mycompare>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key= " << it->first << "value=" << it->second << endl;
	}

}

int main()
{
	test01();

	system("pause");

	return 0;

}