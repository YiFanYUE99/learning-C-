#include <iostream>
using namespace std;
//���ң�����ָ�����ַ����Ƿ����
//�滻����ָ����λ���滻�ַ���

//1.����find rfind
void test01()
{
	//1.find ����������
	string str1 = "abcdegfgf";
	int pos = str1.find("gf");//d�ڵ��ĸ�λ��0��ʼ��������������ڷ���-1
	cout << "pos=" << pos << endl;
    
	if (pos == -1)
	{
		cout << "δ�ҵ��ַ���" << endl;

	}
	else
	{
		cout << "�ҵ��ַ���" << endl;
	}
	//2.rfind�����������   �ҵ����ǿ��ҵ�gf
	int pos2 = str1.rfind("gf");
	cout << "pos2=" << pos2 << endl;

}
//2.�滻 replace
void test02()
{
	string str1 = "abcdefg";
	str1.replace(1, 3, "1111");//�ǽ�1-3��λ�Ķ�����Ϊ1111
	cout << "str1=" << str1 << endl;
}
int main()
{
	test01();
	test02();
	system("pause");

	return 0;

}