#include <iostream>
using namespace std;
#include<string>
//string���Ӵ�

void test01()
{
	string str = "abcdefg";

	string substr = str.substr(1, 3);//���Ӵ�,�Ӣٺ�λ��ʼ����ȡ3�������ǽص�������

	cout << substr << endl;//���bcd
}

void test02()
{
	string email = "hello@sina.com";

	//���ʼ���ַ�л�ȡ�û���
	int pos = email.find("@");
	string username = email.substr(0, pos);
	cout << username << endl;


}
int main()
{
	test01();
	test02();

	system("pause");

	return 0;

}