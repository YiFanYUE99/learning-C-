#include <iostream>
using namespace std;
//thisָ��
class Person
{
public:
	Person(int age)
	{
		this->age = age;//��this�������·�int age ������
	}

	Person& PersonAddAge(Person& p)//Ҫ���ر���ʹ��Person&����void��Ϊ����
	{
		this->age += p.age;
		//this��ָ��p2��ָ�룬��*this��ָ��p2���������
		return *this;//���ض�������this
	}

	int age;//ֱ��������������룬��Ҫ���Ϸ�����this
};
//1������Ƴ�ͻ
void test01()
{
	Person p1(18);
	cout << "p1������Ϊ�� " << p1.age << endl;
	Person p2(10);
	
	//2���ض�������this
	p2.PersonAddAge(p1);
	
	cout << "p2������Ϊ�� " << p2.age << endl;

	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
	//Ҫһֱ׷��������Ҫreturn*this
	cout << "p2������Ϊ�� " << p2.age << endl;

}
//2���ض�������this

int main()
{
	test01();
	system("pause");

	return 0;

}