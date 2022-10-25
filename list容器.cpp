#include <iostream>
using namespace std;
#include<list>
//list的基本概念
//功能：将数据进行链式存储
//链表list是一种物理存储单元上非连续的存储结构；
//链表由一系列结点组成；
// 每个结点有 两 部分：一个 是存放数据元素 的 数据域；另一个是 存储下一个节点地址 的 指针域
//STL中的链表是一个双向循环：最后一个结点可以指向第一个

//优点，①插入删除数据方便，只需改变前后两个元素的指针域②不会有多余的空间浪费
//缺点：①遍历速度没数组快，②占用空间比数组大

//1.list的构造函数（创建list容器）

void printlist(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}


void test01()
{
	//创建list容器
	list<int>L1;//1.默认构造

	//添加数据
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	//遍历容器
	printlist(L1);

	//2.区间方式构造
	list<int>L2(L1.begin(), L1.end());
	printlist(L2);

	//3.拷贝构造
	list<int>L3(L2);
	printlist(L3);

	//4.n个元素构造
	list<int>L4(10, 100);//10个100
	printlist(L4);

}

int main()
{
	test01();
	system("pause");

	return 0;

}