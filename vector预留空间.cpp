#include <iostream>
using namespace std;
#include<vector>
//vector容器 预留空间

void test01()
{
	vector<int>v;
	//利用reserve预留空间避免反复 开辟新内存
	v.reserve(10000);


	int num = 0;//统计开辟次数
	int* p = NULL;

	for (int i = 0; i < 10000; i++)
	{
		v.push_back(i);

		if (p != &v[0])//如果指针不指向v的首地址，让它指向v的首地址
		{
			p = &v[0];
			num++;//每次内存不够用开辟新内存首地址都会变，使num++
		}
	}
	cout << "num= " << num << endl;//分配了24次内存;reserve后只会开辟一次内存

}

int main()
{
	test01();

	system("pause");

	return 0;

}