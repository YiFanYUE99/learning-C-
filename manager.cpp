#include"manager.h"
//构造函数
manager::manager(int id, string name, int did)
{
	this->m_id = id;
	this->m_name = name;
	this->m_depid = did;
}


void manager::showinfo()//virtual 无需
{
	cout << "职工编号：" << this->m_id
		<< "\t职工姓名" << this->m_name
		<< "\t岗位" << this->getdepname()
		<< "\t岗位职责：听老板的" << endl;
}
//获取岗位名称
string manager::getdepname()
{
	return string("经理");
}