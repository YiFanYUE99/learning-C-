#include <iostream>
using namespace std;
#include "point.h"//用到了点类和圆类，需要包含它们的头文件
#include "circle.h"
//案例2 判断点在圆内圆上还是圆外
// 点类
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
//};//记得加分号不然报错
//圆类
//class circle
//{
//private:
//	int m_R;
//	//定义圆心坐标
//	//在类中可以让另一个类作为本类成员
//	point m_Center;
//public:
//	//设置半径
//	void setR(int r)
//	{
//		m_R = r;
//	}
//	int getR()
//	{
//		return m_R;
//	}
//	//设置圆心
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
//判断点和圆的关系
void isincircle(circle& c, point& p)
{
	//计算两点间距离的平方
	int dis=
	(c.getcenter().getX() - p.getX())* (c.getcenter().getX() - p.getX()) + (c.getcenter().getY() - p.getY()) * (c.getcenter().getY() - p.getY());
	//计算半径平方
	int R2 = c.getR() * c.getR();
	//判断关系
	if (dis == R2)
	{
		cout << "点在圆上" << endl;
	}
	else if (dis > R2)
	{
		cout << "点在圆外" << endl;
	}
	else
	{
		cout << "点在圆内" << endl;
	}
}
int main()
{
	//设置点
	point p;
	p.setX(20);
	p.setY(10);
	//设置圆
	circle c;
	c.setR(10);
	//先设圆心
	point center;
	center.setX(10);
	center.setY(10);
	c.setCenter(center);

	//判断是否在圆上
	isincircle(c, p);

	system("pause");

	return 0;

}