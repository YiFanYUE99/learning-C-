#include <iostream>
using namespace std;
int main()
{
	//4.1.1 if���
	int score = 0;
	cout << "����" << endl;
	cin >> score;
	cout << "������ķ���" << score<<endl;
	//if������Ҫ�ӷֺ�ð�ţ���python��һ��
	if (score > 60)
	{
		cout << "passed" << endl;
	}
	else
	{
		cout << "failed" << endl;
	}

	//������if���
	//һ����Ҫ�������жϣ�0<=score<=60�ȣ���python���ԣ�C++���У��ֳɼ���else if���жϼ���
	int score2 = 0;
	cout << "����" << endl;
	cin >> score2;
	cout << "���ķ���" <<score2<< endl;
	if (score2>100)
	{
		cout << "wrong" << endl;
	}
	else if ( score2 <0)
	{
		cout << "wrong" << endl;
	}
	else if (score2>=60)
	{
		cout << "passed" << endl;
	}
	else
	{
		cout << "failed" << endl;
	}


	//4.1.2��Ŀ�����
	int a = 10;
	int b = 1;
	int c = 0;
	c = (a > b ? a : b) ;
	cout << "c="<< c << endl;//���ؽϴ��a
	(a > b ? a : b) = 100;//��100��ֵ���ϴ��a
	cout << "a=" << a << endl;

	//4.1.3switch��䣨��Ӱ��֣�//�����ж����䵫��ִ��Ч�ʸ�
	cout << "��Ӱ���" << endl;
	int fenshu = 0;
	cin >> fenshu;
	cout << "���Ĵ��" << fenshu << endl;
	switch (fenshu)
	{
	case 10://case��ֻ�������ͻ����ַ���
		cout << "�����Ӱ" << endl;
		break;//���ϸ��������Ƴ���ǰ��֧
	case 9:
		cout << "�����Ӱ" << endl;
		break;
	case 8:
		cout << "����ĵ�Ӱ" << endl;
		break;
	case 7:
		cout << "����ĵ�Ӱ" << endl;
		break;
	case 6:
		cout << "һ���Ӱ" << endl;
		break;
	case 5:
		cout << "һ���Ӱ" << endl;
		break;
	default:
		cout << "��Ƭ" << endl;
		break;
	}


	system("pause");

	return 0;

}

//4.�������̽ṹ����˳��ṹ��ѡ��ṹ��ѭ���ṹ
//4.1ѡ��ṹ
//4.1.1 if��䣺������Ҫ�ӷֺ�ð��
//����ֻ��ifû��else��û��else���ǵ���if���;������if ��else if��else if��else
//4.1.2��Ŀ�����;���Դ������ż�����ֵ�� a>b?a:b ���a>b���ر���a�����򷵻ر���b 
//4.1.3 switch���:switch(case){case ����/�ַ���: break;case: break; default: break;}

