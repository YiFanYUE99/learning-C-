#include <iostream>
using namespace std;
//案例：计算器
//多态好处
//1组织结构清晰2可读性强3对于前期和后期扩展以及维护性高

//普通写法
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
		//扩展新功能需要修改原码
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
//多态实现计算器

//实现计算器抽象类
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
//加法计算器
class add :public acalculator
{
public:
	int getresult()
	{
		return m_Num1 + m_Num2;
	}
};
//减法
class minus :public acalculator
{
public:
	int getresult()
	{
		return m_Num1 - m_Num2;
	}
};
//乘法
class multi :public acalculator
{
public:
	int getresult()
	{
		return m_Num1 * m_Num2;
	}
};
//除法
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
	delete abc;//创建在堆区，用完后销毁



	abc = new multi;
	abc->m_Num1 = 100;
	abc->m_Num2 = 100;
	cout << abc->getresult() << endl;
	delete abc;//创建在堆区，用完后销毁
}

int main()
{
	/*test01();*/
	test02();
	system("pause");

	return 0;

}