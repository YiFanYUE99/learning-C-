#include <iostream>
using namespace std;
//8.4Ƕ�׽ṹ�壺һ���ṹ���л���һ���ṹ��
//�ȶ���ѧ���ṹ��
struct student
{
	string name;//����
	int age;//����
	int score;//����
};

//�ٶ�����ʦ�ṹ��
struct teacher
{
	int id;
	string name;
	int age;
	struct student stu;//���帨����ѧ��
};

int main()
{
	//һ������ʦ��ѧ��
	teacher t;//������ʦ
	t.id = 1001;
	t.name = "wang";
	t.age = 50;
	t.stu.name = "smallwang";//�������ʦ��ѧ��
	t.stu.age = 20;
	t.stu.score = 90;
	cout << "��ʦ�������� " << t.name << "��ʦ��ţ� " << t.id << "��ʦ��ѧ����Ϣ" << t.stu.name << endl;
	system("pause");

	return 0;

}