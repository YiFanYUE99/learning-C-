#pragma once
#include <iostream>
using namespace std;
#include"worker.h"
//��ͨԱ����,������
class boss :public worker
{
public:
	//���캯��
	boss(int id, string name, int did);

	virtual void showinfo();//virtual ���п���
	//��ȡ��λ����
	virtual string getdepname();

};