#include <iostream>
using namespace std;
//8.6结构体中const使用场景
struct student
{
	string name;
	int age;
	int score;
};
//值传递打印：占内存大
void prints(student s)
{
	cout << "子函数1 年龄：" << s.age << endl;
}
//地址传递占内存小，但会改变实参，为了防止改变实参，在指针前加上const；如果在函数中改变实参会报错
void prints2(const student * s)
{
	cout << "子函数1 年龄：" <<s->age << endl;
}
int main()
{
	struct student s = { "san",15,70 };
	prints(s);
	prints2(&s);
	system("pause");

	return 0;

}