#include "workerManager.h"



workerManager::workerManager()
{
	
	ifstream ifs;//�����ļ���
	ifs.open(FILENAME, ios::in);//���ļ�
	//1����ȡ�ļ�ʱ�ļ�������
	if (!ifs.is_open())
	{
		cout << "�ļ�������" << endl;
		//��ʼ������
		this->m_empnum = 0;//����Ϊ0
		this->m_emparray = NULL;//ָ��ָ���
		//��ʼ���ļ��Ƿ�Ϊ��
		this->m_fileisempty = true;//�ļ�Ϊ��
		ifs.close();//�ر��ļ�
		return;
	}
	//2���ļ����ڲ���û�м�¼��û�����ݣ�
	char ch;//char���ַ�ָ��
	ifs >> ch;//�ļ�����ǰ���Ѿ�����
	if (ifs.eof())//eof�ļ���û����end of file
	{
		cout << "�ļ�Ϊ�գ�" << endl;
		//��ʼ������
		this->m_empnum = 0;//����Ϊ0
		this->m_emparray = NULL;//ָ��ָ���
		//��ʼ���ļ��Ƿ�Ϊ��
		this->m_fileisempty = true;//�ļ�Ϊ��
		ifs.close();//�ر��ļ�
		return;
	}
	//3�ļ����ڲ��Ҽ�¼����
	int num = this->get_empnum();
	//cout << "ְ������Ϊ��" << num << endl;
	this->m_empnum = num;

	//���ٿռ�
	this->m_emparray = new worker * [this->m_empnum];
	//���ļ��е����ݴ浽������
	this->init_emp();
	//for (int i = 0; i < this->m_empnum; i++)
	//{
	//	cout << "ְ����ţ�" << this->m_emparray[i]->m_id 
	//		<< "ְ��������" << this->m_emparray[i]->m_name
	//		<< "���ű�ţ�" << this->m_emparray[i]->m_depid<<
	//	    endl;
	//}
}
//ͳ���ļ�������
int workerManager::get_empnum()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);//���ļ� ���ļ�

	int id;
	string name;
	int did;
	int num = 0;
	while (ifs>>id&&ifs>>name&&ifs>>did)//һ��һ�ж�
	{
		num++;
	}
	return num;
}


void workerManager::show_menu()
{
	cout << "----------------------" << endl;
	cout << "ְ������ϵͳ�Ĺ���" << endl;
	cout << "0.�˳��������" << endl;
	cout << "1.����ְ����Ϣ" << endl;
	cout << "2.��ʾְ����Ϣ" << endl;
	cout << "3.ɾ����ְԱ��"  <<endl;
	cout << "4.�޸�ְ����Ϣ" << endl;
	cout << "5.����ְ����Ϣ" << endl;
	cout << "6.���������" << endl;
	cout << "7.��������ĵ�" << endl;
	cout << "________________________" << endl;
}

//�˳�ϵͳ
void workerManager::exitsystem()
{
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0);//�˳�����
}
//���ְ��
void workerManager::add_emp()
{
	cout << "�������ְ��������" << endl;
	int addnum = 0;
	cin >> addnum;//�û����������

	if (addnum > 0)
	{
		//��������¿ռ�Ĵ�С
		int newsize = this->m_empnum + addnum;//�¿ռ�����=ԭ����¼����+��������

		//�����¿ռ�
		worker** newspace = new worker * [newsize];
		//��ԭ���ռ������ݿ������¿ռ���
		if (this->m_emparray != NULL)
		{
			for (int i = 0; i< this->m_empnum; i++)
			{
				newspace[i] = this->m_emparray[i];
			}
			
	    }
		//�������������
		for (int i = 0; i < addnum; i++)
		{
			//ְ�����
			int id;
			//ְ������
			string name;
			//����ѡ��
			int dselect;
			cout << "�������" << i + 1 << "����ְ����ţ�" << endl;
			cin >> id;
			cout << "�������" << i + 1 << "����ְ��������" << endl;
			cin >> name;

			cout << "��ѡ���ְ����λ��" << endl;
			cout << "1��ͨԱ��" << endl;
			cout << "2����" << endl;
			cout << "3�ϰ�" << endl;
			cin >> dselect;

			worker* worker = NULL;//��ָ���¼Ϊ��
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
			//��������ְ��ָ�뱣�浽������
			newspace[this->m_empnum + i] = worker;
		}
		//�ͷ�ԭ�пռ�
		delete[]this->m_emparray;

		//�����¿ռ�ָ��
		this->m_emparray = newspace;
		//�����µ�ְ������
		this->m_empnum = newsize;

		//����ְ����λ�յı�־
		this->m_fileisempty = false;

		//��ʾ��ӳɹ�
		cout << "��ӳɹ�" << addnum << "����ְ��" << endl;

		//�������ݵ��ļ���
		this->save();

	
	}
	else
	{
		cout << "������������" << endl;
	}
	//������������ص��ϼ�Ŀ¼
	system("pause");
	system("cls");

}

//�����ļ�
void workerManager::save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);//������ķ�ʽ���ļ�--д�ļ�

	//��ÿ���˵�����д�뵽�ļ���
	for (int i = 0; i < this->m_empnum; i++)
	{
		ofs << this->m_emparray[i]->m_id << " "
			<< this->m_emparray[i]->m_name << " "
			<< this->m_emparray[i]->m_depid << endl;
	}
	//�ر��ļ�
	ofs.close();

}

//��ʼ��Ա��
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
		if (did == 1)//��ְͨ��
		{
			worker1 = new employee(id, name, did);
		}
		else if (did == 2)//����
		{
			worker1 = new manager(id, name, did);
		}
		else if (did == 3)//�ϰ�
		{
			worker1 = new boss(id, name, did);
		}
		this->m_emparray[index] = worker1;//��0��λ�÷ŵ�һ����
		index++;
	}
	//�ر��ļ�
	ifs.close();
}

//��ʾְ��
void workerManager::show_emp()
{
	//�ж��ļ��Ƿ�Ϊ��
	if (this->m_fileisempty)//��������Ϊ�ļ������ڻ��ǿյ�
	{
		cout << "�ļ������ڻ��ǿյ�" << endl;
	}
	else
	{
		for (int i = 0; i < m_empnum; i++)
		{
			//���ö�̬���ó���ӿ�
			this->m_emparray[i]->showinfo();
		}
	}
	//�������������
	system("pause");
	system("cls");
}

//ɾ��ְ��:ɾ�����ݵı���������ǰ��
void workerManager:: del_emp()
{
	if (this->m_fileisempty)
	{
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
	}
	else
	{
		cout << "��������Ҫɾ����ְ�����" << endl;
		int id = 0;
		cin >> id;

		int index = this->isexist(id);

		if (index != -1)//ְ�����ڣ���Ҫɾ��
		{
			//����ǰ��
			for (int i = index; i < this->m_empnum - 1; i++)
			{
				this->m_emparray[i] = this->m_emparray[i + 1];
			}
			//���������м�¼��Ա����
			this->m_empnum--;
            //ͬ�����µ��ļ���
			this->save();

			cout << "ɾ���ɹ���" << endl;
		}
		else
		{
			cout << "δ�ҵ���ְ��" << endl;
		}
		//���������
		system("pause");
		system("cls");
	}
}

//�ж�ְ���Ƿ���ڣ����ڷ���ְ���������е�λ�ã������ڷ���-1
int workerManager :: isexist(int id)
{
	int index = -1;
	for (int i = 0; i < this->m_empnum; i++)
	{
		if (this->m_emparray[i]->m_id == id)
		{
			//�ҵ�ְ����ʹ��
			index = i;
			break;
		}
	}
	return index;
}

//�޸�ְ��
void workerManager::mod_emp()
{
	if (this->m_fileisempty)
	{
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
	}
	else
	{
		cout << "�����޸�ְ���ı�ţ�" << endl;
		int id;
		cin >> id;
		int ret = this->isexist(id);
		if (ret != -1)
		{
			//���ҵ�����
			delete this->m_emparray[ret];

			int newid = 0;
			string newname = "";
			int dselect = 0;

			cout << "���ҵ�����" << id << "��ְ������������ְ���ţ�" << endl;

			cin >> newid;

			cout << "�������µ�����" << endl;
			cin >> newname;

			cout << "�������µĸ�λ" 
				<<"\t1��ְͨ��"
				<<"\t2����"
				<<"\t3�ϰ�"
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
			//���µ�������
			this->m_emparray[ret] = worker1;
			cout << "�޸ĳɹ�" << endl;

			//���浽�ļ���
			this->save();

		}
		else//δ�ҵ�Ա��
		{
			cout << "���޴���" << endl;
		}

	}
	//�����������
	system("pause");
	system("cls");
}

//����ְ��
void workerManager::find_emp()
{
	if (this->m_fileisempty)
	{
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
	}
	else
	{
		cout << "��������ҵķ�ʽ" << endl;
		cout << "1.��ְ����Ų���" <<
			"\t2.��ְ����������" << endl;

		int select = 0;
		cin >> select;
		if (select == 1)
		{
			//���ձ�Ų�
			int id;
			cout << "������ҵ�ְ�����" << endl;
			cin >> id;

			int ret = isexist(id);
			if (ret != -1)
			{
				//�ҵ�����
				cout << "���ҳɹ���" << endl;
				this->m_emparray[ret]->showinfo();
			}
			else
			{
				cout << "���޴���" << endl;
			}
		}
		else if (select == 2)
		{
			//����������
			string name;
			cout << "��������ҵ�����" << endl;
			cin >> name;
			//�����ж��Ƿ�鵽�ı�־
			bool flag = false;//Ĭ��δ�ҵ�

			for (int i = 0; i < m_empnum; i++)
			{
				if (this->m_emparray[i]->m_name == name)
				{
					cout << "���ҳɹ�" << endl;

					flag = true;//�ҵ���
					//������ʾ��Ϣ�Ľӿ�
					this->m_emparray[i]->showinfo();

				}
				
			}
			if (flag == false)
			{
				cout << "����ʧ�ܲ��޴���" << endl;
			}

		}
		else
		{
			cout << "����ѡ������" << endl;
		}

		//�����������
		system("pause");
		system("cls");

	}
}

//���������
void workerManager::sort_emp()
{
	if (this->m_fileisempty)
	{
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "��ѡ������ʽ" << endl;
		cout << "1.��ְ��������" <<
			"\t2.��ְ���Ž���" << endl;

		int select = 0;
		cin >> select;
		for (int i = 0; i < m_empnum; i++)
		{
			int minormax = i;//������Сֵ�����ֵ
			for (int j = i + 1; j < this->m_empnum; j++)
			{
				if (select == 1)//����
				{
					if (this->m_emparray[minormax]->m_id > this->m_emparray[j]->m_id)
					{
						minormax = j;
					}
				}
				else if(select==2)//����
				{
					if (this->m_emparray[minormax]->m_id < this->m_emparray[j]->m_id)
					{
						minormax = j;
					}
				}
			}
			//�ж�һ��ʼ�϶�����Сֵ�����ֵ�ǲ���һ��ʼ�������Сֵ�����ֵ��������ǽ�������
			if (i != minormax)
			{
				worker* temp = this->m_emparray[i];
				this->m_emparray[i] = this->m_emparray[minormax];
				this->m_emparray[minormax] = temp;
			}
		}
		cout << "�����Ľ��Ϊ" << endl;
		this->save();//���浽�ļ���
		this->show_emp();//չʾ

	}
}

//����ļ�
void workerManager::clean_file()
{
	cout << "ȷ����գ�" << endl;
	cout << "1.ȷ��" << endl;
	cout << "2.����" << endl;

	int select = 0;
	cin >> select;

	if (select == 1)
	{
		//����ļ�
		ofstream ofs(FILENAME, ios::trunc);//ɾ���ļ������´���
		ofs.close();


		if (this->m_emparray != NULL)
		{
			//ɾ��������ÿ��ְ������
			for (int i = 0; i < this->m_empnum; i++)
			{
				delete this->m_emparray[i];
				this->m_emparray[i] = NULL;
			}
			//ɾ������������ָ��
			delete[]this->m_emparray;//����Ҫ��������
			this->m_emparray = NULL;
			this->m_empnum = 0;
			this->m_fileisempty = true;

		}
		cout << "��ճɹ�" << endl;
	}
	//����
	system("pause");
	system("cls");
}


workerManager::~workerManager()//�ͷŶ���
{
	if (this->m_emparray != NULL)
	{
		delete[]this->m_emparray;
		this->m_emparray = NULL;
	}
}