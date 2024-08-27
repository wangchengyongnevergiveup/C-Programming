//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
////引用基本语法
////引用基本语法：类型 &别名 = 原名
//void test01()
//{
//	int a = 10;
//	int& b = a;
//
//	b = 100;
//	cout << "a = " << a << endl;//100
//	cout << "b = " << b << endl;//100
//}
//
//void test02()
//{
//	int a = 10;
//	//int &b; //引用必须要初始化
//	int& b = a;
//
//	//引用一旦初始化后，就不可以引向其他变量
//	int c = 100;
//	//int& b = c;
//	b = c; // 赋值
//
//	cout << "a = " << a << endl;//100
//	cout << "b = " << b << endl;//100
//	cout << "c = " << c << endl;//100
//}
//
////对数组建立引用
//void test03()
//{
//	//1、直接建立引用
//	int arr[10];
//	int(&pArr)[10] = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = 0 + i;
//	}
//	/*for (int i = 0; i < 10; i++)
//	{
//		cout << " " << pArr[i];
//	}
//	cout << endl;*/
//
//	//2、先定义出数组类型，再通过类型定义引用
//	typedef int(ARRAY_TYPE)[10];
//	//类型  &别名 = 原名
//	ARRAY_TYPE& pArr2 = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		cout << " " << pArr2[i];
//	}
//	cout << endl;
//}
//
//int main() 
//{
//	//test01();
//	//test02();
//	test03();
//
//	system("pause");
//	return 0;
//}
