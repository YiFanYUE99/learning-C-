#include <iostream>
using namespace std;
#include<string>
//string�ַ���ȡ [] ���� at()
void test01()
{
	//��ȡ
	string str = "hello";
	cout << "str=" << str << endl;
	//1.ͨ��[]���ʵ����ַ�
	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i] << endl;
	}
	//2.ͨ��at��ʽ���ʵ����ַ�
	for (int i = 0; i < str.size(); i++)
	{
		cout << str.at(i) << " ";
	}
	cout << endl;


	//�޸�
	str[0] = 'x';//����0���ַ���Ϊx
	cout << "str=" << str << endl;

	str.at(1) = 'x';
	cout << "str=" << str << endl;
}
int main()
{
	test01();
	system("pause");

	return 0;

}