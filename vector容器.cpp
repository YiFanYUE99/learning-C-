#include <iostream>
using namespace std;
#include<vector>
//vector�����飬��������
//�����Ǿ�̬�ռ䣬�޷���չ�ռ䣬vector���Զ�̬��չ
//��̬��չ����������ԭ�ռ�֮��������¿ռ䣬�����Ҹ�����ڴ�ռ䣬�����Ҹ�����ڴ�ռ䣬Ȼ��Ԫ���ݿ����¿ռ䣬�ͷ�ԭ�ռ�
//.rend()ָ���һ��Ԫ�ص�ǰһ��λ��
//.end()ָ�����һ��Ԫ�ص����һ��

void printvector(vector<int>&v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	vector<int>v1;//1Ĭ�Ϲ��� �޲ι���

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	printvector(v1);

	//2ͨ������ķ�ʽ����
	vector<int>v2(v1.begin(), v1.end());
	printvector(v2);

	//3 n��elem��ʽ����
	vector<int>v3(10, 100);//10��100��ɵ�vector����һ���Ǹ������ڶ������Ǹ�ֵ
	printvector(v3);

	//4��������
	vector<int>v4(v3);
	printvector(v4);


}


int main()
{
	test01();

	system("pause");

	return 0;

}