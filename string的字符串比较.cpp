#include <iostream>
using namespace std;
//string�ַ����Ƚ�.compare
//�ȽϷ�ʽ�����ַ���ASCll��Ƚ�;��Ҫ�ǱȽ��Ƿ����
//=����0
//>����1
//<����-1
void test01()
{
	string str1 = "Hello";
	string str2 = "Hell";
	if (str1.compare(str2) == 0)
	{
		cout << "str1=str2" << endl;
	}
	else if (str1.compare(str2) == 1)
	{
		cout << "str1>str2" << endl;
	}
	else if (str1.compare(str2) == -1)
	{
		cout << "str1<str2" << endl;
	}
}


int main()
{
	test01();
	system("pause");

	return 0;

}