#include <iostream>
using namespace std;
#include<list>
//��list�������в����ɾ��
//remove��ele��ɾ��������ele��ƥ���ֵ
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
	list<int>L;
	
	//β��
	L.push_back(10);
	L.push_back(20);
	L.push_back(30);

	//ͷ��
	L.push_front(20);
	L.push_front(40);
	L.push_front(30);

	printlist(L);

	//ͷɾ
	L.pop_front();
	printlist(L);

	//βɾ
	L.pop_back();
	printlist(L);


	//insert����
	L.insert(L.begin(), 100);//�ڵ�һ��λ�ò���100
	printlist(L);

	list<int>::iterator it = L.begin();
	L.insert(++it, 1000);//�ڵڶ���λ�ò���1000������������ƫ�ƣ�
	printlist(L);

	//ɾ��erase
	it = L.begin();
	L.erase(it);//ɾ����һ��λ�õ�����
	printlist(L);

	//�Ƴ�remove
	L.remove(1000);//ɾ��1000���Ԫ�أ�����кö��1000�Ͷ�ɾ��
	printlist(L);

	//���clear
	L.clear();
	printlist(L);

}

int main()
{
	test01();

	system("pause");

	return 0;

}