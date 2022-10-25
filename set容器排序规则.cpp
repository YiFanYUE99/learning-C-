#include <iostream>
using namespace std;
#include<set>
//set容器默认排序规则为从小到大，掌握如何改变排序规则

//利用仿函数，改变排序规则

//仿函数 : 非常重要，注意看bool
class mycompare
{
public:
	bool operator()(const int &v1, const int &v2)const
	{
		return v1 > v2;
	}
};


void test01()
{
	set<int>s1;
	s1.insert(20);
	s1.insert(10);
	s1.insert(40);
	s1.insert(30);

	for (set<int>::iterator it = s1.begin(); it != s1.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	
	//指定排序规则为从小到大
	set<int,mycompare>s2;
	s2.insert(10);
	s2.insert(20);
	s2.insert(30);
	s2.insert(40);


}
int main()
{
	test01();

	system("pause");

	return 0;

}