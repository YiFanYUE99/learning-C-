#include <iostream>
using namespace std;
//��Ա���� �� ��Ա���� �ֿ��洢
class Person
{
	int m_A;//�Ǿ�̬��Ա������������Ķ����ϵ�����

	static int m_B;//��̬��Ա��������������Ķ����ϵ�����
	//ûдstatic���ǷǾ�̬��

	void func(){}//�Ǿ�̬��Ա��������������Ķ�����
	static void func2() {}//��̬��Ա������Ҳ��������Ķ�����

};
void test01()
{
	Person p;

	cout << "size of p=" << sizeof(p) << endl;//�鿴pռ�����ڴ�ռ�
    //�ն���ռ���ڴ�1���ֽڣ�C++���������ÿ���ն������һ���ֽ�Ϊ�����ֿն������ڴ��ϵ�λ��
	//ÿ���ն���ҲӦ����һ����һ�޶����ڴ��ַ
}
void test02()
{
	Person p;

	cout << "size of p=" << sizeof(p) << endl;
	//��������int������4���ֽڵ��ڴ�
	//����static int m_B;��Ȼռ4���ֽ��ڴ�
	//����void func(){}����ռ�ĸ��ֽڣ������Ǿ�̬��Ա�����ͷǾ�̬��Ա�����ֿ��洢
}

int main()
{
	test01();
	test02();
	system("pause");

	return 0;

}