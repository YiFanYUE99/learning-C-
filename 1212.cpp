//4.2Ƕ��ѭ��
//��ѭ����Ƕ��һ��ѭ��
#include <iostream>
using namespace std;
int main()
{
	//�����ͼ10*10
	//���ѭ��һ�Σ��ڲ�ѭ��һ��
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << "* ";//û��endl������
		}
		cout << endl;//endlʵ���ǻ��е���˼
	}
	//�˷��ھ���
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j <=i ; j++)
		{
			cout << i << "*" << j << "=" << i * j<<" ";
		}
		cout << endl;
	}



	system("pause");

	return 0;

}