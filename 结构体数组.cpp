#include <iostream>
using namespace std;
//8.2�ṹ������
//8.2.1.����ṹ��
struct Student//������������struct����ʡ��
{
	string name;
	int age;
	int score;
};
//8.3�ṹ��ָ��


//ͨ��ѧ�����ʹ�������ѧ����Ϣ
int main()
{
	//8.2.2.�����ṹ������
	struct Student stuArray[3] =
	{
		{"����",18,100},
		{"����",28,99},
		{"����",38,66}
	};//�����˷ֺ�
	//8.2.3.���Ľṹ�������е�Ԫ�أ�stuArray��Ŵ�0��ʼ��2��Ӧ����ʵ�ǵ�����
	stuArray[2].name = "����";
	stuArray[2].age = 80;
	stuArray[2].score = 60;
	//8.2.4.�����ṹ������.name
	for (int i = 0; i < 3; i++)
	{
		//̫����ʱ����Է��е����������Է���
		cout << "������ " << stuArray[i].name
			 << "���䣺 " <<stuArray[i].age
			 << "������ " <<stuArray[i].score << endl;
	}
	//8.3.1����ѧ���ṹ�����
	struct Student s = { "����",18,100 };
	//8.3.2ͨ��ָ��ָ��ṹ�����
	Student * p = &s;
	//8.3.3ͨ��ָ����ʽṹ������е����� !!! p->nameһ��Ҫ��->
	cout << "������" << p->name << endl;
	system("pause");

	return 0;

}