#include <iostream>
using namespace std;
#include<string>
//string �ַ�����ֵ
//�Ⱥŵĸ�ֵ����assignʵ��
// 
// 
//
void test01()
{
	string str1;
	str1 = "hi!";//1char*���ַ�����ֵ����ǰ�ַ���
	cout << "str1=" << str1 << endl;

	string str2;
	str2 = str1;//2������ֵ
	cout << "str2=" << str2 << endl;

	string str3;
	str3 = 'a';//3�����ַ���ֵ��������
	cout << "str3=" << str3 << endl;

	string str4;
	str4.assign("Good luck");//4.assign��ֵ
	cout << "str4=" << str4 << endl;

	string str5;
	str5.assign("Good luck", 4);//5.���ַ�����ǰ4����ֵ��str5
	cout << "str5=" << str5 << endl;

	string str6;
	str6.assign(str5);//6.assign�Ŀ������캯��
	cout << "str6=" << str6 << endl;

	string str7;//7.10��w��ɵ��ַ���
	str7.assign(10, 'w');
	cout << "str7=" << str7 << endl;
}
int main()
{
	test01();
	system("pause");

	return 0;

}