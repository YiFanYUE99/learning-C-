#include <iostream>
using namespace std;
#include<vector>
//vector���� Ԥ���ռ�

void test01()
{
	vector<int>v;
	//����reserveԤ���ռ���ⷴ�� �������ڴ�
	v.reserve(10000);


	int num = 0;//ͳ�ƿ��ٴ���
	int* p = NULL;

	for (int i = 0; i < 10000; i++)
	{
		v.push_back(i);

		if (p != &v[0])//���ָ�벻ָ��v���׵�ַ������ָ��v���׵�ַ
		{
			p = &v[0];
			num++;//ÿ���ڴ治���ÿ������ڴ��׵�ַ����䣬ʹnum++
		}
	}
	cout << "num= " << num << endl;//������24���ڴ�;reserve��ֻ�Ὺ��һ���ڴ�

}

int main()
{
	test01();

	system("pause");

	return 0;

}