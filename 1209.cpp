#include <iostream>
using namespace std;
//1.2.1#define定义宏常量后不能修改;在最上方,无需加上数据类型
#define nianlin 7
int main()//一个项目只能有一个main
{
	cout << "YueYiFan" << endl;//是L不是一
	/*多
	行
	注
	释*/
	//1.1变量创建的方法
	int a = 9;//a是标识符，10是变量

	cout << "a=" << a << endl;

	cout << "你" << nianlin << "岁" << endl;
	
	//1.2.2const修饰的变量,修饰后即为常量不能更改
	const int month = 12;

	cout << "现在已经" << month << "月了";
	
	//1.4标识符；尽量让标识符能代表变量意义
	int _1d = 30;
	int _1D = 40;
	//1.4不能int1D
	cout << _1d << _1D << endl;

	//2.1整型;
	long b = 9;
	short c = 9;
	long long d = 9;

	//2.2sizeof
	cout << "short占用的内存空间为" << sizeof(short) << endl;
	cout << "b占用的内存空间为" << sizeof(b) << endl;

	//2.3实型(默认小数是双精度double;故要在数字后加上f以表示该数是float)
	float f1 = 3.14159268f;

	double d1 = 3.1415926;

	//2.3科学计数法输出
	float f2 = 4e-2;//4的-2次方，输出0.04
	cout << f2 << endl;
	//2.3最多显示六位有效数字
	cout << f1 << endl;
	cout << d1 << endl;
	//2.3查看占用的内存空间
	cout << sizeof(f1) << endl;//float4个
	cout << sizeof(d1) << endl;//doule8个
	//2.4字符型
	char ch = 'Z';//注意创建字符型一定要是！单引号！；单引号内只能有一个字符
	cout << ch << endl;
	//查看字符型的ASCII编码
	cout << (int)ch << endl;//a是97,z是122,A是65，Z是90

	//2.5转义字符
	cout << "\\" << endl;//要两个\\输出一个
	cout << "aaa\tYYF" << endl;//\t可以使语句对齐
	cout << "aaaaaa\tYYF" << endl;
	//2.6字符串型
	//①C风格字符串
	char str[] = "YUEYIFAN";//等号左标识符名后有[]；等号后双引号（与字符型不同）
	cout << str << endl;
	//②C++风格字符串
	string str2 = "YUEYIFAN";
	cout << str2 << endl;

	//2.6布尔数据类型bool
	bool flag = true;//bool定义数据结构类型为bool
	cout << flag << endl;//输出1表示true实质上是1

	flag = false;
	cout << flag << endl;//即使不用bool开头定义，0也代表假

	cout << sizeof(bool) << endl;//bool所占内存空间为1

	//2.8数据的输入
	//2.8.1输入整型
	int m = 0;
	cout << "给m赋值" << endl;
	cin >> m;
	cout << "整型变量m=" << m << endl;

	//2.8.2输入实型（浮点型）
	float n = 3.14f;
	cout << "给n赋值" << endl;
	cin >> n;
	cout << "浮点型变量n=" << n << endl;

	//2.8.3输入字符型
	char cha = 'a';
	cout << "给字符型变量cha赋值" << endl;
	cin >> cha;
	cout << "字符型变量cha=" << cha << endl;

	//2.8.4字符串型
	string strin = "aha";
	cout << "给字符串赋值" << endl;
	cin >> strin;
	cout << "字符串型变量strin=" << strin << endl;
	//2.8.5布尔型
	bool boo = true;
	cout << "给bool赋值" << endl;
	cin >> boo;
	cout << "bool值为" << boo << endl;



	system("pause");

	return 0;

}
//1.1变量：用于快速读取内存；；不要在同一段函数中重复定义一个变量
//1.2常量：用于记录程序中不可更改的数据
//1.2.1#define宏常量，写在最上；1.2.2或者用const加在变量前使该变量变为常量
//1.3关键字，C++中预先保留的单词，不能用它定义常变量63个:int if return 等
//1.4标识符命名规则:1.不可以是关键字；2.仅能由①字母②数字③下划线组成；3.第一个字符必须为字母或者下划线（第一个字符不能是数字）4.区分大小写
// 2.数据类型：给变量分配一个合适的内存空间
// 2.1整型：①int4字节+-2^31②short短整型2字节+-2^15③long长整型4字节+-2^31④long long长整型8字节+-2^31
// 2.1当超出最大范围出错；编译器下方一小块会变红；short<int<=long<=long long
// 2.2sizeof关键字：统计数据类型所占内存大小
// 2.3实型：表示小数①单精度float(4个字节，7位有效数字)②双精度double（8字节，15-16位有效数字）
// float和numpy中不同
// 2.4字符型char balabala='a';(单引号内只有！！一！！个字符）；占用一个字节
// 2.4字符型变量是转化成ASCII编码放入存储单元
// 2.5转义字符：表示不能显示出来的ASCII字符；
// \n换行，\\反斜杠,\t水平制表符
// 2.6字符串型:①C风格②C++风格
// 2.7布尔类型：真1或者假0
// 2.8数据的输入cin

