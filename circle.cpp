#include "circle.h"
//Դ�ļ�ʵ��
//ɾȥ����class�����ݣ������º�����ʵ��
//ʵ��ǰ����circle:: shift tab����


void circle::setR(int r)
{
	m_R = r;
}
int circle::getR()
{
	return m_R;
}
//����Բ��
void circle::setCenter(point center)
{
	m_Center = center;
}
point circle::getcenter()
{
	return m_Center;
}

