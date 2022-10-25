#include <iostream>
using namespace std;
//1如果 普通函数 函数模板 均可调用，有限调用普通函数
//2通过 空模板参数列表 强制 调用函数模板
//3函数模板 也可以 重载
//4如果函数模板 更好的匹配 ，优先调用 函数模板

//最好不要又有函数模板，又有普通函数

//普通函数 (只留下声明 还是会调用 普通函数)
void myprint(int a, int b)
{
	cout << "调用的普通函数" << endl;
}

//函数模板(与普通函数名相同)
template<class T>
void myprint(T a, T b)
{
	cout << "调用的模板" << endl;
}
//void myprint(T a, T b,T c)
//{
//	cout << "调用的模板" << endl;
//}


void test01()
{
	int a = 10;
	int b = 20;

	myprint(a, b);//会调用普通函数

	//通过空模板参数列表，强制调用函数模板
	myprint<>(a, b);
	//myprint(a, b, 100);//发生重载

	//更好地匹配，调用模板
	char c1 = 'a';
	char c2 = 'b';
	myprint(c1, c2);
}


int main()
{
	test01();
	system("pause");

	return 0;

}