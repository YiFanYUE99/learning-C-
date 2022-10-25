#include <iostream>
using namespace std;
//多态分为：
//1静态多态：函数地址早绑定，编译阶段确定
//2动态多态：函数地址晚绑定，运行阶段确定 virtual;条件①要有继承关系②子类 重写 父类 中的虚virtual函数

//（虚函数）重写：1函数返回值类型 2函数名 3参数列表 完全一致

//重载函数名可以相同 参数不能完全相同

//动态多态使用：父类的指针或者引用指向子类对象

//动物类
class Animal
{
public:
	virtual void speak()//地址晚绑定
	{
		cout << "动物在说话" << endl;
	}
};
//猫类
class Cat :public Animal
{
public:
	void speak()
	{
		cout << "猫在说话" << endl;
	}
};
class Dog :public Animal
{
public:
	void speak()
	{
		cout << "狗在说话" << endl;
	}
};
//执行说话的函数
//函数的地址早绑定：静态多态 动物 说话
//想要猫说话，要地址晚绑定 动态多态 Animal speak加virtual
void dospeak(Animal &animal)//Animal&animal=cat;(允许父子类型的转换)
{
	animal.speak();
}

void test01()//会输出 动物 在说话 不是 猫 在说话
{
	
	Cat cat;
	dospeak(cat);
	
	Dog dog;
	dospeak(dog);

	//Animal ani;
	//dospeak(ani);
}
void test02()
{

	cout << sizeof(Animal) << endl;//指针都占8个字节 64位；4个字节 32位
}

int main()
{
	//test01();
	test02();
	system("pause");

	return 0;

}

//子类 重写了 父类的虚函数
//父类的虚函数内容 替换为 子类的虚函数地址
//当 父类指针 指向 子类对象，发生多态
