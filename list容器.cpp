#include <iostream>
using namespace std;
#include<list>
//list�Ļ�������
//���ܣ������ݽ�����ʽ�洢
//����list��һ������洢��Ԫ�Ϸ������Ĵ洢�ṹ��
//������һϵ�н����ɣ�
// ÿ������� �� ���֣�һ�� �Ǵ������Ԫ�� �� ��������һ���� �洢��һ���ڵ��ַ �� ָ����
//STL�е�������һ��˫��ѭ�������һ��������ָ���һ��

//�ŵ㣬�ٲ���ɾ�����ݷ��㣬ֻ��ı�ǰ������Ԫ�ص�ָ����ڲ����ж���Ŀռ��˷�
//ȱ�㣺�ٱ����ٶ�û����죬��ռ�ÿռ�������

//1.list�Ĺ��캯��������list������

void printlist(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}


void test01()
{
	//����list����
	list<int>L1;//1.Ĭ�Ϲ���

	//�������
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	//��������
	printlist(L1);

	//2.���䷽ʽ����
	list<int>L2(L1.begin(), L1.end());
	printlist(L2);

	//3.��������
	list<int>L3(L2);
	printlist(L3);

	//4.n��Ԫ�ع���
	list<int>L4(10, 100);//10��100
	printlist(L4);

}

int main()
{
	test01();
	system("pause");

	return 0;

}