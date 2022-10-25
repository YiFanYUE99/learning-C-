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
	myarray<int>arr1(5);//�вι��죬array1����Ϊ5

	//myarray<int>arr2(arr1);//�������캯��

	myarray<int>arr3(100);

	arr3 = arr1;
	
	for (int i = 0; i < 5; i++)
	{
		arr1.push_back(i);//β�巨��������
	}
	cout << "arr1�Ĵ�ӡ" << endl;

	printintarray(arr1);
	cout << "arr1������Ϊ��" << arr1.getcapacity() << endl;
	cout << "arr1�Ĵ�СΪ��" << arr1.getsize() << endl;

	//βɾ��
	myarray<int>arr2(arr1);//�������캯��
	cout << "arr2�Ĵ�ӡ" << endl;

	printintarray(arr2);
	//βɾ
	arr2.pop_back();
	cout << "arr2��������" << arr2.getcapacity() << endl;//��������5
	cout << "arr2�Ĵ�С��" << arr2.getsize() << endl;//ɾ��һ��������С��Ϊ4
}

//�Զ��������������
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
		cout << "������" << arr[i].m_name << "����" << arr[i].m_age << endl;
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

	//�����ݲ��뵽������
	arr.push_back(p1);
	arr.push_back(p2);
	arr.push_back(p3);
	arr.push_back(p4);
	arr.push_back(p5);

	//��ӡ����
	printpersonarray(arr);

	//�������
	cout << "arr����Ϊ��" << arr.getcapacity() << endl;
	//�����С
	cout << "arr��СΪ��" << arr.getsize() << endl;

}
int main()
{
	test01();
	test02();

	system("pause");

	return 0;

}