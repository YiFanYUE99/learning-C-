#include <iostream>
using namespace std;
//��ģ���� ��Ա���� �ڵ���ʱ��ȥ����
class Person1
{
public:
	void showperson1()
	{
		cout << "Person1show" << endl;
	}
};
class Person2
{
public:
	void showperson2()
	{
		cout << "Person2show" << endl;
	}
};

template<class T>
class myclass
{
public:
	T obj;
	//��ģ��ĳ�Ա����
	void func1()
	{
		obj.showperson1();
	}
	void func2()//û��������û���������ᱨ��
	{
		obj.showperson2();
	}
};

void test01()
{
	myclass<Person1>m;
	m.func1();//��������
	//m.func2();//��������
}
int main()
{
	system("pause");

	return 0;

}