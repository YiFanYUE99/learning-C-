#include <iostream>
using namespace std;
#include<set>
//set容器查找和统计
//find() 
//count() 对于set而言只能返回0或者1

void test01()
{
	//查找
	set<int>s1;
	//插入数据
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);

	//查找30
	set<int>::iterator pos = s1.find(30);
	if (pos != s1.end())//pos没有指向最后一个位置之后
	{
		cout << "找到元素：" << *pos << endl;
	}
	else
	{
		cout << "未找到" << endl;
	}
}
void test02()
{
	//查找
	set<int>s1;
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	//统计数据:对于set而言count结果只能是0或1
	int num = s1.count(30);//查找30的个数
	cout << "num=" << num << endl;


}


int main()
{
	test01();
	test02();
	system("pause");

	return 0;

}