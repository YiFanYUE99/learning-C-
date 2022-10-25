#include <iostream>
using namespace std;
#include<list>
//对list(链表)容器中数据进行存取
//front back
//不能跳跃式访问 at []等

void test01()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);


	//不可以用 中括号[] at 的方式访问
	//list是链表，数据不是用连续的线性空间存储的，迭代器不支持随机访问
	

	//只能访问第一个和最后一个元素
	cout << "第一个元素为：" << L1.front() << endl;
	cout << "最后一个元素为：" << L1.back() << endl;

	//迭代器不支持随机访问
	list<int>::iterator it = L1.begin();
	it++;//不能it+1，只能++ --


}

int main()
{
	test01();
	system("pause");

	return 0;

}