#include <iostream>
using namespace std;
//�������ɳ���Ա�����ͷţ�������Ա���ͷţ��������ʱ�ɲ���ϵͳ����
//C++����Ҫ����new�ڶ��������ڴ棬�ֶ��ͷ��ڴ���delete
//1.new�Ļ����﷨
int* func()
{
	//����new�����ݿ��ٵ�����
	//ָ�� �ı����Ǿֲ�����������ջ�ϣ�ָ�뱣�浽���ݷ��ڶ���

	//�ڶ���������������
	//new���ص��Ǹ��������͵�ָ��
	int* p = new int(10);
	return p;

}
void test1()
{
	int* p = func();
	cout << *p << endl;
	//���ùؼ���delete�ͷ��ڴ�������
	delete p;
}
//2.�ڶ�����new��������
void test2()
{
	//�ڶ�������10�������ݵ�����
	int* arr = new int[10];//10����������10��Ԫ�� ������
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;//��10��Ԫ�ظ�ֵ100-109
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	//�ͷŶ�������;�ͷ�����Ҫ��[]�ſ���
	delete[] arr;
}

int main()
{
	test1();
	test2();
	int* p = func();
	cout << *p << endl;
	system("pause");

	return 0;

}