#include <iostream>
using namespace std;
//C++中的成员可以是另一类的对象，我们称该成员为对象成员

class Phone//设计一个手机类
{
public:

	Phone(string pName)
	{
		m_PName = pName;
		cout << "Phone" << endl;
	}
	string m_PName;//手机品牌名称

};
class Person//人类
{
public:
	Person(string name, string pName) : m_Name(name),m_Phone(pName)
	{
		cout << "Person" << endl;
	}
	string m_Name;
	Phone m_Phone;

};
void test01()//构造时会先构造Phone再构造Person；先释放Person再释放Phone
//析构（释放）顺序与构造顺序相反
{
	Person p("张三", "iPhone Pro");
	cout << p.m_Name << "拿着" << p.m_Phone.m_PName << endl;
    //注意p.m_Phone.m_PName
}
int main()
{
	test01();
	system("pause");

	return 0;

}