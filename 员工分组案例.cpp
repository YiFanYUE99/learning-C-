#include <iostream>
using namespace std;
#include<map>
#include<string>
#include<vector>
#include<ctime>

//���岿�ű�����Ӧ����
#define �߻� 0
#define �з� 1
#define ���� 2
//Ա������
//ָ��10��Ա��ȥ���Ź���,�������A-J
//Ա���� ���� ����
//�ֲ�����ʾԱ����Ϣ
//ͨ��multimap������Ϣ����key�����ű�ţ�,value��Ա����

class worker
{
public:
	string m_name;
	int m_salary;
};
void createworker(vector<worker>&v)
{
	string nameseed = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++)
	{
		worker worker1;
		worker1.m_name = "Ա��";
		worker1.m_name += nameseed[i];

		worker1.m_salary = rand() % 10000 + 10000;//10000-19999

		v.push_back(worker1);
	}

}

//Ա������
void setgroup(vector<worker>& v, multimap<int, worker>& m)
{
	for(vector<worker>::iterator it=v.begin();it!=v.end();it++)
	{ 

		//����������ű��key,value�Ǿ���Ա��
		int depid = rand() % 3;//0 1 2 
		m.insert(make_pair(depid, *it));
	}
}

//�����飨���ţ���ʾԱ��
void showworkerbygroup(multimap<int, worker>& m)
{
	cout << "�߻����ŵ���Ϣ" << endl;

	multimap<int,worker>::iterator pos=	m.find(�߻�);
	int count = m.count(�߻�);
	int index = 0;
	for (; pos != m.end()&&index<count; pos++,index++)
	{
		cout << "����" << pos->second.m_name << "����" << pos->second.m_salary << endl;
	}
	cout << "-----------------------------" << endl;
	cout << "�������ŵ���Ϣ" << endl;

	pos = m.find(����);
	count = m.count(����);
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "����" << pos->second.m_name << "����" << pos->second.m_salary << endl;
	}
	cout << "-----------------------------" << endl;
	cout << "�з����ŵ���Ϣ" << endl;

	pos = m.find(�з�);
	count = m.count(�з�);
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "����" << pos->second.m_name << "����" << pos->second.m_salary << endl;
	}

}
int main()
{
	//1.����Ա��
	vector<worker>vworker;
	createworker(vworker);

	//2.Ա������
	multimap<int, worker>mworker;
	setgroup(vworker, mworker);

	////����
	//for (vector<worker>::iterator it = vworker.begin(); it != vworker.end(); it++)
	//{
	//	cout << "name:" << (*it).m_name << " " << (*it).m_salary << endl;
	//}
	
	//3.������ʾԱ��
	showworkerbygroup(mworker);

	system("pause");

	return 0;

}