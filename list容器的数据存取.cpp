#include <iostream>
using namespace std;
#include<list>
//��list(����)���������ݽ��д�ȡ
//front back
//������Ծʽ���� at []��

void test01()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);


	//�������� ������[] at �ķ�ʽ����
	//list���������ݲ��������������Կռ�洢�ģ���������֧���������
	

	//ֻ�ܷ��ʵ�һ�������һ��Ԫ��
	cout << "��һ��Ԫ��Ϊ��" << L1.front() << endl;
	cout << "���һ��Ԫ��Ϊ��" << L1.back() << endl;

	//��������֧���������
	list<int>::iterator it = L1.begin();
	it++;//����it+1��ֻ��++ --


}

int main()
{
	test01();
	system("pause");

	return 0;

}