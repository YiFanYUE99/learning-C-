#include <iostream>
using namespace std;
//��̬������ͬ��Ʒ

//���麯��
class adrinking
{
public:
	//��ˮ
	virtual void Boil() = 0;
	//����
	virtual void Brew() = 0;
	//���뱭��
	virtual void pour() = 0;
	//���븨��
	virtual void put() = 0;
	//������Ʒ
	void make()
	{
		Boil();
		Brew();
		pour();
		put();
	}

};
//���ݿ���
class coffee :public adrinking
{
	void Boil()
	{
		cout << "�󿧷�" << endl;
	}
	void Brew()
	{
		cout << "���ݿ���" << endl;
	}
	void pour()
	{
		cout << "������" << endl;
	}
	void put()
	{
		cout << "���ȼӸ���" << endl;
	}
};
//���ݲ�
class tea:public adrinking
{
	void Boil()
	{
		cout << "��ˮ" << endl;
	}
	void Brew()
	{
		cout << "���ݲ�Ҷ" << endl;
	}
	void pour()
	{
		cout << "����" << endl;
	}
	void put()
	{
		cout << "��Ӹ���" << endl;
	}
};
void dowork(adrinking*abs)//adrinking*abs=new coffee
{
	abs->make();
}
void test01()//��������
{
	dowork(new coffee);
}
int main()
{
	test01();
	system("pause");

	return 0;

}