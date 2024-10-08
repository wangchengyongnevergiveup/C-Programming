//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
////类型转换
////1、静态类型转换  static_cast
//void test1()
//{
//	//允许内置数据类型之间转换
//	char a = 'a';
//	double d = static_cast<double>(a);
//	cout << d << endl;
//}
//
//class Base { virtual void func() {} };
//class Son :public Base { virtual void func() {} };
//class Other {};
//
//void test2()
//{
//	Base* base = NULL;
//	Son* son = NULL;
//
//	//语法：static_cast<目标类型>(原对象)
//	//父子之间的指针或者引用可以转换
//	//将base 转为 Son *   父转子  向下类型转换  不安全
//	Son* son2 = static_cast<Son*> (base);
//	//son  转为 Base*    子转父  向上类型转换  安全
//	Base* base2 = static_cast<Base*>(son);
//	//base 转为Other*
//	//Other * other = static_cast<Other*>(base);  转换无效
//}
//
////动态类型转换  dynamic_cast
//void test3()
//{
//	//不允许内置数据类型之间转换
//	//char c = 'c';
//	//double d = dynamic_cast<double>(c);
//}
//void test4()
//{
//	Base* base = new Son;
//	Son* son = NULL;
//	//将base 转为 Son *  父转子 不安全  如果发生了多态，那么转换总是安全的
//	Son* son2 = dynamic_cast<Son*>(base);
//	//son 转为 Base*  子转父  安全
//	Base* base2 = dynamic_cast<Base*>(son);
//	//base 转 Other*
//	//Other* other = dynamic_cast<Other*>(base); //无法转换
//}
//
////常量转换  const_cast
//void test5()
//{
//	//不可以将非指针或非引用做const_cast转换
//	const int* p = NULL;
//	int* pp = const_cast<int*>(p);
//	const int* ppp = const_cast<const int*>(pp);
//
//	//const int a = 10;
//	//int b = const_cast<int>(a);
//
//	int num = 10;
//	int& numRef = num;
//	const int& num2 = const_cast<const int&>(numRef);
//}
//
////重新解释转换  reinterpret_cast 最不安全一种转换，不建议使用
//void test06()
//{
//	int a = 10;
//	int* p = reinterpret_cast<int*>(a);
//
//	Base* base = NULL;
//	//base 转 Other *
//	Other* other = reinterpret_cast<Other*>(base);
//}
//
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}