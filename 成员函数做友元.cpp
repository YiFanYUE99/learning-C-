#include <iostream>
using namespace std;
//��Ա��������Ԫ
class Building;//�������������������
class goodgay
{
public:
	goodgay();
	void visit();//visit���Է���building��˽�г�Ա
	void visit2();//visit2�����Է���building��˽�г�Ա
private:
	Building * building;
};
class Building
{
	//**���߱�������goodgay���µ�visit��Ա������Ϊ����ĺ����ѣ����Է���˽�г�Ա
	friend void goodgay::visit();
public:
	Building();
public:
	string m_sittingroom;
private:
	string m_bedroom;
};
//����ʵ�ֳ�Ա����
Building::Building()
{
	m_sittingroom = "����";
	m_bedroom = "����";
}
goodgay::goodgay()
{
	building = new Building;//Ϊbuilding������������ָ��ά���ö���
}
void goodgay::visit()//visit���Է���building��˽�г�Ա
{
	cout << "visit�ڷ���" << building->m_sittingroom << endl;

	cout << "visit�ڷ���" << building->m_bedroom << endl;

}
void goodgay::visit2()//visit2�����Է���building��˽�г�Ա
{
	cout << "visit2�ڷ���" << building->m_sittingroom << endl;
}
void test01()
{
	goodgay gg;
	gg.visit();
	gg.visit2();
}
int main()
{
	test01();
	system("pause");

	return 0;

}