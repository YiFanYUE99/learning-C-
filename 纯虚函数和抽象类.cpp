#include <iostream>
using namespace std;
//return 0;��Ϊ���麯��=�������ࣺ1�޷�ʵ����Ԫ����2���������д������Ҳ�ǳ�����
class Base
{
public:
	//���麯��
	virtual void func() = 0;
};
class Son:public Base
{
public:
	virtual void func() //virtual���п���
	{
		cout << "func����" << endl;
	};

};
void test01()
{
	//Base b;//���麯���޷�ʵ��������
	//new Base;
	Son s;//���������д�����еĴ��麯���������޷�ʵ��������
	Base* base = new Son;
	base->func();
}
int main()
{
	test01();
	system("pause");

	return 0;

}