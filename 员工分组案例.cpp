#include <iostream>
using namespace std;
#include<map>
#include<string>
#include<vector>
#include<ctime>

//定义部门编号与对应部门
#define 策划 0
#define 研发 1
#define 美术 2
//员工分组
//指派10个员工去部门工作,随机分配A-J
//员工： 部门 工资
//分部门显示员工信息
//通过multimap进行信息插入key（部门编号）,value（员工）

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
		worker1.m_name = "员工";
		worker1.m_name += nameseed[i];

		worker1.m_salary = rand() % 10000 + 10000;//10000-19999

		v.push_back(worker1);
	}

}

//员工分组
void setgroup(vector<worker>& v, multimap<int, worker>& m)
{
	for(vector<worker>::iterator it=v.begin();it!=v.end();it++)
	{ 

		//产生随机部门编号key,value是具体员工
		int depid = rand() % 3;//0 1 2 
		m.insert(make_pair(depid, *it));
	}
}

//按照组（部门）显示员工
void showworkerbygroup(multimap<int, worker>& m)
{
	cout << "策划部门的信息" << endl;

	multimap<int,worker>::iterator pos=	m.find(策划);
	int count = m.count(策划);
	int index = 0;
	for (; pos != m.end()&&index<count; pos++,index++)
	{
		cout << "姓名" << pos->second.m_name << "工资" << pos->second.m_salary << endl;
	}
	cout << "-----------------------------" << endl;
	cout << "美术部门的信息" << endl;

	pos = m.find(美术);
	count = m.count(美术);
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "姓名" << pos->second.m_name << "工资" << pos->second.m_salary << endl;
	}
	cout << "-----------------------------" << endl;
	cout << "研发部门的信息" << endl;

	pos = m.find(研发);
	count = m.count(研发);
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "姓名" << pos->second.m_name << "工资" << pos->second.m_salary << endl;
	}

}
int main()
{
	//1.创建员工
	vector<worker>vworker;
	createworker(vworker);

	//2.员工分组
	multimap<int, worker>mworker;
	setgroup(vworker, mworker);

	////测试
	//for (vector<worker>::iterator it = vworker.begin(); it != vworker.end(); it++)
	//{
	//	cout << "name:" << (*it).m_name << " " << (*it).m_salary << endl;
	//}
	
	//3.分组显示员工
	showworkerbygroup(mworker);

	system("pause");

	return 0;

}