#include <iostream>
using namespace std;
#include<vector>
//vector�����ʹ�С
//vector������capacityһ������������Ԫ�صĸ���size
//resize����ָ��������С

void printvector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}


void test01()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printvector(v1);

	if (v1.empty())//1Ϊ�շ���true
	{
		cout << "v1Ϊ��" << endl;
	}
	else
	{
		cout << "v1��Ϊ��" << endl;
		cout << "v1������Ϊ" << v1.capacity() << endl;//2����Ϊ13
		cout << "v1�Ĵ�С" << v1.size() << endl;//3��СΪ10
	}

	//4����ָ����С
	v1.resize(15);//size��Ϊ15���������λ��Ĭ����0���
	printvector(v1);

	v1.resize(20, 100);//��size��Ϊ20���������ֵָ����100���
	printvector(v1);

	v1.resize(4);//����ָ���ı�ԭ�����ˣ��������ֱֵ��ɾ��
	printvector(v1);


}

int main()
{
	test01();
	system("pause");

	return 0;

}