#include <iostream>
using namespace std;
//�������ã������������ �º��� û�й̶�д�����ǳ����
//��ӡ�����
class myprint
{
public:
	//*���ص� ������������� ������
	void operator()(string test)
	{
		cout << test << endl;
	}
};
class myadd
{
public:
	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}
};
//�����ĺ���
void myprint2(string test)
{
	cout << test << endl;
}
void test01()
{
	myprint myprint;
	myprint("hello world");//�ǳ�����ĺ����ʽзº���
	myprint2("hello world");
	myadd add;//��д��������д����
	int ret = add(100, 100);
	cout << ret << endl;

	//������������
	cout << myadd()(100, 100) << endl;
}
int main()
{
	test01();
	system("pause");

	return 0;

}