#include <iostream>
using namespace std;
//��̬��Ϊ��
//1��̬��̬��������ַ��󶨣�����׶�ȷ��
//2��̬��̬��������ַ��󶨣����н׶�ȷ�� virtual;������Ҫ�м̳й�ϵ������ ��д ���� �е���virtual����

//���麯������д��1��������ֵ���� 2������ 3�����б� ��ȫһ��

//���غ�����������ͬ ����������ȫ��ͬ

//��̬��̬ʹ�ã������ָ���������ָ���������

//������
class Animal
{
public:
	virtual void speak()//��ַ���
	{
		cout << "������˵��" << endl;
	}
};
//è��
class Cat :public Animal
{
public:
	void speak()
	{
		cout << "è��˵��" << endl;
	}
};
class Dog :public Animal
{
public:
	void speak()
	{
		cout << "����˵��" << endl;
	}
};
//ִ��˵���ĺ���
//�����ĵ�ַ��󶨣���̬��̬ ���� ˵��
//��Ҫè˵����Ҫ��ַ��� ��̬��̬ Animal speak��virtual
void dospeak(Animal &animal)//Animal&animal=cat;(���������͵�ת��)
{
	animal.speak();
}

void test01()//����� ���� ��˵�� ���� è ��˵��
{
	
	Cat cat;
	dospeak(cat);
	
	Dog dog;
	dospeak(dog);

	//Animal ani;
	//dospeak(ani);
}
void test02()
{

	cout << sizeof(Animal) << endl;//ָ�붼ռ8���ֽ� 64λ��4���ֽ� 32λ
}

int main()
{
	//test01();
	test02();
	system("pause");

	return 0;

}

//���� ��д�� ������麯��
//������麯������ �滻Ϊ ������麯����ַ
//�� ����ָ�� ָ�� ������󣬷�����̬
