#pragma once//防止头文件重复包含
#include<iostream>//包含输入输出流的头文件
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
	workerManager();//仅声明：构造函数
	//展示菜单
	void show_menu();
	//退出系统
	void exitsystem();

	//记录职工人数
	int m_empnum;

	//记录职工数组指针
	worker ** m_emparray;

	//添加职工
	void add_emp();

	//保存文件
	void save();

	//读取文件前判断文件是否为空
	bool m_fileisempty;
	
	//统计文件中人数
	int get_empnum();

	//初始化员工
	void init_emp();


	//显示职工
	void show_emp();

	//删除职工
	void del_emp();

	//判断职工是否存在，存在返回职工在数组中的位置，不存在返回-1
	int isexist(int id);

	//修改职工
	void mod_emp();

	//查找职工的函数
	void find_emp();

	//**按照职工编号排序(有点问题)
	void sort_emp();
	
	//清空文件
	void clean_file();

	~workerManager();//仅声明：析构函数
};
