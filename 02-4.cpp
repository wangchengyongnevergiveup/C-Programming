//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
////函数重载
////函数重载条件:1 在同一个作用域;2 函数名称相同;3 参数个数、类型、顺序不同
//
////class Person
////{
////public:
////	void func()   成员函数而不是全局函数(作用域不同)
////	{
////	}
////};
//
//void func()
//{
//	cout << "func()调用" << endl;
//}
//
//void func(int a)
//{
//	cout << "func(int a)调用" << endl;
//}
//
//void func(double a)
//{
//	cout << "func(double a)调用" << endl;
//}
//
//void func(int a, double b)
//{
//	cout << "func(int a ,double b)调用" << endl;
//}
//
//void func(double a, int b)
//{
//	cout << "func(double a, int b)调用" << endl;
//}
//
////返回值可不可以作为函数重载的条件 答案：不可以
////int func(int a, double b)
////{
////	cout << "func(int a ,double b)调用" << endl;
////}
//
//void test01()
//{
//	func(1, 3.14);
//}
//
////函数重载中：引用的两个版本
////加const和不加const的引用可以作为重载条件
//
////void myFunc(int a)
////{
////	cout << "myfunc(int a )调用" << endl;
////}//需要避免二义性出现
//
//void myFunc(int& a) // int & a  = 10;
//{
//	cout << "myfunc(int &a )调用" << endl;
//}
//void myFunc(const int& a) // const int &a = 10;
//{
//	cout << "myfunc( const int &a )调用" << endl;
//}
//
//void test02()
//{
//	int a = 10;
//	myFunc(a);//myfunc(int &a )调用
//	myFunc(10);//myfunc( const int &a )调用
//}
//
////函数重载碰到默认参数  注意避免二义性出现
//void func2(int a, int b = 10)
//{
//
//}
//void func2(int a)
//{
//
//}
//
//void test03()
//{
//	func2(10, 10);
//	//func2(10); //出现二义性
//}
//
//int main() 
//{
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//}