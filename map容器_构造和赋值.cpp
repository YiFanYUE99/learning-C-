#include <iostream>
using namespace std;
#include<map>
//map multimap容器:性能高效；属于关联式容器，底层结构使用二叉树实现
//map中所有元素都是pair
//pair中第一个元素为key,起到索引作用，第二个元素为value(实值)
//所有元素都会根据元素的键值自动排序

//优点：可以根据key值快速找到value值

//map和multimap的区别
//map不允许容器中有重复key值元素,multimap允许；value值无所谓

void printmap(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key= " << (*it).first << "value=" << (*it).second << endl;
	}
	cout << endl;
}

void test01()
{

	//创建map容器;map容器会根据p值排序
	map<int, int>m;

	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(4, 40));

	printmap(m);

	//拷贝构造
	map<int, int>m2(m);
	printmap(m2);

	//赋值
	map<int, int>m3;
	m3 = m2;
	printmap(m3);
}
int main()
{
	test01();

	system("pause");

	return 0;

}