#include <iostream>
using namespace std;
//��Ŀ��1����ʦ��5��ѧ����һ����3����ʦ
//����ѧ���Ľṹ��
struct student
{
	string name;
	int score;
};
//������ʦ�Ľṹ��
struct teacher
{
	string tname;
	struct student sarray[5];
};
//����ʦ��ѧ����ֵ�ĺ���
void allocatespace(struct teacher tarray[],int len)
{
	for (int i=0)
}
int main()
{
	//����3����ʦ������
	struct teacher tarray[3];

	system("pause");

	return 0;

}