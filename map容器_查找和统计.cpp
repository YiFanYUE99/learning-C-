#include <iostream>
using namespace std;
#include<map>
//map的查找和统计
//find count
//find返回的是迭代器
//对于map，count只能返回0、1；multimap可以返回1以上的值
void test01()
{
	//查找
	map<int, int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 100));
	m.insert(pair<int, int>(3, 1));
	m.insert(pair<int, int>(4, 90));
	
	map<int, int>::iterator pos = m.find(3);
	if (pos != m.end())//end是最后一个的后一个
	{
		cout << "查到了" << (*pos).first << (*pos).second << endl;
	}
	else
	{
		cout << "没找到" << endl;
	}

	//统计
	int num = m.count(4);
	cout << "num=" << num << endl;
}
int main()
{
	test01();

	system("pause");

	return 0;

}