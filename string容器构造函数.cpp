#include <iostream>
using namespace std;
#include<string>
//string�������캯��
//string��C++����ַ�����string���� ��һ����
//string������һ���࣬�ڲ���װ��char*���ַ�������������ַ�������һ��char*�͵�����


//string���ڲ���װ�˺ܶ��Ա������find copy delete replace insert
//string����char*��������ڴ棬���õ��ĸ���Խ���ȡֵԽ��ȣ������ڲ����и���

//string�Ĺ��캯��
//string()����һ�����ַ���
// string(const char*s)ʹ���ַ���s��ʼ��
// string(const string& str) ʹ��һ��string�����ʼ����һ��string����
// string(int n,char c)ʹ��n���ַ�c��ʼ���ַ���
void test01()
{
	string s1;//Ĭ�Ϲ���

	const char* str = "Hi";
	string s2(str);//ʹ���ַ���s��ʼ��
	cout << "s2=" << s2 << endl;

	string s3(s2);//ʹ��һ��string�����ʼ����һ��string����
	cout << "s3=" << s3 << endl;

	string s4(10, 'b');//ʹ��n���ַ�c��ʼ���ַ���,������ע��
	cout << "s4=" << s4 << endl;
}
int main()
{
	test01();
	system("pause");

	return 0;

}