#include <iostream>
using namespace std;
//8.6�ṹ����constʹ�ó���
struct student
{
	string name;
	int age;
	int score;
};
//ֵ���ݴ�ӡ��ռ�ڴ��
void prints(student s)
{
	cout << "�Ӻ���1 ���䣺" << s.age << endl;
}
//��ַ����ռ�ڴ�С������ı�ʵ�Σ�Ϊ�˷�ֹ�ı�ʵ�Σ���ָ��ǰ����const������ں����иı�ʵ�λᱨ��
void prints2(const student * s)
{
	cout << "�Ӻ���1 ���䣺" <<s->age << endl;
}
int main()
{
	struct student s = { "san",15,70 };
	prints(s);
	prints2(&s);
	system("pause");

	return 0;

}