//5.数组：一个集合，里面存放了a.相同类型的数据元素；数组是由b.连续的内存位置组成的。
//5.1一维数组
//一维数组数据名的用途：1.可以统计整个数组在内存中的长度sizeof。2.可以获取数组在内存中的首个地址。
//数组名是常量不可以进行赋值
//5.1.2冒泡排序


#include <iostream>
using namespace std;
int main()
{
	//第一种方法
	int arr[5];//定义一个整型的长度为5的数组,先不写元素
	arr[0] = 10;//定义数组中每个元素的值，下标从0开始
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;
	
	//第二种方法
	int arr2[5] = { 10,20,30,40,50 };//如果赋值没有赋满，会用0来填补剩余数据
	//利用循环输出数组中的元素
	for (int i = 0; i < 5; i++)
	{
		cout << arr2[i] << endl;
	}


	//第三种方法
	int arr3[] = { 90,80,70,60,50,40,30,20,10 };//不写数组长度，但写出所有的元素
	//利用循环输出数组中的元素
	for (int i = 0; i < 9; i++)
	{
		cout << arr3[i] << endl;
	}

	
	cout<<sizeof(arr)<<endl;//查看数组在内存中的空间
	cout << sizeof(arr[0]) << endl;//查看单个元素占用空间
	cout << sizeof(arr) / sizeof(arr[0]) << endl;//查看数组长度


	cout << arr << endl;//查看数组在内存中的首地址（16进制）
	
	cout << (int)arr << endl;//查看数组在内存中的首地址（10进制）
	cout << (int)&arr[0] << endl;//查看第一个元素内存的首地址（和数组首地址是一样的）
	cout << (int)&arr[1] << endl;//数组的每个元素之间内存相差4

	//练习：5只小猪称体重,输出最终的体重
	int arr4[5];
	for (int i = 0; i < 5; i++)//一定不要忘记定义int i；
	{
		cin >> arr4[i];
	}
	int max = arr4[0];
	for (int j = 0; j < 5; j++)
	{
		if (arr4[j] > max)
		{
			max = arr4[j];
		}
	}
	cout << max << endl;

	//练习2：数组逆置;要设置一个中间变量temp
	int arr5[5];
	for (int i = 0; i < 5; i++)
	{
		cin >> arr5[i];
	}
	int start = 0;
	int end = sizeof(arr5) / sizeof(arr5[0])-1;
	int sum = sizeof(arr5) / sizeof(arr5[0]) ;

	while (start < end)
	{
		int temp = arr5[start];
		arr5[start] = arr5[end];
		arr5[end] = temp;
		start++;
		end--;
	}
	for (int i = 0; i < sum ; i++)
	{
		cout << arr5[i] << endl;
	}
	

	//5.1.2冒泡排序（最简单的排序算法）
	//升序排列
	//1.先找到最大的数：比较两个相邻的元素，如果第一个比第二个大，则交换它们；
	//2.对数组所有的元素进行①中比较，此时最后一个数就是最大值。
	//3.重复以上步骤，直到所有元素从小到大排序为止
	int arr6[8];//对8个数的数组升序排列
	//先输入8个数
	for (int i = 0; i < 8; i++)
	{
		cin >> arr6[i];
	}
	//冒泡排序需要排8-1=7次
	for (int m = 7; m > 0; m--)
	{
		for (int j = 0; j < m; j++)//从第一个元素开始和相邻元素比较，大的放在后面
		{
			if (arr6[j] > arr6[j + 1])
			{
				int temp = arr6[j];
				arr6[j] = arr6[j + 1];
				arr6[j + 1] = temp;
			}
		}

	}
	
	for (int k = 0; k < 8 ; k++)
	{
		cout << arr6[k] << endl;
	}


	system("pause");

	return 0;

}
