#include <iostream>
using namespace std;
//ģ�岻����ֱ��ʹ�ã���ֻ��һ�����
//ģ���ͨ�ò��������ܵ�

//����ģ�壺
//����һ��ͨ�ú������亯�� ����ֵ �� �β� ���Ϳ��Բ�����ָ������һ����������������

//�������ͽ�������
void swapInt(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

//�������������ͺ���

void swapdouble(double& a, double& b)
{
	double temp = a;
	a = b;
	b = temp;
}

//������int�ͽ���double����һ��ģ���У�ʹ�ø����������Ͷ��ܽ���
template<typename T>//����һ��ģ�壬���߱�������������н����ŵ�T��Ҫ����T��һ��ͨ����������
void myswap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}
void test01()
{
	int a = 10;
	int b = 20;
	//swapInt(a, b);
	//���ú���ģ��ʵ�ֽ���:���ַ���
	//1���Զ������Ƶ���
	myswap(a, b);
	//2.��ʾָ������
	myswap<int>(a, b);

	cout << "a=" << a << endl;

	double c = 1.1;
	double d = 2.2;
	//swapdouble(c, d);
	cout << "c=" << c<<endl;

}



int main()
{

	test01();

	system("pause");

	return 0;

}