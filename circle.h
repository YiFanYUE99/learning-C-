#pragma once
#include<iostream>
using namespace std;
//ɾȥʵ�֣�������������
//ͷ�ļ�����
#include "point.h"//�õ���point����Ҫ������ͷ�ļ�
class circle
{
private:
	int m_R;

	point m_Center;
public:

	void setR(int r);
	int getR();

	void setCenter(point center);

	point getcenter();

};