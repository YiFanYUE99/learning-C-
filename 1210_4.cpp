//4.�������̽ṹ
// 4.2.3forѭ�����(��ʼ���ʽ���������ʽ��ĩβѭ����){ѭ�����}
//
//
//
#include <iostream>
using namespace std;
int main()
{
	//forѭ���ֺŷָ�
	for (int i = 0; i < 10; i++)//Ҳ���������ھ�д�����ֺţ������������ֿ�д
	{
		cout << i << endl;
	}
	//��������ϰ
	for (int i = 1; i < 101; i++)
	{
		if (i % 7 == 0)
		{
			cout << "������" << i <<endl;
		}
		else if (i % 10 == 7)
		{
			cout << "������" << i << endl;
		}
		else if (i / 10 % 10 == 7)
		{
			cout << "������" << i << endl;
		}
		else
		{
			cout << i << endl;
		}
	}

	system("pause");

	return 0;
}