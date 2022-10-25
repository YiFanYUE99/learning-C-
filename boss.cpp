#include"boss.h"
//构造函数
boss::boss(int id, string name, int did)
{
	this->m_id = id;
	this->m_name = name;
	this->m_depid = did;
}


void boss::showinfo()//virtual 无需
{
	cout << "职工编号：" << this->m_id
		<< "\t职工姓名" << this->m_name
		<< "\t岗位" << this->getdepname()
		<< "\t岗位职责：当老板" << endl;
}
//获取岗位名称
string boss::getdepname()
{
	return string("老板");
}