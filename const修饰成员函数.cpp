#include <iostream>
using namespace std;
//����������Ա�������const
class Person
{
public:
	//thisָ��ı�����ָ�볣����ָ���*ָ���ǲ������޸ĵ�
	void showPerson() const//constʹ��m_A�� ֵ�޷��޸�
	//const�������޸�ָ��ָ��ֵ�� Person*const(�����޸�ָ��ָ��) this
	//*��Ա�������constʹ��ָ��ָ��ֵҲ�����޸�
	{
		/*this->m_A = 100;*/
		//this = NULL;//THISָ�벻�����޸�ָ���ָ��
	}
	void func()//���ǳ�����
	{

	}
	int m_A;
	mutable int m_B;//mutable�����������������Ҳ�����޸����ֵ
};
void test01()
{
	Person p;
	p.showPerson();
}
//��������������ǰ��const
void test02()
{
	const Person p;//����ǰ��const����Ϊ������
	//p.m_A = 100;//���ܸ�
	p.m_B = 100;//��mutable������������Ը�

	//������ֻ�ܵ��ó�����
	p.showPerson();
	//p.func();//������ ���ܵ��÷ǳ���������Ϊ��ͨ��Ա���������޸�����
}
int main()
{
	system("pause");

	return 0;

}