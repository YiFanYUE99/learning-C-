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
			int random = rand() % 61 + 40;//Ҫ��������ķ�Χ[a,b]�ڵ����������Ҫʹ��rand()%(b-a+1)+a
			tarray[i].sarray[j].score = random;

		}
	}
}
void printinfo(struct teacher tarray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "��ʦ������ " << tarray[i].tname << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\tѧ�������� " << tarray[i].sarray[j].name 
				<<"���Է���"<<tarray[i].sarray[j].score << endl;

		}
	}
}
int main()
{
	//���������
	srand((unsigned int)time(NULL));//ʹ�����������ʱ�����
	//1.����������ʦ������
	struct teacher tarray[3];
	int len = sizeof(tarray) / sizeof(tarray[0]);
	allspace(tarray, len);//û����һ�оͻ����û�����֣�������Ϊ�ڴ��ַ�Ķ���
	printinfo(tarray, len);
	


	system("pause");

	return 0;

}