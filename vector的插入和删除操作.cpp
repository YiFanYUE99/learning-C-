#include <iostream>
using namespace std;
#include<vector>
//��vector���в����ɾ��
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
	//1��β��
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);

	printvector(v1);

	//2��β��
	v1.pop_back();
	printvector(v1);

	//3������ ��һ�������ǵ�����
	v1.insert(v1.begin(), 100);//�ڵ�һ��λ�ò���100
	printvector(v1);

	v1.insert(v1.begin(), 2, 1000);//�ڵ�һ��λ�ò���2��1000
	printvector(v1);

	//4��ɾ�� ����Ҳ�ǵ�����
	v1.erase(v1.begin());//ɾ���˵�һ��Ԫ��
	printvector(v1);

	//v1.erase(v1.begin(), v1.end());//��ͷ��β��ɾ��

	//5�����
	v1.clear();//ȫ��ɾ����ͬ��һ�еĹ���
	printvector(v1);//ɾ����
}
int main()
{
	test01();

	system("pause");

	return 0;

}