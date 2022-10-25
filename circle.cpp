#include "circle.h"
//源文件实现
//删去声明class等内容，仅留下函数的实现
//实现前加上circle:: shift tab缩进


void circle::setR(int r)
{
	m_R = r;
}
int circle::getR()
{
	return m_R;
}
//设置圆心
void circle::setCenter(point center)
{
	m_Center = center;
}
point circle::getcenter()
{
	return m_Center;
}

