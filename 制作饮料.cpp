#include <iostream>
using namespace std;
//多态制作不同饮品

//纯虚函数
class adrinking
{
public:
	//煮水
	virtual void Boil() = 0;
	//冲泡
	virtual void Brew() = 0;
	//倒入杯中
	virtual void pour() = 0;
	//加入辅料
	virtual void put() = 0;
	//制作饮品
	void make()
	{
		Boil();
		Brew();
		pour();
		put();
	}

};
//冲泡咖啡
class coffee :public adrinking
{
	void Boil()
	{
		cout << "煮咖啡" << endl;
	}
	void Brew()
	{
		cout << "冲泡咖啡" << endl;
	}
	void pour()
	{
		cout << "倒咖啡" << endl;
	}
	void put()
	{
		cout << "咖啡加辅料" << endl;
	}
};
//冲泡茶
class tea:public adrinking
{
	void Boil()
	{
		cout << "煮水" << endl;
	}
	void Brew()
	{
		cout << "冲泡茶叶" << endl;
	}
	void pour()
	{
		cout << "倒茶" << endl;
	}
	void put()
	{
		cout << "茶加辅料" << endl;
	}
};
void dowork(adrinking*abs)//adrinking*abs=new coffee
{
	abs->make();
}
void test01()//制作咖啡
{
	dowork(new coffee);
}
int main()
{
	test01();
	system("pause");

	return 0;

}