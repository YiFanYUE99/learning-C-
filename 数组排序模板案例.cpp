#include <iostream>
using namespace std;
//ʵ��ͨ�ö������������ĺ���
//�Ӵ�С
//�㷨 ѡ������
//���� char����,int����

//��������ģ��
template <class T>
void myswap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}
//�����㷨
template<class T>
void mysort(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		int max = i;
		for (int j = i + 1; j < len; j++)
		{
			if (arr[max] < arr[j])
			{
				max = j;//�������ֵ

			}
		}
		if (max != i)
		{
			//����max��iԪ��
			myswap(arr[max], arr[i]);
		}
	}
}
//��ӡ�����ģ��
template <class T>
void printA(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
void test01()
{
	//����char����
	char charArr[] = "badcfe";
	int num = sizeof(charArr) / sizeof(char);//�����ַ�������
	mysort(charArr, num);
	printA(charArr, num);
}
void test02()
{
	int intArr[] = {999,99,0,1};
	int num = sizeof(intArr) / sizeof(int);
	mysort(intArr, num);
	printA(intArr, num);
	
}



int main()
{
	test01();
	test02();
	system("pause");

	return 0;

}