#include <iostream>
using namespace std;
#include<map>
//map multimap����:���ܸ�Ч�����ڹ���ʽ�������ײ�ṹʹ�ö�����ʵ��
//map������Ԫ�ض���pair
//pair�е�һ��Ԫ��Ϊkey,���������ã��ڶ���Ԫ��Ϊvalue(ʵֵ)
//����Ԫ�ض������Ԫ�صļ�ֵ�Զ�����

//�ŵ㣺���Ը���keyֵ�����ҵ�valueֵ

//map��multimap������
//map���������������ظ�keyֵԪ��,multimap����valueֵ����ν

void printmap(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key= " << (*it).first << "value=" << (*it).second << endl;
	}
	cout << endl;
}

void test01()
{

	//����map����;map���������pֵ����
	map<int, int>m;

	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(4, 40));

	printmap(m);

	//��������
	map<int, int>m2(m);
	printmap(m2);

	//��ֵ
	map<int, int>m3;
	m3 = m2;
	printmap(m3);
}
int main()
{
	test01();

	system("pause");

	return 0;

}