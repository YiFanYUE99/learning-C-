//8结构体：用户自定义的数据类型，允许用户存储不同的数据类型
//8.1结构体定义及使用
#include <iostream>
using namespace std;
//自定义数据类型：学生 包括（姓名、年龄和分数）
struct Student//定义数据类型struct不能省略
{
	string name;
	int age;
	int score;
};
//通过学生类型创建具体学生信息


int main()
{
	//根据自定义数据类型创建数据的三种方法
	//①
	struct Student s1;//创建数据，这里struct可以省略
	s1.name = "张三";
	s1.age = 18;
	s1.score = 94;
	cout << "姓名： " << s1.name << " 年龄： " << s1.age << " 分数：" << s1.score << endl;;
	//②
	struct Student s2 = { "李四",19,90 };
	cout << "姓名： " << s2.name << " 年龄： " << s2.age << " 分数：" << s2.score << endl;;
	//③在开头的函数大括号最后写上s3，①中省去第一行，其他一样


	system("pause");

	return 0;

}
