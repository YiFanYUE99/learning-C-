//8.5结构体做函数参数 ：
//函数传递方式：①值传递（实参会变）；②地址传递（实参不变）
#include <iostream>
using namespace std;
struct Student
{
	string name;
	int age;
	int score;
};
//建立打印函数
//1.值传递
void prints1(struct Student s1)
{
	s1.age = 0;//形参变了但是实参没变
	cout << "子函数1 年龄：" << s1.age << endl;
}
//2.地址传递 用->；可以改变实参
void prints2(struct Student *p)
{
	p->age = 200;//形参实参都变成了200
	cout << "子函数2 年龄：" << p->age << endl;
}
int main()
{
	//结构体做函数参数
	//创建结构体变量
	struct Student s1;
	s1.name = "张三";
	s1.age = 18;
	s1.score = 94;
	prints1(s1);
	prints2(&s1);


	cout << "年龄" << s1.age << endl;

	system("pause");

	return 0;

}