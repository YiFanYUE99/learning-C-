//6.������������ʹ�õĴ����װ�����������ظ�����
//6.1���������������裺�ٷ���ֵ���͢ں������۲����б�ܺ���������return���ʽ
//����ֵ���� �������������б�
//{
//      ���������
//      return���ʽ
// }
// 6.2���ú���
// 6.3ֵ���ݣ�ֵ����ʱ������βθı䲻Ӱ��ʵ��
// 6.4�����ĳ�����ʽ4�֣����޲��������޷���ֵ
// 6.5���������������Զ�Σ����߱��������ʹ��(���ú���д��main��������ʱ��Ҫ�õ�)
// 6.6 �����ķ��ļ���д��4�����裩
//�ٴ���.h��׺����ͷ�ļ�
//�ڴ���.cpp��׺����Դ�ļ�
//����ͷ�ļ���д����������void swap(int a, int b);
//����ԭ�ļ���д�����Ķ��� 
//����.h��д�� #include <iostream> using namespace std;
//����.cpp��д��#include "fenwenjian.h"�����ű�ʾ�Զ���ĺ���
//������Ҫ�õ��˺�����cpp�ļ���д��#include "fenwenjian.h"

//6.��ϰ��ʵ��һ���ӷ������������Ǵ��������������ݣ�����������ӽ�������ҷ���
#include <iostream>
using namespace std;
#include "fenwenjian.h"
//num1 num2���β�
int add(int num1, int num2)//�ٷ���ֵ������int�ں�������add�۲����б���������int
{
	int sum = num1 + num2;//�ܴ��뺯�������

	return sum;//��return���ʽ
}
//������ֵ���������������������Ҫ����ֵ������ֵ����дΪvoid,��дreturn
void exchan(int numb1, int numb2) 
{
	cout << "numb1=" << numb1 << endl;
	cout << "numb2=" << numb2 << endl;
	int temp = numb1;
	numb1 = numb2;
	numb2 = temp;
	cout << "numb1=" << numb1 << endl;
	cout << "numb2=" << numb2 << endl;
   
}
//6.4����������ʽ
//���޲�() �޷�void
void test1()
{
	cout << "���޲��޷�" << endl;
}
//���вΣ����������޷�void
void test2(int a)
{
	cout << "���в��޷� " << a << endl;
}
//���޲�() �з�return
int test3()
{
	return 0;
}
//���вΣ����������з�return
int test4(int num4)
{
	return num4;
}
//6.5����������:��ǰ���߱�������������
int max(int a, int b);//������������û�д�����




int main()//����Ҫ���붫��
{
	//6.2��main�����е���add����
	int a = 90;
	int b = 30;
	int c = add(a, b);//����ʱʵ�ε�ֵ�ᴫ�ݸ��β�
	cout << c << endl;
	//6.3ֵ���ݣ�������d��e������ı䣻ʵ�κ��βκ�tempռ�ò�ͬ���ڴ�
	int d = 30;
	int e = 49;
	exchan(d, e);
	cout << "d" << d << endl;//d��e��ֵ����ı�
	cout << "e" << e << endl;

	test1();//6.4�ٵ����޲��޷��ĺ���
	test2(2);//6.4�ڵ����в��޷��ĺ���
	int q = test3();//6.4�۵����޲��з��ĺ���
	cout << q << endl;
	int p = test4(2000);//6.4�ܵ����в��з��ĺ���
	cout << p << endl;
	//6.5����������
	int a1 = 20;
	int b1 = 10;
	cout << max(a1, b1) << endl;
	//6.6���ļ�
	swap(10, 20);



	system("pause");

	return 0;

}
//6.5������������ϰ���Ƚ�������С���ش��
int max(int a, int b)
{
	return a > b ? 1 : 2;//��Ŀ������ȴ�С��a�󷵻�1�����򷵻�2
}

