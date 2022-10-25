#include <iostream>
using namespace std;
#include<vector>
//vector像数组，单端数组
//数组是静态空间，无法扩展空间，vector可以动态扩展
//动态扩展：并不是在原空间之后持续接新空间，而是找更大的内存空间，而是找更大的内存空间，然后将元数据拷贝新空间，释放原空间
//.rend()指向第一个元素的前一个位置
//.end()指向最后一个元素的最后一个

void printvector(vector<int>&v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	vector<int>v1;//1默认构造 无参构造

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	printvector(v1);

	//2通过区间的方式构造
	vector<int>v2(v1.begin(), v1.end());
	printvector(v2);

	//3 n个elem方式构造
	vector<int>v3(10, 100);//10个100组成的vector；第一个是个数，第二个才是赋值
	printvector(v3);

	//4拷贝构造
	vector<int>v4(v3);
	printvector(v4);


}


int main()
{
	test01();

	system("pause");

	return 0;

}