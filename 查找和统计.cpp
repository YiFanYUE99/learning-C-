#include <iostream>
using namespace std;
#include<set>
//set�������Һ�ͳ��
//find() 
//count() ����set����ֻ�ܷ���0����1

void test01()
{
	//����
	set<int>s1;
	//��������
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);

	//����30
	set<int>::iterator pos = s1.find(30);
	if (pos != s1.end())//posû��ָ�����һ��λ��֮��
	{
		cout << "�ҵ�Ԫ�أ�" << *pos << endl;
	}
	else
	{
		cout << "δ�ҵ�" << endl;
	}
}
void test02()
{
	//����
	set<int>s1;
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	//ͳ������:����set����count���ֻ����0��1
	int num = s1.count(30);//����30�ĸ���
	cout << "num=" << num << endl;


}


int main()
{
	test01();
	test02();
	system("pause");

	return 0;

}