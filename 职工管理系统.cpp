#include <iostream>
using namespace std;
#include "workerManager.h"//Ϊ�����Լ�д��������ʹ����Ҫ����ͷ�ļ�
#include"worker.h"
#include"employee.h"
#include "boss.h"
#include "manager.h"

//ְ������ϵͳ�Ĺ���
//1.�˳��������
//2.����ְ����Ϣ
//3.��ʾְ����Ϣ
//4.ɾ����ְԱ��
//5.�޸�ְ����Ϣ
//6.����ְ����Ϣ
//7.���������
//8.��������ĵ�


//1.������Ŀ


//2.������Ŀ����������Ŀ������ļ�

//3���������ࣺ���û���ͨ�Ĳ˵����� ��ְ����ɾ�Ĳ�Ĳ��� ���ļ��Ķ�д����
//������ͷ�ļ���Դ�ļ��·ֱ𴴽�workerManager.h��workerManager.cpp

//4.�˵�����ʵ��

int main()
{
	////���Դ���
	//worker* worker1 = NULL;
	//worker1 = new employee(1, "zhangsan", 1);
	//worker1->showinfo();
	//delete worker1;

	//worker1 = new manager(2, "����", 2);
	//worker1->showinfo();
	//delete worker1;

	//worker1 = new boss(3, "����", 3);
	//worker1->showinfo();
	//delete worker1;


	workerManager vm;

	int choice = 0;//�����洢�û���ѡ��
	while (true)
	{
		



		//����չʾ�˵���Ա����
		vm.show_menu();

		cout << "����ѡ��" << endl;
		cin >> choice;
		switch (choice)
		{
		case 0://�˳��������
			vm.exitsystem();
			break;
		case 1://����ְ����Ϣ
			vm.add_emp();
			break;
		case 2://��ʾְ����Ϣ
			vm.show_emp();
			break;
		case 3://ɾ����ְԱ��
		{
			vm.del_emp();
			break;
		}

		case 4://�޸�ְ����Ϣ
			vm.mod_emp();

			break;
		case 5://����ְ����Ϣ
			vm.find_emp();

			break;
		case 6://���������

			vm.sort_emp();
			break;
		case 7://��������ĵ�
			vm.clean_file();
			break;

		default:
			system("cls");//����
			break;


	    }

	}



	system("pause");

	return 0;

}