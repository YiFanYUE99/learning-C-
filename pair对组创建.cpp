#include <iostream>
using namespace std;
#include<string>
//pair���飬���ð���ͷ�ļ�
//�ɶԳ��ֵ����ݣ����ö�����Է�����������
//���ִ�������
void test01()
{
	//��һ�ַ�ʽ
	pair<string, int>p("Tom", 20);//first�Ǹ���ĵ�һ��ֵ����Tom,second���ǵڶ���20
	cout << "����" << p.first << "����" << p.second;

	//�ڶ��ַ�ʽ
	pair<string, int>p2 = make_pair("Jerry", 10);
	cout << "����" << p2.first << "����" << p2.second;
}
int main()
{
	test01();
	system("pause");

	return 0;

}