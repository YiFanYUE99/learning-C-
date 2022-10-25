#include <iostream>
using namespace std;
#include<string>
#include<vector>
#include<deque>
#include<algorithm>
#include<ctime>

//10个评委给5个选手打分，去掉最高分和最低分，取平均分
// 1.5个选手放到vector
// 2.遍历vector取出一个选手，佛如循环打分
// 3.sort排序，去除最高、低分
// 4.deque容器遍历一遍，累加总分
// 5.获取均分

class Person
{
public:
	Person(string name, int score)
	{
		this->m_name = name;
		this->m_score = score;
	}

	string m_name;
	int m_score;//均分
};
//建立选手
void createperson(vector<Person>&v)
{
	string nameseed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "选手";
		name += nameseed[i];

		int score = 0;

		Person p(name, score);


		//将创建的person对象放入到容器中
		v.push_back(p);

	}
}
//打分
void setscore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		//将评委的分数放入到deque容器中
		deque<int>d;
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60;//随机数为0-40
			/*cin >> score;*/
			d.push_back(score);

		}
		cout << "选手" << it->m_name << "打分：" << endl;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			cout << *dit << " ";
		}
		cout << endl;

		//排序
		sort(d.begin(), d.end());

		//去除最高和最低分
		d.pop_back();
		d.pop_front();

		//获取均分
		int sum = 0;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			sum += *dit;//累加每个评委的分数
		}
		int ave = sum / d.size();

		//将均分赋值给选手
		it->m_score = ave;
	}
}

//打印分数
void showscore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "姓名：" << it->m_name << "平均分" << it->m_score << endl;
	}
}
int main()
{
	//随机数种子
	srand((unsigned int)time(NULL));



	//1.创建5名选手
	vector<Person>v;
	createperson(v);

	//测试
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << (*it).m_name << (*it).m_score << endl;
	}

	//2.给5名选手打分
	setscore(v);

	//3.显示最后得分
	showscore(v);

	system("pause");

	return 0;

}