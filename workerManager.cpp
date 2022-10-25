#include "workerManager.h"



workerManager::workerManager()
{
	
	ifstream ifs;//创建文件流
	ifs.open(FILENAME, ios::in);//读文件
	//1、读取文件时文件不存在
	if (!ifs.is_open())
	{
		cout << "文件不存在" << endl;
		//初始化属性
		this->m_empnum = 0;//人数为0
		this->m_emparray = NULL;//指针指向空
		//初始化文件是否为空
		this->m_fileisempty = true;//文件为空
		ifs.close();//关闭文件
		return;
	}
	//2、文件存在并且没有记录（没有数据）
	char ch;//char是字符指针
	ifs >> ch;//文件流在前面已经创建
	if (ifs.eof())//eof文件里没内容end of file
	{
		cout << "文件为空！" << endl;
		//初始化属性
		this->m_empnum = 0;//人数为0
		this->m_emparray = NULL;//指针指向空
		//初始化文件是否为空
		this->m_fileisempty = true;//文件为空
		ifs.close();//关闭文件
		return;
	}
	//3文件存在并且记录数据
	int num = this->get_empnum();
	//cout << "职工人数为：" << num << endl;
	this->m_empnum = num;

	//开辟空间
	this->m_emparray = new worker * [this->m_empnum];
	//将文件中的数据存到数组中
	this->init_emp();
	//for (int i = 0; i < this->m_empnum; i++)
	//{
	//	cout << "职工编号：" << this->m_emparray[i]->m_id 
	//		<< "职工姓名：" << this->m_emparray[i]->m_name
	//		<< "部门编号：" << this->m_emparray[i]->m_depid<<
	//	    endl;
	//}
}
//统计文件中人数
int workerManager::get_empnum()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);//打开文件 读文件

	int id;
	string name;
	int did;
	int num = 0;
	while (ifs>>id&&ifs>>name&&ifs>>did)//一行一行读
	{
		num++;
	}
	return num;
}


void workerManager::show_menu()
{
	cout << "----------------------" << endl;
	cout << "职工管理系统的功能" << endl;
	cout << "0.退出管理程序" << endl;
	cout << "1.增加职工信息" << endl;
	cout << "2.显示职工信息" << endl;
	cout << "3.删除离职员工"  <<endl;
	cout << "4.修改职工信息" << endl;
	cout << "5.查找职工信息" << endl;
	cout << "6.按编号排序" << endl;
	cout << "7.清空所有文档" << endl;
	cout << "________________________" << endl;
}

//退出系统
void workerManager::exitsystem()
{
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0);//退出程序
}
//添加职工
void workerManager::add_emp()
{
	cout << "输入添加职工的数量" << endl;
	int addnum = 0;
	cin >> addnum;//用户输入的数量

	if (addnum > 0)
	{
		//计算添加新空间的大小
		int newsize = this->m_empnum + addnum;//新空间人数=原来记录人数+新增人数

		//开辟新空间
		worker** newspace = new worker * [newsize];
		//将原来空间下数据拷贝到新空间下
		if (this->m_emparray != NULL)
		{
			for (int i = 0; i< this->m_empnum; i++)
			{
				newspace[i] = this->m_emparray[i];
			}
			
	    }
		//批量添加新数据
		for (int i = 0; i < addnum; i++)
		{
			//职工编号
			int id;
			//职工姓名
			string name;
			//部门选择
			int dselect;
			cout << "请输入第" << i + 1 << "个新职工编号：" << endl;
			cin >> id;
			cout << "请输入第" << i + 1 << "个新职工姓名：" << endl;
			cin >> name;

			cout << "请选择该职工岗位：" << endl;
			cout << "1普通员工" << endl;
			cout << "2经理" << endl;
			cout << "3老板" << endl;
			cin >> dselect;

			worker* worker = NULL;//将指针记录为空
			switch (dselect)
			{
			case 1:
				worker = new employee(id, name, 1);
				break;
			case 2:
				worker = new manager(id, name, 2);
				break;
			case 3:
				worker = new boss(id, name, 3);
				break;
			default:
				break;

			}
			//将创建的职工指针保存到数组中
			newspace[this->m_empnum + i] = worker;
		}
		//释放原有空间
		delete[]this->m_emparray;

		//更改新空间指向
		this->m_emparray = newspace;
		//更新新的职工人数
		this->m_empnum = newsize;

		//更新职工部位空的标志
		this->m_fileisempty = false;

		//提示添加成功
		cout << "添加成功" << addnum << "名新职工" << endl;

		//保存数据到文件中
		this->save();

	
	}
	else
	{
		cout << "输入数据有误" << endl;
	}
	//按任意键清屏回到上级目录
	system("pause");
	system("cls");

}

//保存文件
void workerManager::save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);//用输出的方式打开文件--写文件

	//将每个人的数据写入到文件中
	for (int i = 0; i < this->m_empnum; i++)
	{
		ofs << this->m_emparray[i]->m_id << " "
			<< this->m_emparray[i]->m_name << " "
			<< this->m_emparray[i]->m_depid << endl;
	}
	//关闭文件
	ofs.close();

}

//初始化员工
void workerManager::init_emp()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int did;

	int index = 0;
	while (ifs >> id && ifs >> name && ifs >> did)
	{
		worker* worker1 = NULL;
		if (did == 1)//普通职工
		{
			worker1 = new employee(id, name, did);
		}
		else if (did == 2)//经理
		{
			worker1 = new manager(id, name, did);
		}
		else if (did == 3)//老板
		{
			worker1 = new boss(id, name, did);
		}
		this->m_emparray[index] = worker1;//第0个位置放第一个人
		index++;
	}
	//关闭文件
	ifs.close();
}

//显示职工
void workerManager::show_emp()
{
	//判断文件是否为空
	if (this->m_fileisempty)//上面设置为文件不存在或是空的
	{
		cout << "文件不存在或是空的" << endl;
	}
	else
	{
		for (int i = 0; i < m_empnum; i++)
		{
			//利用多态调用程序接口
			this->m_emparray[i]->showinfo();
		}
	}
	//按任意键后清屏
	system("pause");
	system("cls");
}

//删除职工:删除数据的本质是数据前移
void workerManager:: del_emp()
{
	if (this->m_fileisempty)
	{
		cout << "文件不存在或记录为空" << endl;
	}
	else
	{
		cout << "请输入想要删除的职工编号" << endl;
		int id = 0;
		cin >> id;

		int index = this->isexist(id);

		if (index != -1)//职工存在，需要删掉
		{
			//数据前移
			for (int i = index; i < this->m_empnum - 1; i++)
			{
				this->m_emparray[i] = this->m_emparray[i + 1];
			}
			//更新数组中记录人员个数
			this->m_empnum--;
            //同步更新到文件中
			this->save();

			cout << "删除成功！" << endl;
		}
		else
		{
			cout << "未找到该职工" << endl;
		}
		//任意键清屏
		system("pause");
		system("cls");
	}
}

//判断职工是否存在，存在返回职工在数组中的位置，不存在返回-1
int workerManager :: isexist(int id)
{
	int index = -1;
	for (int i = 0; i < this->m_empnum; i++)
	{
		if (this->m_emparray[i]->m_id == id)
		{
			//找到职工，使得
			index = i;
			break;
		}
	}
	return index;
}

//修改职工
void workerManager::mod_emp()
{
	if (this->m_fileisempty)
	{
		cout << "文件不存在或记录为空" << endl;
	}
	else
	{
		cout << "输入修改职工的编号：" << endl;
		int id;
		cin >> id;
		int ret = this->isexist(id);
		if (ret != -1)
		{
			//查找到此人
			delete this->m_emparray[ret];

			int newid = 0;
			string newname = "";
			int dselect = 0;

			cout << "查找到此人" << id << "号职工，请输入新职工号：" << endl;

			cin >> newid;

			cout << "请输入新的姓名" << endl;
			cin >> newname;

			cout << "请输入新的岗位" 
				<<"\t1普通职工"
				<<"\t2经理"
				<<"\t3老板"
				<< endl;
			cin >> dselect;

			worker* worker1 = NULL;
			switch (dselect)
			{
			case 1:
				worker1 = new employee(newid, newname, dselect);
				break;
			case 2:
				worker1 = new manager(newid, newname, dselect);
				break;
			case 3:
				worker1 = new boss(newid, newname, dselect);
				break;
			default:
				break;
			}
			//更新到数组中
			this->m_emparray[ret] = worker1;
			cout << "修改成功" << endl;

			//保存到文件中
			this->save();

		}
		else//未找到员工
		{
			cout << "查无此人" << endl;
		}

	}
	//按任意键清屏
	system("pause");
	system("cls");
}

//查找职工
void workerManager::find_emp()
{
	if (this->m_fileisempty)
	{
		cout << "文件不存在或记录为空" << endl;
	}
	else
	{
		cout << "请输入查找的方式" << endl;
		cout << "1.按职工编号查找" <<
			"\t2.按职工姓名查找" << endl;

		int select = 0;
		cin >> select;
		if (select == 1)
		{
			//按照编号查
			int id;
			cout << "输入查找的职工编号" << endl;
			cin >> id;

			int ret = isexist(id);
			if (ret != -1)
			{
				//找到此人
				cout << "查找成功！" << endl;
				this->m_emparray[ret]->showinfo();
			}
			else
			{
				cout << "查无此人" << endl;
			}
		}
		else if (select == 2)
		{
			//按照姓名查
			string name;
			cout << "请输入查找的姓名" << endl;
			cin >> name;
			//加入判断是否查到的标志
			bool flag = false;//默认未找到

			for (int i = 0; i < m_empnum; i++)
			{
				if (this->m_emparray[i]->m_name == name)
				{
					cout << "查找成功" << endl;

					flag = true;//找到了
					//调用显示信息的接口
					this->m_emparray[i]->showinfo();

				}
				
			}
			if (flag == false)
			{
				cout << "查找失败查无此人" << endl;
			}

		}
		else
		{
			cout << "输入选项有误" << endl;
		}

		//按任意键清屏
		system("pause");
		system("cls");

	}
}

//按编号排序
void workerManager::sort_emp()
{
	if (this->m_fileisempty)
	{
		cout << "文件不存在或记录为空" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "请选择排序方式" << endl;
		cout << "1.按职工号升序" <<
			"\t2.按职工号降序" << endl;

		int select = 0;
		cin >> select;
		for (int i = 0; i < m_empnum; i++)
		{
			int minormax = i;//声明最小值或最大值
			for (int j = i + 1; j < this->m_empnum; j++)
			{
				if (select == 1)//升序
				{
					if (this->m_emparray[minormax]->m_id > this->m_emparray[j]->m_id)
					{
						minormax = j;
					}
				}
				else if(select==2)//降序
				{
					if (this->m_emparray[minormax]->m_id < this->m_emparray[j]->m_id)
					{
						minormax = j;
					}
				}
			}
			//判断一开始认定的最小值或最大值是不是一开始计算的最小值或最大值，如果不是交换数据
			if (i != minormax)
			{
				worker* temp = this->m_emparray[i];
				this->m_emparray[i] = this->m_emparray[minormax];
				this->m_emparray[minormax] = temp;
			}
		}
		cout << "排序后的结果为" << endl;
		this->save();//保存到文件中
		this->show_emp();//展示

	}
}

//清空文件
void workerManager::clean_file()
{
	cout << "确定清空？" << endl;
	cout << "1.确定" << endl;
	cout << "2.返回" << endl;

	int select = 0;
	cin >> select;

	if (select == 1)
	{
		//清空文件
		ofstream ofs(FILENAME, ios::trunc);//删除文件后重新创建
		ofs.close();


		if (this->m_emparray != NULL)
		{
			//删除堆区的每个职工对象
			for (int i = 0; i < this->m_empnum; i++)
			{
				delete this->m_emparray[i];
				this->m_emparray[i] = NULL;
			}
			//删除堆区的数组指针
			delete[]this->m_emparray;//数组要加中括号
			this->m_emparray = NULL;
			this->m_empnum = 0;
			this->m_fileisempty = true;

		}
		cout << "清空成功" << endl;
	}
	//清屏
	system("pause");
	system("cls");
}


workerManager::~workerManager()//释放堆区
{
	if (this->m_emparray != NULL)
	{
		delete[]this->m_emparray;
		this->m_emparray = NULL;
	}
}