#include <iostream>
using namespace std;
#include "point.h"//�õ��˵����Բ�࣬��Ҫ�������ǵ�ͷ�ļ�
#include "circle.h"
//����2 �жϵ���Բ��Բ�ϻ���Բ��
// ����
//class point
//{
//public:
//	void setX(int X)
//	{
//		m_X = X;
//
//	}
//	int getX()
//	{
//		return m_X;
//
//	}
//	void setY(int Y)
//	{
//		m_Y = Y;
//
//	}
//	int getY()
//	{
//		return m_Y;
//
//	}
//
//private:
//	int m_X;
//	int m_Y;
//};//�ǵüӷֺŲ�Ȼ����
//Բ��
//class circle
//{
//private:
//	int m_R;
//	//����Բ������
//	//�����п�������һ������Ϊ�����Ա
//	point m_Center;
//public:
//	//���ð뾶
//	void setR(int r)
//	{
//		m_R = r;
//	}
//	int getR()
//	{
//		return m_R;
//	}
//	//����Բ��
//	void setCenter(point center)
//	{
//		m_Center = center;
//	}
//	point getcenter()
//	{
//		return m_Center;
//	}
//
//};
//�жϵ��Բ�Ĺ�ϵ
void isincircle(circle& c, point& p)
{
	//�������������ƽ��
	int dis=
	(c.getcenter().getX() - p.getX())* (c.getcenter().getX() - p.getX()) + (c.getcenter().getY() - p.getY()) * (c.getcenter().getY() - p.getY());
	//����뾶ƽ��
	int R2 = c.getR() * c.getR();
	//�жϹ�ϵ
	if (dis == R2)
	{
		cout << "����Բ��" << endl;
	}
	else if (dis > R2)
	{
		cout << "����Բ��" << endl;
	}
	else
	{
		cout << "����Բ��" << endl;
	}
}
int main()
{
	//���õ�
	point p;
	p.setX(20);
	p.setY(10);
	//����Բ
	circle c;
	c.setR(10);
	//����Բ��
	point center;
	center.setX(10);
	center.setY(10);
	c.setCenter(center);

	//�ж��Ƿ���Բ��
	isincircle(c, p);

	system("pause");

	return 0;

}