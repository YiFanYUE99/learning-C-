#include <iostream>
using namespace std;
//��Ԫfriend
//��Ԫ������ʵ��
//1ȫ�ֺ�������Ԫ
//2������Ԫ
//3��Ա��������Ԫ

//���������
class Building
{
	//***ʹ��goodgay������Ϊ��Ԫ���Է���building�е�˽�г�Ա
	friend void goodgay(Building* building);
public:
	Building()
	{
		m_sittingroom = "����";
		m_bedroom = "����";
	}
public:
	string m_sittingroom;//����
private:
	string m_bedroom;//����

};

//ȫ�ֺ��� ����˽�г�Ա
void goodgay(Building *building)
{
	cout << "�û��ѵ�ȫ�ֺ�������" << building->m_sittingroom << endl;

	//˽�г�Ա�ķ��ʣ���Ҫ��ȫ�ֺ���ǰ��friend������class�����Ϸ�
	cout << "�û��ѵ�ȫ�ֺ�������" << building->m_bedroom << endl;
}
void test01()
{
	Building building;
	goodgay(&building);
}
int main()
{
	test01();
	system("pause");

	return 0;

}