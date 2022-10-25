#include <iostream>
using namespace std;
//8.4嵌套结构体：一个结构体中还有一个结构体
//先定义学生结构体
struct student
{
	string name;//姓名
	int age;//年龄
	int score;//分数
};

//再定义老师结构体
struct teacher
{
	int id;
	string name;
	int age;
	struct student stu;//定义辅导的学生
};

int main()
{
	//一起定义老师和学生
	teacher t;//定义老师
	t.id = 1001;
	t.name = "wang";
	t.age = 50;
	t.stu.name = "smallwang";//定义该老师的学生
	t.stu.age = 20;
	t.stu.score = 90;
	cout << "老师的姓名： " << t.name << "老师编号： " << t.id << "老师的学生信息" << t.stu.name << endl;
	system("pause");

	return 0;

}