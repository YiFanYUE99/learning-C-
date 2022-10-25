#pragma once
#include<iostream>
using namespace std;
class point//头文件中仅需声明即可，把具体操作去掉加分号
{
public:
	void setX(int X);

	int getX();

	void setY(int Y);

	int getY();


private:
	int m_X;
	int m_Y;
};//记得加分号不然报错
