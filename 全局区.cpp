#include <iostream>
using namespace std;
//ȫ�ֱ���
int g_a = 10;
int g_b = 10;

//const����ȫ�ֳ���
const int c_g_a = 10;
const int c_g_b = 10;

int main()
{
	//����ȫ�������ֲ�������const���εľֲ�����

	//��ȫ������ȫ�ֱ�������̬�������ַ���������constant���ε�ȫ�ֳ���

	//������ͨ�ֲ�����
	int a = 10;
	int b = 10;
	cout << "�ֲ�����a�ĵ�ַΪ" << (int)&a << endl;
	cout << "�ֲ�����b�ĵ�ַΪ" << (int)&b << endl;

	//ȫ�ֱ����;ֲ���������һ��
	cout << "ȫ�ֱ���g_a�ĵ�ַΪ" << (int)&g_a << endl;
	cout << "ȫ�ֱ���g_b�ĵ�ַΪ" << (int)&g_b << endl;
	//ȫ�ֱ��� ��̬���� �ַ������� constant����ȫ�ֳ��� ��һ��������
	//��̬���� ����ͨ����ǧ��static,���ھ�̬����
	static int s_a = 10;
	static int s_b = 10;
	cout << "��̬����s_a�ĵ�ַΪ" << (int)&s_a << endl;
	cout << "��̬����s_b�ĵ�ַΪ" << (int)&s_b << endl;

	//����
	//�ַ�������
	cout << "�ַ��������ĵ�ַΪ��" << (int)&"hello world" << endl;

	//const���α���
	//const���ε�ȫ�ֳ��� �;ֲ�����
	cout << "ȫ�ֳ���c_g_a�ĵ�ַΪ��" << (int)&c_g_a << endl;
	cout << "ȫ�ֳ���c_g_b�ĵ�ַΪ��" << (int)&c_g_b << endl;
	
	//const���ξֲ�����
	int c_l_a = 10;
	int c_l_b = 10;
	cout << "�ֲ�����c_l_a�ĵ�ַΪ��" << (int)&c_l_a << endl;
	cout << "�ֲ�����c_l_b�ĵ�ַΪ��" << (int)&c_l_b << endl;




	system("pause");

	return 0;

}