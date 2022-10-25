#include <iostream>
using namespace std;
#include<list>
//对list容器进行插入和删除
//remove（ele）删除所有与ele相匹配的值
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
	list<int>L;
	
	//尾插
	L.push_back(10);
	L.push_back(20);
	L.push_back(30);

	//头插
	L.push_front(20);
	L.push_front(40);
	L.push_front(30);

	printlist(L);

	//头删
	L.pop_front();
	printlist(L);

	//尾删
	L.pop_back();
	printlist(L);


	//insert插入
	L.insert(L.begin(), 100);//在第一个位置插入100
	printlist(L);

	list<int>::iterator it = L.begin();
	L.insert(++it, 1000);//在第二个位置插入1000（迭代器往后偏移）
	printlist(L);

	//删除erase
	it = L.begin();
	L.erase(it);//删除第一个位置的数据
	printlist(L);

	//移除remove
	L.remove(1000);//删除1000这个元素；如果有好多个1000就都删掉
	printlist(L);

	//清空clear
	L.clear();
	printlist(L);

}

int main()
{
	test01();

	system("pause");

	return 0;

}