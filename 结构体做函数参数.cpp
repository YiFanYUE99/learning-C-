//8.5�ṹ������������ ��
//�������ݷ�ʽ����ֵ���ݣ�ʵ�λ�䣩���ڵ�ַ���ݣ�ʵ�β��䣩
#include <iostream>
using namespace std;
struct Student
{
	string name;
	int age;
	int score;
};
//������ӡ����
//1.ֵ����
void prints1(struct Student s1)
{
	s1.age = 0;//�βα��˵���ʵ��û��
	cout << "�Ӻ���1 ���䣺" << s1.age << endl;
}
//2.��ַ���� ��->�����Ըı�ʵ��
void prints2(struct Student *p)
{
	p->age = 200;//�β�ʵ�ζ������200
	cout << "�Ӻ���2 ���䣺" << p->age << endl;
}
int main()
{
	//�ṹ������������
	//�����ṹ�����
	struct Student s1;
	s1.name = "����";
	s1.age = 18;
	s1.score = 94;
	prints1(s1);
	prints2(&s1);


	cout << "����" << s1.age << endl;

	system("pause");

	return 0;

}