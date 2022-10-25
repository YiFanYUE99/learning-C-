//通讯录管理系统的功能
//①添加联系人：向通讯录中添加新人，信息包括（性别、年龄、联系电话、家庭住址）最多记录1000人
//②显示联系人：显示通讯录中所有联系人信息
//③删除联系人：按照姓名
//④查找联系人：按照姓名
//⑤修改联系人：按照姓名
//⑥清空联系人：清空通讯录中所有信息
//⑦退出通讯录
//步骤：1.封装函数显示界面
//2.在main函数中调用封装好的函数
#include <iostream>
using namespace std;
#define MAX 1000//通讯录保存最多1000人，这样定义之后可以更改;定义宏常量末尾不要加分号
//设计联系人的结构体
struct Person
{
	//name
	string m_Name;
	//gender:1.male2.female
	int m_gender;
	int m_age;
	string m_phoneno;
	string m_address;
};

//设计通讯录的结构体
struct addressbooks
{
	//通讯录中保存的联系人数组
	struct Person personArray[MAX];
	//通讯录中记录当前联系人个数
	int m_size;

};
//1.添加联系人
void addPerson(addressbooks* abs)
{
	//先判断通讯录满了没
	if (abs->m_size == MAX)
	{
		cout << "通讯录已满，无法添加！" << endl;
		return;
	}
	else//添加联系人、姓名、性别、年龄、电话、住址
	{
		//name
		string name;
		cout << "input name" << endl;
		cin >> name;
		abs->personArray[abs->m_size].m_Name = name;
		
		//gender
		cout << "input gender" << endl;
		cout << "1.male" << " 2.female" << endl;
		int gender = 0;
		while (true)//如果输入的不是1或者2就报错
		{
			cin >> gender;
			if (gender == 1 || gender == 2)
			{
				abs->personArray[abs->m_size].m_gender = gender;
				break;
			}
			else 
			{
				cout << "wrong input" << endl;
				break;

			}
		}

		//age
		cout << "input age" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_size].m_age = age;
		
		//phone number
		cout << "input phone number" << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_size].m_phoneno = phone;
		
		//家庭住址
		cout << "input home address" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_size].m_address = address;

		//更新通讯录人数
		abs->m_size++;


		//添加成功
		cout << "success" << endl;

		system("pause");
		system("cls");//清屏


	}
}
//2.显示所有联系人
void showPerson(addressbooks* abs)
{
	//判断通讯录中人数是否为0，如果为0，提示记录为空
	if (abs->m_size == 0)
	{
		cout << "no record" << endl;
	}//如果不为0，显示记录的联系人
	else
	{
		for (int i = 0; i < abs->m_size; i++)
		{
			cout << "name: " << abs->personArray[i].m_Name <<"\t";//制表符空出8个位置
			cout << "gender: " << (abs->personArray[i].m_gender == 1? "male": "female" )<< "\t";//三目运算符显示男女而非12
			cout << "age: " << abs->personArray[i].m_age << "\t";
			cout << "phonenum: " << abs->personArray[i].m_phoneno<<"\t";
			cout << "address: " << abs->personArray[i].m_address << endl;

		}
	}
	system("pause");//按任意键继续
	system("cls");//清屏
}
//3.删除联系人：先检测联系人是否存在；不存在返回-1；存在返回具体位置
int isExist(addressbooks* abs, string name)
{
	for (int i = 0; i < abs->m_size; i++)
	{
		if (abs->personArray[i].m_Name == name)
		{
			return i;//找到此人则返回此人在数组中的编号
		}
	}
	return -1;//没找到返回-1
}
//再删除指定联系人
void deletePerson(addressbooks* abs)
{
	cout << "input the person you want to remove" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		for (int i = ret; i < abs->m_size; i++)
		{
			//数据前移（c++中不能直接删掉第i个数据）
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_size--;//更新通讯录中人员数
		cout << "successfully removed" << endl;
	}
	else
	{
		cout << "ERROR" << endl;
	}
}
//4.查找联系人
void findPerson(addressbooks* abs)
{
	cout << "the person you want to find " << endl;
	string name;
	cin >> name;
	//判断指定的联系人是否存在通讯录中
	int ret = isExist(abs, name);
	if (ret != -1)//找到了联系人
	{
		cout << "name:" << abs->personArray[ret].m_Name << "\t";
		cout << "gender" << abs->personArray[ret].m_gender << "\t";
		cout << "age" << abs->personArray[ret].m_age << "\t";
		cout << "phone no." << abs->personArray[ret].m_phoneno << "\t";
		cout << "address" << abs->personArray[ret].m_address << endl;
	}
	else//没找到此人
	{
		cout << "no such person" << endl;
	}
	system("pause");
	system("cls");
}
//5.修改联系人
void modifyPerson(addressbooks* abs)
{
	cout << "input the person you wanted to modify" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1)//找到此人
	{
		//修改姓名
		string name;
		cout << "input name: " << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;
		
		//修改性别
		cout << "input gender" << endl;
		cout << "1--male" << endl;
		cout << "2--female" << endl;
		int gender = 0;
		while (true)//建立一个循环除非输入的是1或者2否则不跳出循环
		{
			cin >> gender;
			if (gender == 1 || gender == 2)
			{
				//输入正确则退出次循环
				abs->personArray[ret].m_gender = gender;
				break;

			}
			cout << "wrong input" << endl;//输入有误，不是一和2，还在循环中
		}
		
		//修改年龄
		cout << "input age" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[ret].m_age = age;

		//修改电话
		cout << "input phone number" << endl;
		string phone;
		cin >> phone;
		abs->personArray[ret].m_phoneno = phone;

		//修改住址
		cout << "input address" << endl;
		string address;
		cin >> address;
		abs->personArray[ret].m_address = address;
		
		//提示修改成功
		cout << "suceessfully modified" << endl;

	}
	else//没找到此人
	{
		cout << "no such a person" << endl;
	}
	//按任意键清屏
	system("pause");
	system("cls");
}
//6.清空联系人（只需要把记录的联系人数量重置为0即可）
void cleanPerson(addressbooks* abs)
{
	abs->m_size = 0;//陈冠希的硬盘就是这么清空的
	cout << "mail list cleaned" << endl;
	system("pause");
	system("cls");//按任意键后清屏
}



 
//菜单界面
void showMenu()
{
	cout << "1.Add a Contact" << endl;
	cout << "2.Show a Contact" << endl;
	cout << "3.Remove a Contact" << endl;
	cout << "4.Find a Contact" << endl;
	cout << "5.Modify a Contact" << endl;
	cout << "6.Remove all Contacts" << endl;
	cout << "0.exit" << endl;
}
int main()
{
	//创建通讯录结构体变量
	addressbooks abs;
	//初始化通讯录中当前人员个数
	abs.m_size = 0;

	int select = 0;//创建用户选择输入的变量

	while (true)//这样不输入0就不会退出
	{
		//调用菜单
		showMenu();
		cin >> select;
		switch (select)
		{
		case 1://1.Add a Contact
			addPerson(&abs);//利用地址传递修饰实参
			break;
		case 2://2.Show a Contact
			showPerson(&abs);
			break;
		case 3://3.Remove a Contact;case后代码太长用大括号括起来，不要括break
		{
			//先查看此人是否存在
			cout << "input the contact you want to remove" << endl;
			string name;
			cin >> name;
			if (isExist(&abs, name) == -1)
			{
				cout << "no such person" << endl;
			}
			else
			{
				cout << "person found" << endl;
			}
			system("pause");
			system("cls");
		}
		deletePerson(&abs);
			break;
		case 4://4.Find a Contact
			findPerson(&abs);
			break;
		case 5://5.Modify a Contact
			modifyPerson(&abs);
			break;
		case 6://6.Remove all Contacts
			cleanPerson(&abs);
			break;
		case 0://0.exit
			cout << "welcome to use next time" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}

	}
	
	system("pause");//按任意键继续

	return 0;

}
