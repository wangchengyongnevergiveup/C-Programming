//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//#include "05-1myArray.h"
//
//void test1()
//{
//	MyArray arr;
//	for (int i = 0; i < 10; i++)
//	{
//		arr.pushBack(i);
//	}
//
//	for (int i = 0; i < arr.getSize(); i++)
//	{
//		cout << " " << arr.getData(i) ;
//	}
//	cout << endl;
//
//	MyArray arr2(arr);
//	for (int i = 0; i < arr2.getSize(); i++)
//	{
//		cout << " " << arr2.getData(i);
//	}
//	cout << endl;
//
//	arr.setData(0, 1000);
//	cout << "arr 0��λ������Ϊ�� " << arr.getData(0) << endl;
//	for (int i = 0; i < 10; i++)
//	{
//		cout << " " << arr.getData(i) ;
//	}
//	cout << endl;
//
//	cout << "��������Ϊ�� " << arr.getCapcity() << endl;
//	cout << "�����СΪ�� " << arr.getSize() << endl;
//
//	//����[]��ʽȥ���������е�Ԫ�أ��ɶ���д
//	arr[0] = 10000;
//	cout << arr[0] << endl;
//}
//
//int main() 
//{
//	test1();
//	system("pause");
//	return 0;
//}