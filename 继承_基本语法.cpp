#include <iostream>
using namespace std;
//�̳�������������������֮һ����װ���̳С���̬��
//�������ʣ�Ҳ������;���ڼ����ظ�����
//�﷨class ���ࣨ�����ࣩ���̳��� ���ࣨ���ࣩ
//��ͨʵ��ҳ��
//Javaҳ��
//class Java
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��(����ͷ��)" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ�������ײ���" << endl;
//	}
//	void left()
//	{
//		cout << "JAVA\PYTHON\C++(�����б�" << endl;
//	}
//	void content()
//	{
//		cout << "JAVA��Ƶ" << endl;
//	}
//};
////pythonҳ��
//class python
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��(����ͷ��)" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ�������ײ���" << endl;
//	}
//	void left()
//	{
//		cout << "JAVA\PYTHON\C++(�����б�" << endl;
//	}
//	void content()
//	{
//		cout << "python��Ƶ" << endl;
//	}
//};


//�̳�ʵ��ҳ��
//����ҳ��
class Basepage
{
public:
	void header()
	{
		cout << "��ҳ�������Ρ���¼��ע��(����ͷ��)" << endl;
	}
	void footer()
	{
		cout << "�������ġ�����������վ�ڵ�ͼ�������ײ���" << endl;
	}
	void left()
	{
		cout << "JAVA\PYTHON\C++(�����б�" << endl;
	}
};
//JAVAҳ��
class Java:public Basepage
{
public:
	void content()
	{
		cout << "JAVAѧ����Ƶ" << endl;
	}
};
class python :public Basepage
{
public:
	void content()
	{
		cout << "pythonѧ����Ƶ" << endl;
	}
};
void test01()
{
	cout << "JAVA������Ƶҳ�����£� " << endl;
	Java ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();
	cout << "----------------------------" << endl;
	cout << "python������Ƶҳ�����£� " << endl;
	python py;
	py.header();
	py.footer();
	py.left();
	py.content();
}
int main()
{
	test01();
	system("pause");

	return 0;

}