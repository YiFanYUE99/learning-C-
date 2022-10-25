#pragma once
//通用数组类
#include<iostream>
using namespace std;
template<class T>
class myarray
{
public:
	myarray(int capacity)
	{
		cout << "myarray的有参构造调用" << endl;
		this->m_capacity = capacity;
		this->m_size = 0;
		this->pAddress = new T[this->m_capacity];
	}
	//拷贝构造
	myarray(const myarray& arr)
	{
		cout << "myarray的拷贝构造调用" << endl;
		this->m_capacity = arr.m_capacity;
		this->m_size = arr.m_size;

		//指针要深拷贝
		this->pAddress = new T[arr.m_capacity];
		//将arr数据都拷贝过来
		for (int i = 0; i < this->m_size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];

		}

	}

	//operator防止浅拷贝
	myarray& operator=(const myarray& arr)
	{
		cout << "myarray的operator调用" << endl;
		//先判断原来堆区是否有数据，如果有先释放
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;//先释放
			this->pAddress = NULL;
			this->m_capacity = 0;
			this->m_size = 0;
		}
		//深拷贝
		this->m_capacity = arr.m_capacity;
		this->m_size = arr.m_size;
		this->pAddress = new T[arr.m_capacity];
		for (int i = 0; i < this->m_size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];

		}
		return *this;//返回自身

	}
	//尾插法
	void push_back(const T& val)
	{
		//判断容量是否等于大小
		if (this->m_capacity == this->m_size)
		{
			return;
		}
		this->pAddress[this->m_size] = val;//数组末尾插入传入的值

		this->m_size++;//更新数组大小

	}
	//尾删法
	void pop_back()
	{
		//用户访问不到最后一个元素即为尾删，逻辑删除
		if (this->m_size == 0)//数组大小不能等于0
		{
			return;
		}
		this->m_size--;
	}

	//通过下标方式访问数组的元素
	T& operator[](int index)//返回T类型数值的引用
	{
		return this->pAddress[index];
	}
	//返回数组容量
	int getcapacity()
	{
		return this->m_capacity;
	}
	//返回数组大小
	int getsize()
	{
		return this->m_size;
	}

	//析构函数
	~myarray()
	{
		cout << "析构函数调用" << endl;
		if (this->pAddress != NULL)
		{
			delete[]this->pAddress;
		}
	}
private:
	T* pAddress;//指针指向堆区开辟的真实数组

	int m_capacity;//数组容量

	int m_size;//数组大小
};