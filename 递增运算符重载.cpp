#include <iostream>
using namespace std;
//���ص���++�����
//�Զ��������
class myinteger
{
	friend ostream& operator << (ostream& cout, myinteger myint);
public:
	myinteger()
	{
		m_Num = 0;
	}
	//����++�����
	//ǰ��++:��������
	myinteger& operator++()
	{
		//�Ƚ���++����
		m_Num++;
		//�ٽ�����������
		return *this ;//�������ã�������ֵ��Ϊ��һֱ��һ�����ݲ���
	}
	//���غ���++�����:�������ڼ�int��������int ������double float�� int����ռλ��������������ǰ�úͺ���
	myinteger& operator++(int)
	{
		//�� ��¼��ʱ���
		myinteger temp = *this;
		//�� ����
		m_Num++;
		//��󽫼�¼�������
		return temp;//���õ�������ֵ
	}
private:
	int m_Num;
};
//��������<<�����
ostream& operator<<(ostream & cout, myinteger myint)
{
	cout << myint.m_Num;
	return cout;
}
void test01()
{
	myinteger myint;
	cout << ++myint << endl;
	cout << myint << endl;
}
void test02()
{
	myinteger myint;
	cout << myint++ << endl;
	cout << myint << endl;
}
int main()
{
	test01();
	test02();
	int c = 10;
	cout << c++ << endl;//c++���������ʼ��c������c+1��10
	cout << c << endl;//11
	int d = 10;
	cout << ++d << endl;//ʹ��d+1�����d+1
	cout << d << endl;//11

	system("pause");

	return 0;

}