#include <iostream>
using namespace std;
//构造函数的分类及调用
//1.分类：参数分：有参构造 无参构造
//        类型分：普通构造 拷贝构造
class person
{
public:
	
	person()//默认无参构造
	{
		cout << "person的构造函数调用" << endl;
	}
	person(int a)//有参构造
	{
		age = a;
		cout << "person的构造函数调用" << endl;
	}
	//拷贝构造函数(拷贝一个人)
	person(const person &p)//拷贝在函数前要加上const 函数后要加&引用
	{
		//将 传入 的人身上的所有属性拷贝到 此人 身上
		age = p.age;
		cout << "person的拷贝构造函数调用" << endl;
	}
	~person()
	{
		cout << "person的析构函数调用" << endl;
	}
	int age;//一定要给age 定义类型不然报错
};
//构造函数的调用
void test1()
{
	//1.括号法
	person p1;//默认构造函数调用,不要加括号；否则编译器会认为是函数的声明
	person p2(10);//有参构造函数调用
	person p3(p2);//拷贝构造函数

	cout << "p2的年龄为" << p2.age << endl;
	cout << "p3的年龄为" << p3.age << endl;

	//2.显示法
	person p4;//无参
	person p5 = person(10);//有参；person（10）是匿名构造函数，当前执行完后就被释放
	person p6 = person(p5);//拷贝
	//3.隐式转换法
	person p7 = 10;//相当于调用有参构造，写了person p4=person(10)
	person p8 = p4;//拷贝构造
}
int main()
{
	test1();
	
	system("pause");

	return 0;

}