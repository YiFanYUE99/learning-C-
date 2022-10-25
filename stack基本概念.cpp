#include <iostream>
using namespace std;
#include<stack>
//stack 栈 基本概念：先进后出的结构，它只有一个出口
//栈中只有顶部元素可以被外界使用，因此栈不许有遍历行为
//1栈可以判断容器是否为空
//2栈可以返回元素个数

//常用接口
void test01()
{
	stack<int>s;

	//入栈
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);

	cout << "栈的大小" << s.size() << endl;
	
	//看栈内数据（不是遍历，看完出栈）
	while (!s.empty())
	{
		//查看栈顶元素
		cout << "栈顶元素为： " << s.top() << endl;

		//出栈
		s.pop();

	}
	cout << "栈的大小" << s.size() << endl;

}
int main()
{
	test01();

	system("pause");

	return 0;

}