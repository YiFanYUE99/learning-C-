#include <iostream>
using namespace std;
//7.7ָ��ͺ���
//�ȴ���һ�������������ı����ָ��ָ���ֵ����ָ��ָ��ķ���
void swap02(int *p1,int *p2) 
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
//��ϰ����������ð������
void bubble(int* arr, int len)//ֻ����ָ��ķ�ʽ��������
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;

			}
		}
	}
}
void printArray(int * arr, int len)//ֻ����ָ��ķ�ʽ��������
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
}
int main()
{
	//7.6ָ�������
	//����ָ����������е�Ԫ��

	int arr[10] = { 9,8,5,3,5,6,7,4,2,1 };
	cout << "��һ��Ԫ��Ϊ��" << arr[0] << endl;
	int* p = arr;//ָ��pָ��arr�����׵�ַ
	cout << "����ָ����ʵ�һ��Ԫ�أ� " << *p << endl;
	//����ѭ������ָ��ָ���ÿ��Ԫ��
	for (int i = 0; i < 10; i++)
	{
		cout << "����ָ����ʵ�" << i + 1 << "��Ԫ��" << *p << endl;
		p++;
	}
	//7.7ָ��ͺ���
	// ֵ���ݸı��ββ��ı�ʵ��
	//��ַ����;��ַ���ݿ�������ʵ�Σ���ʵ�εĵ�ַû�иı�
	int a = 10;
	int b = 20;
	cout << "&a= " << &a << endl;
	cout << "&b= " << &b << endl;
	swap02(&a, &b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "&a= " << &a << endl;//a��b���ڴ��ַû�б�
	cout << "&b= " << &b << endl;

	//��ϰ������������������У�ð�ݣ�
	int arr1[10] = { 10,9,7,5,8,4,3,6,1,2 };
	bubble(arr1, 10);//ֻ����ָ��ķ�ʽ�������鵽��������ֱ�������������Ϳ���
	printArray(arr1, 10);

	




	system("pause");

	return 0;

}