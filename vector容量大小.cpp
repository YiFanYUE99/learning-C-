#include <iostream>
using namespace std;
#include<vector>
//vector容量和大小
//vector的容量capacity一定大于容器中元素的个数size
//resize重新指定容器大小

void printvector(vector<int>& v)
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

	if (v1.empty())//1为空返回true
	{
		cout << "v1为空" << endl;
	}
	else
	{
		cout << "v1不为空" << endl;
		cout << "v1的容量为" << v1.capacity() << endl;//2容量为13
		cout << "v1的大小" << v1.size() << endl;//3大小为10
	}

	//4重新指定大小
	v1.resize(15);//size变为15，多出来的位置默认用0填充
	printvector(v1);

	v1.resize(20, 100);//将size改为20，多出来的值指定用100填充
	printvector(v1);

	v1.resize(4);//重新指定的比原来短了，多出来的值直接删除
	printvector(v1);


}

int main()
{
	test01();
	system("pause");

	return 0;

}