#include"boss.h"
//���캯��
boss::boss(int id, string name, int did)
{
	this->m_id = id;
	this->m_name = name;
	this->m_depid = did;
}


void boss::showinfo()//virtual ����
{
	cout << "ְ����ţ�" << this->m_id
		<< "\tְ������" << this->m_name
		<< "\t��λ" << this->getdepname()
		<< "\t��λְ�𣺵��ϰ�" << endl;
}
//��ȡ��λ����
string boss::getdepname()
{
	return string("�ϰ�");
}