#include <iostream>
using namespace std;
//�Ӹ���̳й����ĳ�Ա����Щ�������������
class Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son :public Base//��4��int 16���ֽ�
{
public:
	int m_D;
};
//����Developer command prompt for vs2022�鿴
//cl /d1 reportSingleClassLayoutSon "�̳��еĶ�������.cpp" 
//cL d��
void test01()
{
	//���������зǾ�̬�����Զ��ᱻ����̳���ȥ
	//��������private�����ˣ����Ǽ̳���ȥ��

	cout << "size of Son=" << sizeof(Son) << endl;//ռ16���ֽ�
}
int main()
{
	test01();
	system("pause");

	return 0;

}