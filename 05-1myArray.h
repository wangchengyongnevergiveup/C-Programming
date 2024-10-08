//#pragma once
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
//class MyArray
//{
//public:
//	MyArray(); //默认构造 可以给100容量
//	MyArray(int capacity); //有参构造
//	MyArray(const MyArray& arr); //拷贝构造
//
//	//尾插法
//	void pushBack(int val);
//	//根据位置设置数据
//	void setData(int pos, int val);
//	//根据位置获取数据
//	int getData(int pos);
//	//获取数组容量
//	int getCapcity();
//	//获取数组大小
//	int getSize();
//
//	//析构
//	~MyArray();
//
//
//	//重载[]运算符
//	int& operator[](int index);
//
//
//private:
//	int m_Capacity; //数组容量
//	int m_Size; //数组大小
//	int* pAddress; //真实在堆区开辟的数组的指针
//};