#include <iostream>
using namespace std;
#include<map>
//map容器进行插入和删除

void printmap(map<int, int>& m)
{

	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << (*it).first << " " << (*it).second << endl;
	}
	cout << endl;
}

void test01()
{
	map<int, int>m;

	//插入
	//第一种
	m.insert(pair < int, int > (1, 10));
	//第二种
	m.insert(make_pair(2, 20));//不用写模板参数
    //第三种(能看懂就行)
	m.insert(map<int, int>::value_type(3, 30));
	//第四种:不建议，如果不存在某个key值，会随便创造一个，赋值value为0
	m[4] = 40;

	cout << m[5] << endl;//不建议用[]插入数，但可以利用[]访问value值

	printmap(m);

    //删除
	m.erase(m.begin());//删除第一个位置
	printmap(m);

	m.erase(3);//按照key值删除
	printmap(m);

	m.erase(m.begin(), m.end());//区间删除
	m.clear();
	printmap(m);

}


int main()
{
	test01();

	system("pause");

	return 0;

}