#include <iostream>
using namespace std;
#include<queue>
#include<string>
//queue队列
//queue先进先出，不同于stack坐地铁
//queue有两个口；队头进，队尾出，因此也不能遍历

class Person
{
public:
	Person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}
	string m_name;
	int m_age;
};

void test01()
{
	//创建队列
	queue<Person>q;

	//准备数据
	Person p1("唐僧", 30);
	Person p2("孙悟空", 30);
	Person p3("猪八戒", 30);
	Person p4("沙和尚", 30);

	//入队
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);

	//只要队列不为空，查看队头、队尾，出队
	while (!q.empty())
	{
		//查看队头元素
		cout << "队头元素-姓名" << q.front().m_name << "年龄" << q.front().m_age << endl;

		//查看队尾元素
		cout << "队尾元素-姓名" << q.back().m_name << "年龄" << q.back().m_age << endl;

		q.pop();//出队
        
		cout << endl;
	}



}
int main()
{
	test01();

	system("pause");

	return 0;

}