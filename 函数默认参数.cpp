#include <iostream>
using namespace std;
//1.����Ĭ�ϲ���
int func1(int a, int b=20, int c=30)//��������ֻ��һ����������������Լ��������ݾ����Լ������ݣ�û������Ĭ��ֵ
{
	return a + b + c;
}
//int func2(int a, int b = 20, int c)
//ע��1�����ĳ��λ���Ѿ�����Ĭ�ϲ��������λ���Ժ󶼱�����Ĭ�ϲ���
//{
//	return a + b + c;
//}
//ע��2�����������������Ĭ�ϲ�����������ʵ�Ͳ�����Ĭ�ϲ���;����ᱨ��
// ����������ʵ��ֻ����һ��Ĭ�ϲ���
int func3(int a =20 , int b =20);
int func3(int a , int b)
{
	return a + b;
}
//2.����ռλ����,����Ҫ������������ȥ�����������ô˺���
void func4(int a,int)
{
	cout << "this is func" << endl;
}
//3.1�������أ�������������ͬ����߸�����
//�������ص�����������1.������ͬһ��������ȫ�� �ֲ�����2.����������ͬ3.�����Ĳ������Ͳ�ͬ ���߸�����ͬ ����˳��ͬ
//ע�⺯������ֵ��������Ϊ���ص�����������void��int��
//3.2�������ص�ע����������â�����Ĭ�ϲ���

void func5()
{
	cout << "func5����" << endl;
}
void func5(int a)//������ͬ,��������
{
	cout << "func5(int a)�ĵ���" << endl;
}
void func5(double a)//������ͬ,��������
{
	cout << "func5(double a)�ĵ���" << endl;
}
void func5(double a, int b)//˳��ͬ����������
{
	cout << "func5(double a,int b)�ĵ���" << endl;
}
void func5(int a , double b)//˳��ͬ����������
{
	cout << "func5(int a,double b)�ĵ���" << endl;
}

//1.������Ϊ��������
void func6(int& a)//int &a=10;���Ϸ���������Ҫ�ȳ�ʼ������int b=10��int &a=b;
{
	cout << "func6(int &a)����" << endl;
}
void func6(const int& a)//const int ���ú�int�����������Ͳ�ͬ
//const int &a=10;�Ϸ����൱���ȴ���int temp=10����ʹ��const int &a=temp��
{
	cout << "func6(const int &a)����" << endl;
}
//2.������������Ĭ�Ϻ���
void func7(int a ,int b = 10)
{
	cout << "func7(int a��int b)�ĵ���" << endl;

}
void func7(int a)
{
	cout << "func7(int a)�ĵ���" << endl;

}

int main()
{
	
	cout << func1(10,30) << endl;//�������b=20��Ϊb=30�������ǰ�c��ֵ

	cout << func3() << endl;
	
	func4(10,30);//����ռλ������������������������������

	func5();//�������ص���
	func5(3.14);//�������ص���
	func5(2, 9.8);//�������ص���
	func5(9.8, 2);//�������ص���

	//1.������Ϊ��������
	int a = 10;
	func6(a);//���õ��ǲ���const�ĺ���

	func6(10);//���õ��Ǵ�const�ĺ���

	//func7(10);������ô�����ˣ���������֪���õ����ĸ�;������
	func7(10, 20);


	system("pause");

	return 0;

}