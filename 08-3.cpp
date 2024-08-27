//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
////函数模板和普通函数的区别以及调用规则
////1、函数模板和普通函数的区别
//template<class T>
//T myAdd(T a, T b)
//{
//	return a + b;
//}
//
//int myAdd2(int a, int b)
//{
//	return a + b;
//}
//
//void test1()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	//myAdd(a, c); //如果使用自动类型推导，是不可以发生隐式类型转换的
//	cout << myAdd2(a, c) << endl; //普通函数 可以发生隐式类型转换 109
//}
//
////2、函数模板和普通函数的调用规则
//template<class T>
//void myPrint(T a, T b)
//{
//	cout << "函数模板调用" << endl;
//}
//
////函数模板通过具体类型产生不同的函数,通过函数模板产生的函数称为模板函数
////void myPrint(int a ,int b)
////{
////cout << "函数模板调用" << endl;
////}
////
////void myPrint(double a ,double b)
////{
////cout << "函数模板调用" << endl;
////}
//
//template<class T>
//void myPrint(T a, T b, T c)
//{
//	cout << "函数模板(T a, T b ,T c)调用" << endl;
//}
//
//void myPrint(int a, int b)
//{
//	cout << "普通函数调用" << endl;
//}
//
//void test2()
//{
//	//1、如果函数模板和普通函数都可以调用，那么优先调用普通函数
//	int a = 10;
//	int b = 20;
//	myPrint(a, b);//普通函数调用
//
//	//2、如果想强制调用函数模板，可以使用空模板参数列表
//	myPrint<>(a, b);//函数模板调用
//
//	//3、函数模板也可以发生函数重载
//	myPrint(a, b, 10);//函数模板(T a, T b ,T c)调用
//
//	//4、如果函数模板能产生更好的匹配，那么优先使用函数模板
//	char c = 'c';
//	char d = 'd';
//	myPrint(c, d);//函数模板调用
//}
//
//int main() 
//{
//	//test1();
//	test2();
//	system("pause");
//	return 0;
//}