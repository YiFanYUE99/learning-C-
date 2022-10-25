#include <iostream>
using namespace std;
//成员属性设置为私有：①可以自己控制读写权限②可以自己检测数据的有效性
class person
{
public:
	//设置姓名:使得姓名可读可写
	void setname(string name)
	{
		m_name = name;
	}
	//获取姓名
	string getname()
	{
		return m_name;
	}
	//获取年龄:只读不写
	int getage()
	{
		//初始化年龄为0岁
		return m_age;
	}
	//使得年龄可以设置
	void setage(int age)
	{
		if (age < 0 || age>150)
		{
			cout << "你这个老妖精" << endl;
			return;//设置错误直接返回
		}
		m_age = age;
	}

	void setlover(string lover)
	{
		m_lover = lover;
	}
private:
	//姓名 可读可写
	string m_name;

	//年龄 只读
	int m_age;

	//情人 只写
	string m_lover;
};
int main()
{
	person p;
	//读写姓名
	p.setname("张三");
	p.setage(1);
	cout << p.getname() <<"的年龄为"<<p.getage() << endl;
	p.setlover("李四");//情人是只写不读的不能访问
	

	system("pause");

	return 0;

}