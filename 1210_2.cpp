//4.2ѭ���ṹ
//4.2.1 whileѭ��
#include <iostream>
using namespace std;
#include <ctime>//ʹ��time��Ҫ�Ӵ�ͷ�ļ�
int main()
{
	int num = 0;
	while (num < 10)//������дѭ��������������ѭ���ĳ���
	{
		cout << num << endl;
		num++;
	}
	//4.2.1��ϰ������
	// �����������ӣ���ϵͳʱ���������������ֹÿ���������һ��
	srand((unsigned int)time(NULL));//�����������ɵ���α�����
	//���������
	int num1 = rand() % 10 + 1;//rand()%10����0-9֮��������
	//���������
	int wan = 0;
	while (1)
	{
		cin >> wan;
		if (wan > num1)
		{
			cout << "�´���" << endl;
		}
		else if (wan < num1)
		{
			cout << "��С��" << endl;
		}
		else
		{
			cout << "�¶���" << endl;
			break;//��������break�˳���ǰѭ��
		}
	}


	

	
	
	system("pause");

	return 0;
}