#pragma once//��ֹͷ�ļ��ظ�����
#include<iostream>//���������������ͷ�ļ�
using namespace std;
#include "worker.h"
#include "employee.h"
#include"boss.h"
#include"manager.h"
#include<fstream>
#define FILENAME "empfile.txt"


class workerManager
{
public:
	workerManager();//�����������캯��
	//չʾ�˵�
	void show_menu();
	//�˳�ϵͳ
	void exitsystem();

	//��¼ְ������
	int m_empnum;

	//��¼ְ������ָ��
	worker ** m_emparray;

	//���ְ��
	void add_emp();

	//�����ļ�
	void save();

	//��ȡ�ļ�ǰ�ж��ļ��Ƿ�Ϊ��
	bool m_fileisempty;
	
	//ͳ���ļ�������
	int get_empnum();

	//��ʼ��Ա��
	void init_emp();


	//��ʾְ��
	void show_emp();

	//ɾ��ְ��
	void del_emp();

	//�ж�ְ���Ƿ���ڣ����ڷ���ְ���������е�λ�ã������ڷ���-1
	int isexist(int id);

	//�޸�ְ��
	void mod_emp();

	//����ְ���ĺ���
	void find_emp();

	//**����ְ���������(�е�����)
	void sort_emp();
	
	//����ļ�
	void clean_file();

	~workerManager();//����������������
};
