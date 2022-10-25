//5.2二维数组:4种定义方式
// 二维数组的数组名：①查看二维数组所占内存空间；②获取二维数组首地址
#include <iostream>
using namespace std;
int main()
{
	////①第一种定义方式
	//int arr[2][3];//定义一个两行三列的数组
	//arr[0][0] = 1;
	//arr[0][1] = 2;
	//arr[0][2] = 3;
	//arr[1][0] = 4;
	//arr[1][1] = 5;
	//arr[1][2] = 6;
	////遍历每个元素；嵌套循环打印矩阵和python不同
	//for (int i = 0; i < 2; i++)
	//{
	//	for (int j = 0; j < 3; j++)
	//	{
	//		cout << arr[i][j]<<" ";
	//	}
	//	cout << endl;
	//}
	////推荐②第二种定义方式;和python不同，这里都是大括号，没有方括号
	//int arr2[2][3] =
	//{
	//	{1,2,3},
	//	{4,5,6}
	//};
	////遍历每个元素；嵌套循环打印矩阵和python不同
	//for (int i = 0; i < 2; i++)
	//{
	//	for (int j = 0; j < 3; j++)
	//	{
	//		cout << arr2[i][j] << " ";
	//	}
	//	cout << endl;
	//}
	////③第三种定义方式（第二种方式的基础上省去括号）
	//int arr3[2][3] = { 1,2,3,4,5,6 };//电脑可以自行分行
	////遍历每个元素；嵌套循环打印矩阵和python不同
	//for (int i = 0; i < 2; i++)
	//{
	//	for (int j = 0; j < 3; j++)
	//	{
	//		cout << arr3[i][j] << " ";
	//	}
	//	cout << endl;
	//}
	////④第四种定义方式（省去行数或者列数）
	//int arr4[][3] = { 1,2,3,4,5,6 };
	//for (int i = 0; i < 2; i++)
	//{
	//	for (int j = 0; j < 3; j++)
	//	{
	//		cout << arr3[i][j] << " ";
	//	}
	//	cout << endl;
	//}

	//cout << "二维数组占用的内存空间" << sizeof(arr) << endl;//每个int占4个字节
	//cout << "二维数组第一行占用的内存空间" << sizeof(arr[0]) << endl;//第一行占用12个字节
	//
	////与python不同，不能用arr[][0]来查看第一列
	//cout << "二维数组的行数" << sizeof(arr) / sizeof(arr[0]) << endl;
	//cout << "二维数组列数" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
	//
	////数组的内存首地址
	//cout << "二维数组内存首地址" <<arr<< endl;
	//cout << "二维数组第一个行地址" << arr[0] << endl;
	//cout << "二维数组第一个元素的首地址" << &arr[0][0] << endl;//要打&arr[][]
	
	//练习：考试成绩：输出三名同学语数英总成绩：列为语数英成绩，行为每个人的成绩
	int arr5[3][3] =
	{
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};
	//添加人名
	string names[3] = { "张三","李四","王五" };
	for (int i = 0; i < 3; i++)
	{
		int sum = 0;
		for (int j = 0; j < 3; j ++ )
		{
			sum += arr5[i][j];
		}
		cout << names[i] << "总分" << sum << endl;
	}

	
	
	system("pause");

	return 0;

}



