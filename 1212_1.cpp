//4.3��ת���
//4.3.1break��䣺����ѡ��ṹ��ѭ���ṹ
//break��������ʹ��ʱ��
//�ٳ�����switch����У���������ֹcase������switch
//�ڳ�����ѭ������У�����������ѭ�����
//�۳�����Ƕ��ѭ���У��������ڲ��ѭ�����
//4.3.2continue���
//���ã���ѭ������У���������ѭ����������δִ�е���䣬����ִ����һ��ѭ����break���˳���continue������
//4.3.3goto��䣺��������ת���
#include <iostream>
using namespace std;
int main()
{
	//����switch����У���������ֹcase������switch
	//�����Ѷ�ѡ��

	cout << "ѡ�񸱱��Ѷ�" << "1.hard" << "2.median" << "3.easy" << endl;

	int select = 0;
	cin >> select;
	switch (select)
	{
	case 1:
		cout << "����" << endl;
		break;
	case 2:
		cout << "�е�" << endl;
		break;
	case 3:
		cout << "��" << endl;
		break;
	default:
		break;
	}

	//�ڳ�����ѭ������У�����������ѭ�����
	//��ӡʮ��������ӡ��5���˳�
	for (int i = 0; i < 10; i++)
	{
		if (i == 5)
		{
			break;
		}
		cout << i << endl;
	}
	//�۳�����Ƕ��ѭ���У��������ڲ��ѭ�����
	//���һ�������
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0 ;j < 10; j++)
		{
			if (j > i)
			{
				break;
			}
			cout << "*" ;
		}
		cout << endl;
	}

	//4.3.2continue
	for (int i = 0; i <= 100; i++)
	{
		if (i % 2 == 0)
		{
			continue;//iΪ2�ı�����ʱ��continue������ѭ����������һ��ѭ����break��0ѭ�����˳���
		}
		cout << i << endl;
	}

	//4.3.3goto:��ת����Ǵ������Ƽ�ʹ��
	cout << "1" << endl;
	goto FLAG;
	cout << "2" << endl;
	cout << "3" << endl;
	cout << "4" << endl;
	FLAG:
	cout << "5" << endl;
	
	system("pause");

	return 0;

}