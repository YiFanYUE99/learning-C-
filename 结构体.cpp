//8�ṹ�壺�û��Զ�����������ͣ������û��洢��ͬ����������
//8.1�ṹ�嶨�弰ʹ��
#include <iostream>
using namespace std;
//�Զ����������ͣ�ѧ�� ����������������ͷ�����
struct Student//������������struct����ʡ��
{
	string name;
	int age;
	int score;
};
//ͨ��ѧ�����ʹ�������ѧ����Ϣ


int main()
{
	//�����Զ����������ʹ������ݵ����ַ���
	//��
	struct Student s1;//�������ݣ�����struct����ʡ��
	s1.name = "����";
	s1.age = 18;
	s1.score = 94;
	cout << "������ " << s1.name << " ���䣺 " << s1.age << " ������" << s1.score << endl;;
	//��
	struct Student s2 = { "����",19,90 };
	cout << "������ " << s2.name << " ���䣺 " << s2.age << " ������" << s2.score << endl;;
	//���ڿ�ͷ�ĺ������������д��s3������ʡȥ��һ�У�����һ��


	system("pause");

	return 0;

}
