#include <iostream>
using namespace std;
#include<set>
//统计set容器大小以及交换set容器
//支持 size empty swap 但不支持resize

void printset(set<int>& s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//大小
void test01()
{
	set<int>s1;
	//插入数据
	s1.insert(10);
	s1.insert(30);
	s1.insert(50);
	s1.insert(70);

	printset(s1);
	//判断是否为空
	if (s1.empty())//判断set是否为空
	{
		cout << "s1为空" << endl;
	}
	else
	{
		cout << "s1不为空" << endl;
		cout << "s1的大小为：" << s1.size() << endl;//统计set的大小
	}


}

//交换
void test02()
{
	set<int>s1;
	//插入数据
	s1.insert(10);
	s1.insert(30);
	s1.insert(50);
	s1.insert(70);

	set<int>s2;
	//插入数据
	s2.insert(100);
	s2.insert(300);
	s2.insert(500);
	s2.insert(700);

	printset(s1);
	printset(s2);

	s1.swap(s2);//交换

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