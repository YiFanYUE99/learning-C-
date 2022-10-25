#include <iostream>
using namespace std;
//8.2结构体数组
//8.2.1.定义结构体
struct Student//定义数据类型struct不能省略
{
	string name;
	int age;
	int score;
};
//8.3结构体指针


//通过学生类型创建具体学生信息
int main()
{
	//8.2.2.创建结构体数组
	struct Student stuArray[3] =
	{
		{"张三",18,100},
		{"李四",28,99},
		{"王五",38,66}
	};//别忘了分号
	//8.2.3.更改结构体数组中的元素；stuArray编号从0开始，2对应的其实是第三个
	stuArray[2].name = "赵六";
	stuArray[2].age = 80;
	stuArray[2].score = 60;
	//8.2.4.遍历结构体数组.name
	for (int i = 0; i < 3; i++)
	{
		//太长的时候可以分行但输出结果可以分行
		cout << "姓名： " << stuArray[i].name
			 << "年龄： " <<stuArray[i].age
			 << "分数： " <<stuArray[i].score << endl;
	}
	//8.3.1创建学生结构体变量
	struct Student s = { "张三",18,100 };
	//8.3.2通过指针指向结构体变量
	Student * p = &s;
	//8.3.3通过指针访问结构体变量中的数据 !!! p->name一定要用->
	cout << "姓名：" << p->name << endl;
	system("pause");

	return 0;

}