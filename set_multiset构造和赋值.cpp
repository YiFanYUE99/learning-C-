//set（集合）中所有元素都会在插入时自动排序
#include <iostream>
using namespace std;
#include<set>
//set multiset属于关联式容器，底层结构是二叉树实现
//set和multiset的区别
//set不允许容器中有重复元素
//multiset允许容器中有重复的元素

//set构造和赋值

void printset(set<int>& s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{

	//普通构造
	set<int>s1;


	//set插入数据只有insert方式
	s1.insert(1);
	s1.insert(2);
	s1.insert(3);
	s1.insert(3);
	s1.insert(5);
	s1.insert(4);
	//遍历容器

	printset(s1);//插入了两个3，set中也只会有1个3

	//set容器的特点：不允许插入重复值；插入时自动升序

	//拷贝构造
	set<int>s2(s1);
	printset(s2);

	//赋值
	set<int>s3;
	s3 = s2;
	printset(s3);


}

int main()
{
	test01();

	system("pause");

	return 0;

}