//4.�������̽ṹ
//4.2.2do whileѭ������while�Ĳ�ͬ����while���ж��Ƿ����ѭ��������ִ�У�dowhile��ִ�����жϣ�
#include <iostream>
using namespace std;
int main() 
{
	int num = 0;//0��C++����false
	do
	{
		cout << num << endl;
		num++;
	} while (num < 10);
	//��ϰ��ˮ�ɻ�����һ����λ����ÿ��λ���ϵ����ֵ�3����֮�͵���������
	int num1 = 100;
	do
	{
		int a = 0;//����Ҫ��Ҫ�ȳ�ʼ���ٸ�ֵ
		int b = 0;//����Ҫ��Ҫ�ȳ�ʼ���ٸ�ֵ
		int c = 0;//����Ҫ��Ҫ�ȳ�ʼ���ٸ�ֵ

		a = num1 /100;
		b = num1 / 10 % 10;
		c = num1 % 10;

		if(a*a*a+b*b*b+c*c*c==num1)
		{
			cout << num1 << endl;
		}
		num1++;
	} while (num1 < 1000);
	
	system("pause");

	return 0;
}

