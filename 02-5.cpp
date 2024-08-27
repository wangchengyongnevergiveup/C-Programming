//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//
////externC浅析:实现c++代码能够调用其他c语言代码
////1 告诉编译器：show函数用C语言方式做链接
////extern "C" void show();
//
////2 在test.h中添加代码
//#include "02-5test.h"
//
//void test01()
//{
//	show();//hello world
//	//_Z4showv;在C++中有函数重载会修饰函数名，但是show是c语言文件，因此链接失败
//}
//
//int main() 
//{
//	test01();
//
//	system("pause");
//	return 0;
//}
//
//
//
