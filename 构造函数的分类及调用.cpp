#include <iostream>
using namespace std;
//���캯���ķ��༰����
//1.���ࣺ�����֣��вι��� �޲ι���
//        ���ͷ֣���ͨ���� ��������
class person
{
public:
	
	person()//Ĭ���޲ι���
	{
		cout << "person�Ĺ��캯������" << endl;
	}
	person(int a)//�вι���
	{
		age = a;
		cout << "person�Ĺ��캯������" << endl;
	}
	//�������캯��(����һ����)
	person(const person &p)//�����ں���ǰҪ����const ������Ҫ��&����
	{
		//�� ���� �������ϵ��������Կ����� ���� ����
		age = p.age;
		cout << "person�Ŀ������캯������" << endl;
	}
	~person()
	{
		cout << "person��������������" << endl;
	}
	int age;//һ��Ҫ��age �������Ͳ�Ȼ����
};
//���캯���ĵ���
void test1()
{
	//1.���ŷ�
	person p1;//Ĭ�Ϲ��캯������,��Ҫ�����ţ��������������Ϊ�Ǻ���������
	person p2(10);//�вι��캯������
	person p3(p2);//�������캯��

	cout << "p2������Ϊ" << p2.age << endl;
	cout << "p3������Ϊ" << p3.age << endl;

	//2.��ʾ��
	person p4;//�޲�
	person p5 = person(10);//�вΣ�person��10�����������캯������ǰִ�����ͱ��ͷ�
	person p6 = person(p5);//����
	//3.��ʽת����
	person p7 = 10;//�൱�ڵ����вι��죬д��person p4=person(10)
	person p8 = p4;//��������
}
int main()
{
	test1();
	
	system("pause");

	return 0;

}