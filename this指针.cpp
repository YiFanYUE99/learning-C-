#include <iostream>
using namespace std;
//this指针
class Person
{
public:
	Person(int age)
	{
		this->age = age;//加this，否则下方int age 会乱码
	}

	Person& PersonAddAge(Person& p)//要返回本体使用Person&代替void作为返回
	{
		this->age += p.age;
		//this是指向p2的指针，而*this是指向p2这个对象本体
		return *this;//返回对象本身用this
	}

	int age;//直接这样会输出乱码，故要在上方加上this
};
//1解决名称冲突
void test01()
{
	Person p1(18);
	cout << "p1的年龄为： " << p1.age << endl;
	Person p2(10);
	
	//2返回对象本身用this
	p2.PersonAddAge(p1);
	
	cout << "p2的年龄为： " << p2.age << endl;

	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
	//要一直追加年龄需要return*this
	cout << "p2的年龄为： " << p2.age << endl;

}
//2返回对象本身用this

int main()
{
	test01();
	system("pause");

	return 0;

}