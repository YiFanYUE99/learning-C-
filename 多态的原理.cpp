#include <iostream>
using namespace std;
//������������
//��̬�ô�
//1��֯�ṹ����2�ɶ���ǿ3����ǰ�ںͺ�����չ�Լ�ά���Ը�

//��ͨд��
class calculator
{
public:
	int getResult(string oper)
	{
		if (oper == "+")
		{
			return m_Num1 + m_Num2;
		}
		else if (oper=="-")
		{
			return m_Num1 - m_Num2;
		}
		else if (oper == "*")
		{
			return m_Num1 * m_Num2;
		}
		else if (oper == "/")
		{
			return m_Num1 / m_Num2;
		}
		//��չ�¹�����Ҫ�޸�ԭ��
	}
	int m_Num1;
	int m_Num2;
};
void test01()
{
	calculator c;
	c.m_Num1 = 10;
	c.m_Num2 = 10;
	cout << c.getResult("+") << endl;
	cout << c.getResult("-") << endl;
	cout << c.getResult("*") << endl;\
	cout << c.getResult("/") << endl;

}
//��̬ʵ�ּ�����

//ʵ�ּ�����������
class acalculator
{
public:
	virtual int getresult()
	{
		return 0;
	}
	int m_Num1;
	int m_Num2;

};
//�ӷ�������
class add :public acalculator
{
public:
	int getresult()
	{
		return m_Num1 + m_Num2;
	}
};
//����
class minus :public acalculator
{
public:
	int getresult()
	{
		return m_Num1 - m_Num2;
	}
};
//�˷�
class multi :public acalculator
{
public:
	int getresult()
	{
		return m_Num1 * m_Num2;
	}
};
//����
class divide :public acalculator
{
public:
	int getresult()
	{
		return m_Num1 / m_Num2;
	}
};
void test02()
{
	acalculator * abc = new add;
	abc->m_Num1 = 100;
	abc->m_Num2 = 100;
	cout << abc->getresult() << endl;
	delete abc;//�����ڶ��������������



	abc = new multi;
	abc->m_Num1 = 100;
	abc->m_Num2 = 100;
	cout << abc->getresult() << endl;
	delete abc;//�����ڶ��������������
}

int main()
{
	/*test01();*/
	test02();
	system("pause");

	return 0;

}