#include <iostream>
using namespace std;
#include<string>
#include<vector>
#include<deque>
#include<algorithm>
#include<ctime>

//10����ί��5��ѡ�ִ�֣�ȥ����߷ֺ���ͷ֣�ȡƽ����
// 1.5��ѡ�ַŵ�vector
// 2.����vectorȡ��һ��ѡ�֣�����ѭ�����
// 3.sort����ȥ����ߡ��ͷ�
// 4.deque��������һ�飬�ۼ��ܷ�
// 5.��ȡ����

class Person
{
public:
	Person(string name, int score)
	{
		this->m_name = name;
		this->m_score = score;
	}

	string m_name;
	int m_score;//����
};
//����ѡ��
void createperson(vector<Person>&v)
{
	string nameseed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "ѡ��";
		name += nameseed[i];

		int score = 0;

		Person p(name, score);


		//��������person������뵽������
		v.push_back(p);

	}
}
//���
void setscore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		//����ί�ķ������뵽deque������
		deque<int>d;
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60;//�����Ϊ0-40
			/*cin >> score;*/
			d.push_back(score);

		}
		cout << "ѡ��" << it->m_name << "��֣�" << endl;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			cout << *dit << " ";
		}
		cout << endl;

		//����
		sort(d.begin(), d.end());

		//ȥ����ߺ���ͷ�
		d.pop_back();
		d.pop_front();

		//��ȡ����
		int sum = 0;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			sum += *dit;//�ۼ�ÿ����ί�ķ���
		}
		int ave = sum / d.size();

		//�����ָ�ֵ��ѡ��
		it->m_score = ave;
	}
}

//��ӡ����
void showscore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "������" << it->m_name << "ƽ����" << it->m_score << endl;
	}
}
int main()
{
	//���������
	srand((unsigned int)time(NULL));



	//1.����5��ѡ��
	vector<Person>v;
	createperson(v);

	//����
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << (*it).m_name << (*it).m_score << endl;
	}

	//2.��5��ѡ�ִ��
	setscore(v);

	//3.��ʾ���÷�
	showscore(v);

	system("pause");

	return 0;

}