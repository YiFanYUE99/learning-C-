#include <iostream>
using namespace std;
#include<stack>
//stack ջ ��������Ƚ�����Ľṹ����ֻ��һ������
//ջ��ֻ�ж���Ԫ�ؿ��Ա����ʹ�ã����ջ�����б�����Ϊ
//1ջ�����ж������Ƿ�Ϊ��
//2ջ���Է���Ԫ�ظ���

//���ýӿ�
void test01()
{
	stack<int>s;

	//��ջ
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);

	cout << "ջ�Ĵ�С" << s.size() << endl;
	
	//��ջ�����ݣ����Ǳ����������ջ��
	while (!s.empty())
	{
		//�鿴ջ��Ԫ��
		cout << "ջ��Ԫ��Ϊ�� " << s.top() << endl;

		//��ջ
		s.pop();

	}
	cout << "ջ�Ĵ�С" << s.size() << endl;

}
int main()
{
	test01();

	system("pause");

	return 0;

}