#include <iostream>
using namespace std;
#include<vector>
//vector的赋值
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
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printvector(v1);

	//1.赋值
	vector<int>v2;
	v2 = v1;
	printvector(v2);


	//2.赋值
	vector<int>v3;
	v3.assign(v1.begin(), v1.end());//assign前开后闭，end指向最后一个元素的后一位
	printvector(v3);

    //3n个elem赋值
	vector<int>v4;
	v4.assign(10, 100);//赋值10个100
	printvector(v4);

}

int main()
{
	test01();
	system("pause");

	return 0;

}