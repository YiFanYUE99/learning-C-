#include"employee.h"
//构造函数
employee::employee(int id, string name, int did)
{
	this->m_id = id;
	this->m_name = name;
	this->m_depid = did;
}


void employee::showinfo()//virtual 无需
{
	cout << "职工编号：" << this->m_id
		<< "\t职工姓名" << this->m_name
		<< "\t岗位" << this->getdepname()
		<< "\t岗位职责：完成经理的任务" << endl;
}
//获取岗位名称
string employee::getdepname()
{
	return string("员工");
}