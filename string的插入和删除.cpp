#include <iostream>
using namespace std;
#include<string>
//��string�ַ������в����ɾ���ַ�����

void test01()
{
	string str = "hi";
	//����
	str.insert(1, "1111");//�ڵ�һ��λ��ǰ����1111,
	cout << str << endl;//���h1111i

	//ɾ��
	str.erase(1, 4);//�ӵ�һ��λ����ɾ��4��

	cout << str << endl;//���hi
}
int main()
{
	test01();
	system("pause");

	return 0;

}