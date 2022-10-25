#include <iostream>
using namespace std;
#include"myarray.hpp"
#include<string>
void printintarray(myarray<int>&arr)
{
	for (int i = 0; i < arr.getsize(); i++)
	{
		cout << arr[i] << endl;
	}
}

void test01()
{
	myarray<int>arr1(5);//有参构造，array1容量为5

	//myarray<int>arr2(arr1);//拷贝构造函数

	myarray<int>arr3(100);

	arr3 = arr1;
	
	for (int i = 0; i < 5; i++)
	{
		arr1.push_back(i);//尾插法输入数据
	}
	cout << "arr1的打印" << endl;

	printintarray(arr1);
	cout << "arr1的容量为：" << arr1.getcapacity() << endl;
	cout << "arr1的大小为：" << arr1.getsize() << endl;

	//尾删法
	myarray<int>arr2(arr1);//拷贝构造函数
	cout << "arr2的打印" << endl;

	printintarray(arr2);
	//尾删
	arr2.pop_back();
	cout << "arr2的容量：" << arr2.getcapacity() << endl;//容量还是5
	cout << "arr2的大小：" << arr2.getsize() << endl;//删掉一个数，大小变为4
}

//自定义测试数据类型
class Person
{
public:
	Person() {};

	Person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}

	string m_name;
	int m_age;
};
void printpersonarray(myarray<Person>& arr)
{
	for (int i = 0; i < arr.getsize(); i++)
	{
		cout << "姓名：" << arr[i].m_name << "年龄" << arr[i].m_age << endl;
	}
}
void test02()
{
	myarray<Person>arr(10);

	Person p1("Tom", 10);
	Person p2("Mary", 10);
	Person p3("Ann", 10);
	Person p4("Kate", 10);
	Person p5("Jerry", 10);

	//将数据插入到数组中
	arr.push_back(p1);
	arr.push_back(p2);
	arr.push_back(p3);
	arr.push_back(p4);
	arr.push_back(p5);

	//打印数组
	printpersonarray(arr);

	//输出容量
	cout << "arr容量为：" << arr.getcapacity() << endl;
	//输出大小
	cout << "arr大小为：" << arr.getsize() << endl;

}
int main()
{
	test01();
	test02();

	system("pause");

	return 0;

}