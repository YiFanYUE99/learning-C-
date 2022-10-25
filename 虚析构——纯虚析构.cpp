#include <iostream>
using namespace std;
//子类中没有堆区数据可以不写（纯）虚析构；纯虚析构属于抽象类
class Animal
{
public:
	Animal()
	{
		cout << "ani构造函数调用" << endl;
	}

	////利用虚析构解决 父类指针释放子类时释放不干净
	//virtual ~Animal()//
	//{
	//	cout << "ani虚析构函数调用" << endl;
	//}

	//纯虚析构
	//有了纯虚析构后，这个类也属于抽象类，无法实例化对象
	virtual ~Animal() = 0;//类内声明，类外实现


	virtual void speak() = 0;//纯虚函数
};
Animal::~Animal()//纯虚析构的实现
{
	cout << "ani纯虚析构函数调用" << endl;

}


class cat :public Animal
{
public:
	cat(string name)
	{
		cout << "cat构造函数调用" << endl;
		m_Name = new string(name);
	}
	virtual void speak()
	{
		cout << *m_Name<<"猫说话" << endl;
	}
	virtual ~cat()//析构函数释放堆区属性，没有释放；需要改为虚析构
	//利用虚析构解决 父类指针释放子类时释放不干净
	{
		if (m_Name != NULL)
		{
			cout << "cat析构函数调用" << endl;
			delete m_Name;
			m_Name = NULL;
		}
	}
	string* m_Name;//猫名在堆区
};
void test01()
{
	Animal* animal = new cat("Tom");
	animal->speak();
	//父类指针在析构是，不会调用子类中的析构函数，导致子类如果有堆区属性会内存泄漏
	delete animal;
}

int main()
{
	test01();
	system("pause");

	return 0;

}