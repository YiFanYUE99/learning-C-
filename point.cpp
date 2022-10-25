#include "point.h"//包含此函数的头文件
//仅需写函数的实现即可 把class等都删掉，然后point::告诉它这是point函数的实现
//shift tab缩进

void point:: setX(int X)
{
	m_X = X;

}
int point::getX()
{
	return m_X;

}
void point::setY(int Y)
{
	m_Y = Y;

}
int point::getY()
{
	return m_Y;

}

