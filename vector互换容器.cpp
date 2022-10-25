#include <iostream>
using namespace std;
#include<vector>
//ʵ������������Ԫ�ؽ��л���swap

void printvector(vector<int>&v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

}


//1.����ʹ��
void test01()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printvector(v1);

	vector<int>v2;
	for (int i = 10; i > 0; i--)
	{
		v2.push_back(i);
	}
	printvector(v2);
	//����.swap()
	v1.swap(v2);
	printvector(v2);//�����ɹ�
}





//2.ʵ����;
//����swap�������ڴ�ռ�
void test02()
{
	vector<int>v;
	for (int i = 0; i < 10000; i++)
	{
		v.push_back(i);
	}
	cout << "v������Ϊ��" << v.capacity() << endl;//������10000��
	cout << "v�Ĵ�СΪ" << v.size() << endl;//��С��10000

	v.resize(3);
	cout << "v������Ϊ��" << v.capacity() << endl;//resize��capacity�����
	cout << "v�Ĵ�СΪ" << v.size() << endl;//��С��resize���Ϊ��3
	
	//����swap�����ڴ棬��������ʹ�����ڴ�ͻ���
	vector<int>(v).swap(v);//����������С�����Ϊ3
	cout << "v������Ϊ��" << v.capacity() << endl;//swap��capacity��Ϊ3
	cout << "v�Ĵ�СΪ" << v.size() << endl;//swap��sizeҲ��Ϊ3
}

int main()
{
	test01();
	test02();
	system("pause");

	return 0;

}