#include <iostream>
using namespace std;
//实现通用对数组进行排序的函数
//从大到小
//算法 选择排序
//测试 char数组,int数组

//交换函数模板
template <class T>
void myswap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}
//排序算法
template<class T>
void mysort(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		int max = i;
		for (int j = i + 1; j < len; j++)
		{
			if (arr[max] < arr[j])
			{
				max = j;//更新最大值

			}
		}
		if (max != i)
		{
			//交换max和i元素
			myswap(arr[max], arr[i]);
		}
	}
}
//打印数组的模板
template <class T>
void printA(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
void test01()
{
	//测试char数组
	char charArr[] = "badcfe";
	int num = sizeof(charArr) / sizeof(char);//计算字符串长度
	mysort(charArr, num);
	printA(charArr, num);
}
void test02()
{
	int intArr[] = {999,99,0,1};
	int num = sizeof(intArr) / sizeof(int);
	mysort(intArr, num);
	printA(intArr, num);
	
}



int main()
{
	test01();
	test02();
	system("pause");

	return 0;

}