#pragma once
#include<iostream>
using namespace std;
#include <string>

//ְ��������
class worker
{
public:
	//��ʾ������Ϣ
	virtual void showinfo() = 0;
	//��ȡ��λ����
	virtual string getdepname() = 0;



	//ְ�����
	int m_id;
	//ְ������
	string m_name;
	//���ű��
	int m_depid;

};