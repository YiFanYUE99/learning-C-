#include"employee.h"
//���캯��
employee::employee(int id, string name, int did)
{
	this->m_id = id;
	this->m_name = name;
	this->m_depid = did;
}


void employee::showinfo()//virtual ����
{
	cout << "ְ����ţ�" << this->m_id
		<< "\tְ������" << this->m_name
		<< "\t��λ" << this->getdepname()
		<< "\t��λְ����ɾ��������" << endl;
}
//��ȡ��λ����
string employee::getdepname()
{
	return string("Ա��");
}