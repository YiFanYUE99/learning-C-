#include <iostream>
using namespace std;
#include<string>
//string�ַ���ƴ�ӣ�ʵ�����ַ��� ĩβ ƴ�� �ַ���
//���ذ汾�ܶ�
void test01()
{
	string str1 = "��";

	//1.
	str1 += "������Ϸ";
	cout << "str1=" <<str1<< endl;

	//2.һ���ַ��õ�����
	str1 += ':';
	cout << "str1=" << str1 << endl;

	//3.
	string str2 = "LOL DNF";
	str1 += str2;
	cout << "str1" << str1 << endl;

	//4.
	string str3 = "I ";
	str3.append("love playing");
	cout << "str3=" << str3 << endl;

	//5.ǰn���ַ�ƴ�ӵ��ַ���
	str3.append(" gamejaij", 5);
	cout << "str3=" << str3 << endl;

	//6.
	str3.append(str2);
	cout << "str3=" << str3 << endl;

	//7.ֻ��ȡһ���ַ�����0-3���ַ����
	str3.append(str2, 0, 3);
	cout << "str3=" << str3 << endl;


}


int main()
{
	test01();
	system("pause");

	return 0;

}