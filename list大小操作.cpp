#include <iostream>
using namespace std;
#include<list>
//list的大小操作
//size() resize() empty()

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

	//判断容器是否为空empty
	if (L1.empty())
	{
		cout << "L1为空" << endl;
	}
	else
	{
		cout << "L1不为空" << endl;
		cout << "L1的元素个数为" << L1.size() << endl;//返回list大小
	}

	//重新指定大小,多出的数用0填充
	L1.resize(10, 10);
	printlist(L1);



}
int main()
{
	test01();

	system("pause");

	return 0;

}