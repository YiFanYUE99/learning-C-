#pragma once
#include<iostream>
using namespace std;
//删去实现，仅需留下声明
//头文件声明
#include "point.h"//用到了point类需要带上其头文件
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