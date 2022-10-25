#include <iostream>
using namespace std;
//题目：1个老师带5个学生，一共有3个老师
//定义学生的结构体
struct student
{
	string name;
	int score;
};
//定义老师的结构体
struct teacher
{
	string tname;
	struct student sarray[5];
};
//给老师和学生赋值的函数
void allocatespace(struct teacher tarray[],int len)
{
	for (int i=0)
}
int main()
{
	//创建3名老师的数组
	struct teacher tarray[3];

	system("pause");

	return 0;

}