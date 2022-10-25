#include <iostream>
using namespace std;
#include<vector>
//对vector中的数据的存取操作


void test01()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}


	//1.利用[]的方式访问数组元素
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;

	//2.利用at 访问数组元素
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1.at(i) << " ";
	}
	cout << endl;

	//3.访问第一个元素front
	cout << "第一个元素为" << v1.front() << endl;

	//4.获取最后一个元素back
	cout << "最后一个元素为：" << v1.back() << endl;
}
int main()
{
	test01();
	system("pause");

	return 0;

}