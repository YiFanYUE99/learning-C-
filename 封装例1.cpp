#include <iostream>
using namespace std;
//设计立方体类Cube
//求出立方体的面积和体积
//分别用全局函数和成员函数判断两个立方体是否相等
class cube
{
public:
	//设置获取，长宽高
	//长
	void setL(int L)
	{
		m_L =  L;
	}
	int getL()
	{
		return m_L;
	}
	//宽
	void setW(int W)
	{
		m_W = W;
	}
	int getW()
	{
		return m_W;
	}
	//高
	void setH(int H)
	{
		m_H = H;
	}
	int getH()
	{
		return m_H;
	}
	//获取表面积
	int calculateA()
	{
		return 2 * m_L * m_H + 2 * m_L * m_W + 2 * m_H * m_W;
	}
	//获取体积
	int calculateV()
	{
		return m_L * m_H * m_W;
	}

	//利用成员函数判断两个立方体是否相等
	bool issamebyclass(cube &c)
	{
		if (m_L == c.getL() && m_W == c.getW() && m_H == c.getH())
		{
			return true;
		}
		return false;
	}
	
private://私有属性
	int m_L;
	int m_H;
	int m_W;

};
//利用全局函数判断两个立方体是否相等
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
	//设置一个立方体
	cube c1;
	c1.setL(10);
	c1.setW(90);
	c1.setH(10);
	cout << "体积" << c1.calculateA() << endl;
	cout << "表面积" << c1.calculateV() << endl;

	//设置第二个立方体
	cube c2;
	c2.setH(10);
	c2.setL(10);
	c2.setW(10);

	//全局函数判断两个立方体是否相等
	bool ret = issame(c1, c2);
	if (ret)
	{
		cout << "c1和c2相等" << endl;
	}
	else
	{
		cout << "c1和c2不相等" << endl;
	}
	//成员函数判断两个立方体是否相等
	bool ret2 = c1.issamebyclass(c2);
	if (ret2)
	{
		cout << "c1和c2相等" << endl;
	}
	else
	{
		cout << "c1和c2不相等" << endl;
	}



	system("pause");

	return 0;

}