#include <iostream>
using namespace std;
//�̳��еĹ��������˳��
class Base
{
public:
	Base()
	{
		cout << "Base�Ĺ��캯��" << endl;
	}
	~Base()
	{
		cout << "Base����������" << endl;
	}
};
class Son :public Base
{
public:
	Son()
	{
		cout << "son�Ĺ��캯��" << endl;
	}
	~Son()
	{
		cout << "son����������" << endl;
	}
};
void test01()
{
	Son s;
}
//�̳��еĹ��������˳������
//�ȹ��츸���ٹ�����ӣ���������������������
int main()
{
	test01();
	system("pause");

	return 0;

}