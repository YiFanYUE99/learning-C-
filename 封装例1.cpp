#include <iostream>
using namespace std;
//�����������Cube
//������������������
//�ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ����
class cube
{
public:
	//���û�ȡ�������
	//��
	void setL(int L)
	{
		m_L =  L;
	}
	int getL()
	{
		return m_L;
	}
	//��
	void setW(int W)
	{
		m_W = W;
	}
	int getW()
	{
		return m_W;
	}
	//��
	void setH(int H)
	{
		m_H = H;
	}
	int getH()
	{
		return m_H;
	}
	//��ȡ�����
	int calculateA()
	{
		return 2 * m_L * m_H + 2 * m_L * m_W + 2 * m_H * m_W;
	}
	//��ȡ���
	int calculateV()
	{
		return m_L * m_H * m_W;
	}

	//���ó�Ա�����ж������������Ƿ����
	bool issamebyclass(cube &c)
	{
		if (m_L == c.getL() && m_W == c.getW() && m_H == c.getH())
		{
			return true;
		}
		return false;
	}
	
private://˽������
	int m_L;
	int m_H;
	int m_W;

};
//����ȫ�ֺ����ж������������Ƿ����
bool issame(cube &c1, cube &c2)
{
	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
	{
		return true;
	}
	return false;
}
int main()
{
	//����һ��������
	cube c1;
	c1.setL(10);
	c1.setW(90);
	c1.setH(10);
	cout << "���" << c1.calculateA() << endl;
	cout << "�����" << c1.calculateV() << endl;

	//���õڶ���������
	cube c2;
	c2.setH(10);
	c2.setL(10);
	c2.setW(10);

	//ȫ�ֺ����ж������������Ƿ����
	bool ret = issame(c1, c2);
	if (ret)
	{
		cout << "c1��c2���" << endl;
	}
	else
	{
		cout << "c1��c2�����" << endl;
	}
	//��Ա�����ж������������Ƿ����
	bool ret2 = c1.issamebyclass(c2);
	if (ret2)
	{
		cout << "c1��c2���" << endl;
	}
	else
	{
		cout << "c1��c2�����" << endl;
	}



	system("pause");

	return 0;

}