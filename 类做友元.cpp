#include <iostream>
using namespace std;
//������Ԫ

class Building;//���߱�����һ���һ�д����࣬�Ȳ�Ҫ����
class goodgay
{
public:
	goodgay();
	void visit();//�ιۺ�������building�е�����
private:
	Building * building;
};
class Building
{
	//**goodgay�����Ǳ���ĺ����ѿ��Է���˽�г�Ա,�����������вſ��Է���bedroom
	friend class goodgay;
public:
	Building();
public:
	string m_sittingroom;
private:
	string m_bedroom;
};
//����д��Ա����
Building::Building()
{
	m_sittingroom = "����";
	m_bedroom = "����";
}
goodgay::goodgay()
{
	//����������Ķ���
	building = new Building;
}
//�ιۺ����������Ǵ˰�
void goodgay::visit()
{
	cout << "�û��������ڷ���" << building->m_sittingroom << endl;
	cout << "�û��������ڷ���" << building->m_bedroom << endl;
}
void test01()
{
	goodgay gg;
	gg.visit();
}
int main()
{
	test01();
	system("pause");

	return 0;

}