#include <iostream>
using namespace std;
//��ģ����̳�
//����ģ�������̳�ʱ����Ҫע�����¼���
//1������̳еĸ�����һ����ģ��ʱ��������������ʱ��Ҫ�ƶ���������T������
//2�����ָ�����������޷�����������ڴ�
//3��������ָ����������T�����ͣ�����Ҳ���Ϊ��ģ��
template<class T>
class Base
{
	T m;
};
class Son: public Base<int> //1����public Base������base����������
{

};
void test01()
{
	Son s1;
}
//3��������ָ����������T�����ͣ�����Ҳ���Ϊ��ģ��
template<class T1,class T2>
class Son2 :public Base<T2>
{
public:
	Son2()
	{
		cout << "T1������Ϊ��" << typeid(T1).name() << endl;
	}
	T1 obj;
};
void test02()
{
	Son2<int, char>S2;//������char��������int
}
int main()
{
	test01();
	test02();
	system("pause");

	return 0;

}
