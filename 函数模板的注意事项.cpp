#include <iostream>
using namespace std;
//����ģ���ע������
template<typename T>//typename �����滻��class

void myswap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

//1.�Զ������Ƶ��������Ƶ���һֱ����������T�ſ���ʹ�ã�
void test01()
{
	int a = 10;
	int b = 20;
	char c = 'c';
	myswap(a, b);
	//myswap(b, c);�Ƶ�����һ�µ���������
	cout << "a=" << a << endl;

}
//2.ģ�����Ҫȷ����T���������Ͳſ���ʹ��
template<class T>//classҲ������typename
void func()
{
	cout << "func����" << endl;
}
void test02()
{
	func<int>();//ģ����Ҫȷ�� T ����������
}


int main()
{
	test01();
	test02();
	system("pause");

	return 0;

}
