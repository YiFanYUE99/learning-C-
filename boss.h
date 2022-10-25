#pragma once
#include <iostream>
using namespace std;
#include"worker.h"
//普通员工类,仅声明
class boss :public worker
{
public:
	//构造函数
	boss(int id, string name, int did);

	virtual void showinfo();//virtual 可有可无
	//获取岗位名称
	virtual string getdepname();

};