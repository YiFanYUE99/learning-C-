//8.8.2�ṹ�尸��2
//���һ��Ӣ�۽ṹ�壬������Ա���������䡢�Ա𣻴����ṹ�����飬�����д��5��Ӣ��
//ͨ��ð�������㷨����������Ӣ�۰�����������������У����մ�ӡ�������
#include <iostream>
using namespace std;
//1����Ӣ�۽ṹ��
struct hero
{
	//����
	string name;
	//����
	int age;
	//�Ա�
	string gender;
};
//3.ð������ʵ����������
void bubblesort(struct hero harray[], int len)//struct���治Ҫ©��hero
{
	for (int i = 0; i < len - 1; i++)
		for (int j = 0; j < len - i - 1; j++)
		{
			if (harray[j].age > harray[j + 1].age)
			{
				struct hero temp = harray[j];
				harray[j] = harray[j + 1];
				harray[j + 1] = temp;

			}
		}
}
//��ӡ����������е���Ϣ
void printh(struct hero harray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "name: " << harray[i].name
			<< "\tage: " << harray[i].age
			<< "\tgender: " << harray[i].gender << endl;//\t��б�ܲ�Ҫд��
	}
}


int main()
{
	//2����������5��Ӣ��
	struct hero harray[5] =
	{
		{"liubei",23,"male"},
		{"guanyu",22,"male"},
		{"zhangfei",21,"male"},
		{"zhaoyun",21,"male"},
		{"diaochan",19,"female"}
	};
	int len = sizeof(harray) / sizeof(harray[0]);
	for (int i = 0; i < len; i++)
	{
		cout << "name: " << harray[i].name
			<< "\tage: " << harray[i].age
			<< "\tgender: " << harray[i].gender << endl;//\t��б�ܲ�Ҫд��
	};
	bubblesort(harray,len);//���ﲻҪд��hero array��Ҳ��Ҫдint len��
	printh(harray, len);//ȷʵ���������


	

	system("pause");

	return 0;

}