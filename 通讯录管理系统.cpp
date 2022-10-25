//ͨѶ¼����ϵͳ�Ĺ���
//�������ϵ�ˣ���ͨѶ¼��������ˣ���Ϣ�������Ա����䡢��ϵ�绰����ͥסַ������¼1000��
//����ʾ��ϵ�ˣ���ʾͨѶ¼��������ϵ����Ϣ
//��ɾ����ϵ�ˣ���������
//�ܲ�����ϵ�ˣ���������
//���޸���ϵ�ˣ���������
//�������ϵ�ˣ����ͨѶ¼��������Ϣ
//���˳�ͨѶ¼
//���裺1.��װ������ʾ����
//2.��main�����е��÷�װ�õĺ���
#include <iostream>
using namespace std;
#define MAX 1000//ͨѶ¼�������1000�ˣ���������֮����Ը���;����곣��ĩβ��Ҫ�ӷֺ�
//�����ϵ�˵Ľṹ��
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

//���ͨѶ¼�Ľṹ��
struct addressbooks
{
	//ͨѶ¼�б������ϵ������
	struct Person personArray[MAX];
	//ͨѶ¼�м�¼��ǰ��ϵ�˸���
	int m_size;

};
//1.�����ϵ��
void addPerson(addressbooks* abs)
{
	//���ж�ͨѶ¼����û
	if (abs->m_size == MAX)
	{
		cout << "ͨѶ¼�������޷���ӣ�" << endl;
		return;
	}
	else//�����ϵ�ˡ��������Ա����䡢�绰��סַ
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
		while (true)//�������Ĳ���1����2�ͱ���
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
		
		//��ͥסַ
		cout << "input home address" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_size].m_address = address;

		//����ͨѶ¼����
		abs->m_size++;


		//��ӳɹ�
		cout << "success" << endl;

		system("pause");
		system("cls");//����


	}
}
//2.��ʾ������ϵ��
void showPerson(addressbooks* abs)
{
	//�ж�ͨѶ¼�������Ƿ�Ϊ0�����Ϊ0����ʾ��¼Ϊ��
	if (abs->m_size == 0)
	{
		cout << "no record" << endl;
	}//�����Ϊ0����ʾ��¼����ϵ��
	else
	{
		for (int i = 0; i < abs->m_size; i++)
		{
			cout << "name: " << abs->personArray[i].m_Name <<"\t";//�Ʊ���ճ�8��λ��
			cout << "gender: " << (abs->personArray[i].m_gender == 1? "male": "female" )<< "\t";//��Ŀ�������ʾ��Ů����12
			cout << "age: " << abs->personArray[i].m_age << "\t";
			cout << "phonenum: " << abs->personArray[i].m_phoneno<<"\t";
			cout << "address: " << abs->personArray[i].m_address << endl;

		}
	}
	system("pause");//�����������
	system("cls");//����
}
//3.ɾ����ϵ�ˣ��ȼ����ϵ���Ƿ���ڣ������ڷ���-1�����ڷ��ؾ���λ��
int isExist(addressbooks* abs, string name)
{
	for (int i = 0; i < abs->m_size; i++)
	{
		if (abs->personArray[i].m_Name == name)
		{
			return i;//�ҵ������򷵻ش����������еı��
		}
	}
	return -1;//û�ҵ�����-1
}
//��ɾ��ָ����ϵ��
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
			//����ǰ�ƣ�c++�в���ֱ��ɾ����i�����ݣ�
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_size--;//����ͨѶ¼����Ա��
		cout << "successfully removed" << endl;
	}
	else
	{
		cout << "ERROR" << endl;
	}
}
//4.������ϵ��
void findPerson(addressbooks* abs)
{
	cout << "the person you want to find " << endl;
	string name;
	cin >> name;
	//�ж�ָ������ϵ���Ƿ����ͨѶ¼��
	int ret = isExist(abs, name);
	if (ret != -1)//�ҵ�����ϵ��
	{
		cout << "name:" << abs->personArray[ret].m_Name << "\t";
		cout << "gender" << abs->personArray[ret].m_gender << "\t";
		cout << "age" << abs->personArray[ret].m_age << "\t";
		cout << "phone no." << abs->personArray[ret].m_phoneno << "\t";
		cout << "address" << abs->personArray[ret].m_address << endl;
	}
	else//û�ҵ�����
	{
		cout << "no such person" << endl;
	}
	system("pause");
	system("cls");
}
//5.�޸���ϵ��
void modifyPerson(addressbooks* abs)
{
	cout << "input the person you wanted to modify" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1)//�ҵ�����
	{
		//�޸�����
		string name;
		cout << "input name: " << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;
		
		//�޸��Ա�
		cout << "input gender" << endl;
		cout << "1--male" << endl;
		cout << "2--female" << endl;
		int gender = 0;
		while (true)//����һ��ѭ�������������1����2��������ѭ��
		{
			cin >> gender;
			if (gender == 1 || gender == 2)
			{
				//������ȷ���˳���ѭ��
				abs->personArray[ret].m_gender = gender;
				break;

			}
			cout << "wrong input" << endl;//�������󣬲���һ��2������ѭ����
		}
		
		//�޸�����
		cout << "input age" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[ret].m_age = age;

		//�޸ĵ绰
		cout << "input phone number" << endl;
		string phone;
		cin >> phone;
		abs->personArray[ret].m_phoneno = phone;

		//�޸�סַ
		cout << "input address" << endl;
		string address;
		cin >> address;
		abs->personArray[ret].m_address = address;
		
		//��ʾ�޸ĳɹ�
		cout << "suceessfully modified" << endl;

	}
	else//û�ҵ�����
	{
		cout << "no such a person" << endl;
	}
	//�����������
	system("pause");
	system("cls");
}
//6.�����ϵ�ˣ�ֻ��Ҫ�Ѽ�¼����ϵ����������Ϊ0���ɣ�
void cleanPerson(addressbooks* abs)
{
	abs->m_size = 0;//�¹�ϣ��Ӳ�̾�����ô��յ�
	cout << "mail list cleaned" << endl;
	system("pause");
	system("cls");//�������������
}



 
//�˵�����
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
	//����ͨѶ¼�ṹ�����
	addressbooks abs;
	//��ʼ��ͨѶ¼�е�ǰ��Ա����
	abs.m_size = 0;

	int select = 0;//�����û�ѡ������ı���

	while (true)//����������0�Ͳ����˳�
	{
		//���ò˵�
		showMenu();
		cin >> select;
		switch (select)
		{
		case 1://1.Add a Contact
			addPerson(&abs);//���õ�ַ��������ʵ��
			break;
		case 2://2.Show a Contact
			showPerson(&abs);
			break;
		case 3://3.Remove a Contact;case�����̫���ô���������������Ҫ��break
		{
			//�Ȳ鿴�����Ƿ����
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
	
	system("pause");//�����������

	return 0;

}
