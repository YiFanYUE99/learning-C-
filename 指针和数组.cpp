#include <iostream>
using namespace std;
//7.7指针和函数
//先创建一个交换函数；改变的是指针指向的值不是指针指向的方向
void swap02(int *p1,int *p2) 
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
//练习：函数创建冒泡排序
void bubble(int* arr, int len)//只能用指针的方式导入数组
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;

			}
		}
	}
}
void printArray(int * arr, int len)//只能用指针的方式导入数组
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
}
int main()
{
	//7.6指针和数组
	//利用指针访问数组中的元素

	int arr[10] = { 9,8,5,3,5,6,7,4,2,1 };
	cout << "第一个元素为：" << arr[0] << endl;
	int* p = arr;//指针p指向arr数组首地址
	cout << "利用指针访问第一个元素： " << *p << endl;
	//利用循环访问指针指向的每个元素
	for (int i = 0; i < 10; i++)
	{
		cout << "利用指针访问第" << i + 1 << "个元素" << *p << endl;
		p++;
	}
	//7.7指针和函数
	// 值传递改变形参不改变实参
	//地址传递;地址传递可以修饰实参，但实参的地址没有改变
	int a = 10;
	int b = 20;
	cout << "&a= " << &a << endl;
	cout << "&b= " << &b << endl;
	swap02(&a, &b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "&a= " << &a << endl;//a和b的内存地址没有变
	cout << "&b= " << &b << endl;

	//练习：对数组进行升序排列（冒泡）
	int arr1[10] = { 10,9,7,5,8,4,3,6,1,2 };
	bubble(arr1, 10);//只能用指针的方式导入数组到函数，但直接输入数组名就可以
	printArray(arr1, 10);

	




	system("pause");

	return 0;

}