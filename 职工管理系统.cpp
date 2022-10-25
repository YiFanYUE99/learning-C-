#include <iostream>
using namespace std;
#include "workerManager.h"//为了让自己写的内容能使用需要包含头文件
#include"worker.h"
#include"employee.h"
#include "boss.h"
#include "manager.h"

//职工管理系统的功能
//1.退出管理程序
//2.增加职工信息
//3.显示职工信息
//4.删除离职员工
//5.修改职工信息
//6.查找职工信息
//7.按编号排序
//8.清空所有文档


//1.创建项目


//2.创建项目：创建新项目再添加文件

//3创建管理类：与用户沟通的菜单界面 对职工增删改查的操作 与文件的读写交互
//首先在头文件和源文件下分别创建workerManager.h和workerManager.cpp

//4.菜单功能实现

int main()
{
	////测试代码
	//worker* worker1 = NULL;
	//worker1 = new employee(1, "zhangsan", 1);
	//worker1->showinfo();
	//delete worker1;

	//worker1 = new manager(2, "李四", 2);
	//worker1->showinfo();
	//delete worker1;

	//worker1 = new boss(3, "王五", 3);
	//worker1->showinfo();
	//delete worker1;


	workerManager vm;

	int choice = 0;//用来存储用户的选项
	while (true)
	{
		



		//调用展示菜单成员函数
		vm.show_menu();

		cout << "输入选项" << endl;
		cin >> choice;
		switch (choice)
		{
		case 0://退出管理程序
			vm.exitsystem();
			break;
		case 1://增加职工信息
			vm.add_emp();
			break;
		case 2://显示职工信息
			vm.show_emp();
			break;
		case 3://删除离职员工
		{
			vm.del_emp();
			break;
		}

		case 4://修改职工信息
			vm.mod_emp();

			break;
		case 5://查找职工信息
			vm.find_emp();

			break;
		case 6://按编号排序

			vm.sort_emp();
			break;
		case 7://清空所有文档
			vm.clean_file();
			break;

		default:
			system("cls");//清屏
			break;


	    }

	}



	system("pause");

	return 0;

}