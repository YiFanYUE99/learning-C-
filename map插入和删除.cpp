#include <iostream>
using namespace std;
#include<map>
//map�������в����ɾ��

void printmap(map<int, int>& m)
{

	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << (*it).first << " " << (*it).second << endl;
	}
	cout << endl;
}

void test01()
{
	map<int, int>m;

	//����
	//��һ��
	m.insert(pair < int, int > (1, 10));
	//�ڶ���
	m.insert(make_pair(2, 20));//����дģ�����
    //������(�ܿ�������)
	m.insert(map<int, int>::value_type(3, 30));
	//������:�����飬���������ĳ��keyֵ������㴴��һ������ֵvalueΪ0
	m[4] = 40;

	cout << m[5] << endl;//��������[]������������������[]����valueֵ

	printmap(m);

    //ɾ��
	m.erase(m.begin());//ɾ����һ��λ��
	printmap(m);

	m.erase(3);//����keyֵɾ��
	printmap(m);

	m.erase(m.begin(), m.end());//����ɾ��
	m.clear();
	printmap(m);

}


int main()
{
	test01();

	system("pause");

	return 0;

}