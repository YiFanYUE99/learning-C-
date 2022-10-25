#include <iostream>
using namespace std;
#include<ctime>
struct student
{
	string name;
	int score;
};
struct teacher
{
	string tname;
	struct student sarray[5];
};
void allspace(struct teacher tarray[], int len)
{
	string nameseed = "ABCDE";

	for (int i = 0; i < len; i++)
	{
		tarray[i].tname = "Teacher";
		tarray[i].tname += nameseed[i];
		for (int j = 0; j < 5; j++)
		{
			tarray[i].sarray[j].name = "student";
			tarray[i].sarray[j].name += nameseed[j];
			int random = rand() % 61 + 40;//要输出给定的范围[a,b]内的随机数，需要使用rand()%(b-a+1)+a
			tarray[i].sarray[j].score = random;

		}
	}
}
void printinfo(struct teacher tarray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "老师姓名： " << tarray[i].tname << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\t学生姓名： " << tarray[i].sarray[j].name 
				<<"考试分数"<<tarray[i].sarray[j].score << endl;

		}
	}
}
int main()
{
	//随机数种子
	srand((unsigned int)time(NULL));//使得随机数根据时间随机
	//1.创建三名老师的数据
	struct teacher tarray[3];
	int len = sizeof(tarray) / sizeof(tarray[0]);
	allspace(tarray, len);//没有这一行就会输出没有名字，分数处为内存地址的东西
	printinfo(tarray, len);
	


	system("pause");

	return 0;

}