#pragma once
//ͨ��������
#include<iostream>
using namespace std;
template<class T>
class myarray
{
public:
	myarray(int capacity)
	{
		cout << "myarray���вι������" << endl;
		this->m_capacity = capacity;
		this->m_size = 0;
		this->pAddress = new T[this->m_capacity];
	}
	//��������
	myarray(const myarray& arr)
	{
		cout << "myarray�Ŀ����������" << endl;
		this->m_capacity = arr.m_capacity;
		this->m_size = arr.m_size;

		//ָ��Ҫ���
		this->pAddress = new T[arr.m_capacity];
		//��arr���ݶ���������
		for (int i = 0; i < this->m_size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];

		}

	}

	//operator��ֹǳ����
	myarray& operator=(const myarray& arr)
	{
		cout << "myarray��operator����" << endl;
		//���ж�ԭ�������Ƿ������ݣ���������ͷ�
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;//���ͷ�
			this->pAddress = NULL;
			this->m_capacity = 0;
			this->m_size = 0;
		}
		//���
		this->m_capacity = arr.m_capacity;
		this->m_size = arr.m_size;
		this->pAddress = new T[arr.m_capacity];
		for (int i = 0; i < this->m_size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];

		}
		return *this;//��������

	}
	//β�巨
	void push_back(const T& val)
	{
		//�ж������Ƿ���ڴ�С
		if (this->m_capacity == this->m_size)
		{
			return;
		}
		this->pAddress[this->m_size] = val;//����ĩβ���봫���ֵ

		this->m_size++;//���������С

	}
	//βɾ��
	void pop_back()
	{
		//�û����ʲ������һ��Ԫ�ؼ�Ϊβɾ���߼�ɾ��
		if (this->m_size == 0)//�����С���ܵ���0
		{
			return;
		}
		this->m_size--;
	}

	//ͨ���±귽ʽ���������Ԫ��
	T& operator[](int index)//����T������ֵ������
	{
		return this->pAddress[index];
	}
	//������������
	int getcapacity()
	{
		return this->m_capacity;
	}
	//���������С
	int getsize()
	{
		return this->m_size;
	}

	//��������
	~myarray()
	{
		cout << "������������" << endl;
		if (this->pAddress != NULL)
		{
			delete[]this->pAddress;
		}
	}
private:
	T* pAddress;//ָ��ָ��������ٵ���ʵ����

	int m_capacity;//��������

	int m_size;//�����С
};