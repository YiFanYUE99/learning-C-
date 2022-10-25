#include <iostream>
using namespace std;
#include<set>
//set插入和删除
//insert clear erase clear

void printset(set<int>& s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//set容器：插入和删除
void test01()
{
	set<int>s1;
	//插入 insert
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);

	printset(s1);

	//删除erase
	s1.erase(s1.begin());//删除第一个数据
	printset(s1);

	//删除重载的版本
	s1.erase(30);//直接将容器中的30删除
	printset(s1);

	//清空
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