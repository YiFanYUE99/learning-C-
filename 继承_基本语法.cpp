#include <iostream>
using namespace std;
//继承是面向对象的三大特性之一（封装、继承、多态）
//共有性质，也有特性;用于减少重复代码
//语法class 子类（派生类）：继承类 父类（基类）
//普通实现页面
//Java页面
//class Java
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册(公共头部)" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图（公共底部）" << endl;
//	}
//	void left()
//	{
//		cout << "JAVA\PYTHON\C++(公共列表）" << endl;
//	}
//	void content()
//	{
//		cout << "JAVA视频" << endl;
//	}
//};
////python页面
//class python
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册(公共头部)" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图（公共底部）" << endl;
//	}
//	void left()
//	{
//		cout << "JAVA\PYTHON\C++(公共列表）" << endl;
//	}
//	void content()
//	{
//		cout << "python视频" << endl;
//	}
//};


//继承实现页面
//公共页面
class Basepage
{
public:
	void header()
	{
		cout << "首页、公开课、登录、注册(公共头部)" << endl;
	}
	void footer()
	{
		cout << "帮助中心、交流合作、站内地图（公共底部）" << endl;
	}
	void left()
	{
		cout << "JAVA\PYTHON\C++(公共列表）" << endl;
	}
};
//JAVA页面
class Java:public Basepage
{
public:
	void content()
	{
		cout << "JAVA学科视频" << endl;
	}
};
class python :public Basepage
{
public:
	void content()
	{
		cout << "python学科视频" << endl;
	}
};
void test01()
{
	cout << "JAVA下载视频页面如下： " << endl;
	Java ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();
	cout << "----------------------------" << endl;
	cout << "python下载视频页面如下： " << endl;
	python py;
	py.header();
	py.footer();
	py.left();
	py.content();
}
int main()
{
	test01();
	system("pause");

	return 0;

}