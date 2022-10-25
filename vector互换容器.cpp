#include <iostream>
using namespace std;
#include<vector>
//实现两个容器内元素进行互换swap

void printvector(vector<int>&v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

}


//1.基本使用
void test01()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printvector(v1);

	vector<int>v2;
	for (int i = 10; i > 0; i--)
	{
		v2.push_back(i);
	}
	printvector(v2);
	//交换.swap()
	v1.swap(v2);
	printvector(v2);//交换成功
}





//2.实际用途
//巧用swap以收缩内存空间
void test02()
{
	vector<int>v;
	for (int i = 0; i < 10000; i++)
	{
		v.push_back(i);
	}
	cout << "v的容量为：" << v.capacity() << endl;//容量是10000多
	cout << "v的大小为" << v.size() << endl;//大小是10000

	v.resize(3);
	cout << "v的容量为：" << v.capacity() << endl;//resize后capacity不会变
	cout << "v的大小为" << v.size() << endl;//大小在resize后变为了3
	
	//巧用swap收缩内存，匿名对象使用完内存就回收
	vector<int>(v).swap(v);//这样容量大小都会变为3
	cout << "v的容量为：" << v.capacity() << endl;//swap后capacity变为3
	cout << "v的大小为" << v.size() << endl;//swap后size也变为3
}

int main()
{
	test01();
	test02();
	system("pause");

	return 0;

}