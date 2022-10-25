#include <iostream>
using namespace std;
//抽象出每个零件的类：1内存条2显卡3CPU
class memory
{
public:
	virtual void store() = 0;
};

class videocard
{
public:
	virtual void display() = 0;
};

class CPU
{
public:
	virtual void calculate() = 0;
};
//抽象出电脑类 传入 三个零件的指针 提供 工作的函数
class computer
{
public:
	computer(CPU* cpu, videocard* vc, memory* mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}
	//提供工作的函数:零件工作
	void work()
	{
		m_cpu->calculate();

		m_vc->display();

		m_mem->store();

	}
	//析构函数释放三个电脑零件
	~computer()
	{
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		if (m_mem != NULL)
		{
			delete m_mem;
			m_mem = NULL;
		}
		if (m_vc != NULL)
		{
			delete m_vc;
			m_vc = NULL;
		}


	}

private:
	CPU* m_cpu;
	videocard* m_vc;
	memory* m_mem;
	
};
//具体零件厂商
// intel
class intelcpu :public CPU
{
public:
	virtual void calculate()
	{
		cout << "intel的cpu" << endl;
	}
};
class intelvideocard :public videocard
{
public:
	virtual void display()
	{
		cout << "intel的显卡" << endl;
	}
};
class intelmemory :public memory
{
public:
	virtual void store()
	{
		cout << "intel的内存" << endl;
	}
};
//联想
class lenovocpu :public CPU
{
public:
	virtual void calculate()
	{
		cout << "lenovo的cpu" << endl;
	}
};
class lenovovideocard :public videocard
{
public:
	virtual void display()
	{
		cout << "lenovo的显卡" << endl;
	}
};
class lenovomemory :public memory
{
public:
	virtual void store()
	{
		cout << "lenovo的内存" << endl;
	}
};

//不同零件的厂商组装电脑
void test01()
{
	//第一台电脑
	CPU* Intelcpu = new intelcpu;
	videocard* intelcard = new intelvideocard;
	memory* intelmem = new intelmemory;
	//创建第一台电脑
	computer* com1 = new computer(Intelcpu, intelcard, intelmem);
	com1->work();
	delete com1;

	cout << "-----------------------" << endl;
	//创建第二台电脑
	computer* com2 = new computer(new lenovocpu, new lenovovideocard, new lenovomemory);
	com2->work();
	delete com2;


}

int main()
{
	test01();
	system("pause");

	return 0;

}