#include <iostream>
using namespace std;
#include<vector>
//对vector进行插入和删除
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
	//1、尾插
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);

	printvector(v1);

	//2、尾插
	v1.pop_back();
	printvector(v1);

	//3、插入 第一个参数是迭代器
	v1.insert(v1.begin(), 100);//在第一个位置插入100
	printvector(v1);

	v1.insert(v1.begin(), 2, 1000);//在第一个位置插入2个1000
	printvector(v1);

	//4、删除 参数也是迭代器
	v1.erase(v1.begin());//删除了第一个元素
	printvector(v1);

	//v1.erase(v1.begin(), v1.end());//从头到尾都删掉

	//5、清空
	v1.clear();//全部删除，同上一行的功能
	printvector(v1);//删完了
}
int main()
{
	test01();

	system("pause");

	return 0;

}