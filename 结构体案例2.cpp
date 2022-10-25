//8.8.2结构体案例2
//设计一个英雄结构体，包括成员姓名、年龄、性别；创建结构体数组，数组中存放5名英雄
//通过冒泡排序算法，将数组中英雄按照年龄进行升序排列，最终打印排序后结果
#include <iostream>
using namespace std;
//1定义英雄结构体
struct hero
{
	//姓名
	string name;
	//年龄
	int age;
	//性别
	string gender;
};
//3.冒泡排序，实现年龄升序
void bubblesort(struct hero harray[], int len)//struct后面不要漏了hero
{
	for (int i = 0; i < len - 1; i++)
		for (int j = 0; j < len - i - 1; j++)
		{
			if (harray[j].age > harray[j + 1].age)
			{
				struct hero temp = harray[j];
				harray[j] = harray[j + 1];
				harray[j + 1] = temp;

			}
		}
}
//打印排序后数组中的信息
void printh(struct hero harray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "name: " << harray[i].name
			<< "\tage: " << harray[i].age
			<< "\tgender: " << harray[i].gender << endl;//\t的斜杠不要写反
	}
}


int main()
{
	//2创建数组存放5名英雄
	struct hero harray[5] =
	{
		{"liubei",23,"male"},
		{"guanyu",22,"male"},
		{"zhangfei",21,"male"},
		{"zhaoyun",21,"male"},
		{"diaochan",19,"female"}
	};
	int len = sizeof(harray) / sizeof(harray[0]);
	for (int i = 0; i < len; i++)
	{
		cout << "name: " << harray[i].name
			<< "\tage: " << harray[i].age
			<< "\tgender: " << harray[i].gender << endl;//\t的斜杠不要写反
	};
	bubblesort(harray,len);//这里不要写成hero array；也不要写int len；
	printh(harray, len);//确实排序输出了


	

	system("pause");

	return 0;

}