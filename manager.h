#pragma once
#include <iostream>
using namespace std;
#include"worker.h"
//��ͨԱ����,������
class manager:public worker
{
public:
	//���캯��
	manager(int id, string name, int did);

	virtual void showinfo();//virtual ���п���
	//��ȡ��λ����
	virtual string getdepname();

};
