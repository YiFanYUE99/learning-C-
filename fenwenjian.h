#include <iostream>
using namespace std;
// 6.6 函数的分文件编写（4个步骤）
//①创建.h后缀名的头文件
//②创建.cpp后缀名的源文件
//③在头文件中写函数的声明void swap(int a, int b);
//④在原文件中写函数的定义 
//⑤在.h中写上 #include <iostream> using namespace std;
//⑥在.cpp中写上#include "fenwenjian.h"；引号表示自定义的函数
//⑦在需要用到此函数的cpp文件中写上#include "fenwenjian.h"
void swap(int a, int b);

