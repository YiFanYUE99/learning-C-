#include <iostream>
using namespace std;
#include<deque>
//deque����Ϊ˫�����飬�ɶ� ͷ�� ���в����ɾ����push_front pop_back
//vectorͷ�������deque�Ͽ�
//vector����Ԫ�ص��ٶȱ�deque��

//deque�ڲ����п�����ά��ÿ�λ����������ݣ������������ʵ����
//deque��һ�������ռ䣬ʵ����
//deque�����ĵ�����֧���������

void printdeque(const deque<int>& d)//ֻ����const�����������Ҫ��Ϊconst_iterator
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)//��������Ϊconst_iterator
	{
		cout << *it << " ";
	}
	cout << endl;
}





//deque�Ĺ��캯��
void test01()
{
	//1.���渳ֵ
	deque<int>d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}

	printdeque(d1);

	//2.���䷽ʽ��deque��ֵ
	deque<int>d2(d1.begin(), d1.end());
	printdeque(d2);

	//3.10��100��ֵ��deque
	deque<int>d3(10, 100);
	printdeque(d3);

	//4.��������
	deque<int>d4(d3);
	printdeque(d4);
}



int main()
{
	test01();

	system("pause");

	return 0;

}