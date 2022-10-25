#include <iostream>
using namespace std;
//�����ÿ��������ࣺ1�ڴ���2�Կ�3CPU
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
//����������� ���� ���������ָ�� �ṩ �����ĺ���
class computer
{
public:
	computer(CPU* cpu, videocard* vc, memory* mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}
	//�ṩ�����ĺ���:�������
	void work()
	{
		m_cpu->calculate();

		m_vc->display();

		m_mem->store();

	}
	//���������ͷ������������
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
//�����������
// intel
class intelcpu :public CPU
{
public:
	virtual void calculate()
	{
		cout << "intel��cpu" << endl;
	}
};
class intelvideocard :public videocard
{
public:
	virtual void display()
	{
		cout << "intel���Կ�" << endl;
	}
};
class intelmemory :public memory
{
public:
	virtual void store()
	{
		cout << "intel���ڴ�" << endl;
	}
};
//����
class lenovocpu :public CPU
{
public:
	virtual void calculate()
	{
		cout << "lenovo��cpu" << endl;
	}
};
class lenovovideocard :public videocard
{
public:
	virtual void display()
	{
		cout << "lenovo���Կ�" << endl;
	}
};
class lenovomemory :public memory
{
public:
	virtual void store()
	{
		cout << "lenovo���ڴ�" << endl;
	}
};

//��ͬ����ĳ�����װ����
void test01()
{
	//��һ̨����
	CPU* Intelcpu = new intelcpu;
	videocard* intelcard = new intelvideocard;
	memory* intelmem = new intelmemory;
	//������һ̨����
	computer* com1 = new computer(Intelcpu, intelcard, intelmem);
	com1->work();
	delete com1;

	cout << "-----------------------" << endl;
	//�����ڶ�̨����
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