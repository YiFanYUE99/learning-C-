#include <iostream>
using namespace std;
#include<map>
//map����������

//����д�º����ı����������
class mycompare
{
public:
	bool operator()(const int&v1,const int&v2)const//һ��Ҫ����ĩ����const
	{
		return v1 > v2;
	}
};

void test01()
{
	map<int, int,mycompare>m;//ָ���Լ����������ʹ�併��
	m.insert(make_pair(1, 30));
	m.insert(make_pair(2, 20));
	m.insert(make_pair(3, 60));
	m.insert(make_pair(4, 90));
	m.insert(make_pair(5, 80));

	for (map<int, int,mycompare>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key= " << it->first << "value=" << it->second << endl;
	}

}

int main()
{
	test01();

	system("pause");

	return 0;

}