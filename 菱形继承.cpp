#include <iostream>
using namespace std;

//���μ̳У��������๲��һ�����࣬��������������һ����ͬ������
//��д���μ̳�
//������
class Animal//�����
{
public:
	int m_Age;

};
//������̳У�������μ̳е�����
//�ؼ���virtual
//����
class sheep:virtual public Animal
{

};

//����
class tuo:virtual public Animal
{

};

//������
class yangtuo:public sheep,public tuo
{

};

void test01()
{
	yangtuo st;
	st.sheep::m_Age = 18;
	st.tuo::m_Age = 28;
	//���μ̳У�����������ӵ����ͬ���ݣ���Ҫ��������������
	cout << "sheep"<< st.sheep::m_Age << endl;
	cout << "tuo" << st.tuo::m_Age << endl;
	//��̳м̳е���ָ�룬����age��һ�ݡ�
	cout << "st.m_Age" << st.m_Age << endl;

}

int main()
{
	test01();
	
	system("pause");

	return 0;

}