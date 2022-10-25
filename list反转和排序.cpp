#include <iostream>
using namespace std;
#include<list>
#include<algorithm>
//list容器的反转和排序
void printlist(const list<int>&L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	
	list<int>L1;

	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	printlist(L1);

	//反转
	L1.reverse();
	printlist(L1);
}
bool mycompare(int v1,int v2)
{
	//降序就让第一个数大于第二个数
	return v1 > v2;

}

//排序
void test02()
{
	list<int>L1;
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(10);
	L1.push_back(0);

	printlist(L1);
	
	//所有不支持随机访问迭代器的容器，不可以使用标准算法
	// 不支持随机访问迭代器的容器，内部会提供对应一些算法
	//sort(L1.begin(), L1.end());  

	L1.sort();//sort默认升序
	printlist(L1);

	//如果要降序
	L1.sort(mycompare);
	printlist(L1);
}


int main()
{
	test01();

	system("pause");

	return 0;

}