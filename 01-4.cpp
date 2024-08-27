//#include <iostream>
//using namespace std;
//
//using声明
//namespace KingGlory
//{
//	int sunwukongId = 1;
//}
//
//namespace LOL
//{
//	int sunwukongId = 3;
//}
//
//void test01()
//{
//	int sunwukongId = 2;
//
//	//1、using声明
//	//using KingGlory::sunwukongId ;  
//
//	//当using声明与 就近原则同时出现，出错，尽量避免
//	cout << sunwukongId << endl;//2
//
//}
//
//void test02()
//{
//	int sunwukongId = 2;
//	//2、using编译指令
//	using namespace KingGlory;
//	cout << sunwukongId << endl;//2
//	using namespace LOL;
//	//当using编译指令与就近原则同时出现，优先使用就近
//	//当using编译指令有多个，需要加作用域 区分
//	cout << KingGlory::sunwukongId << endl;//1
//	cout << LOL::sunwukongId << endl;//3
//}
//
//int main() 
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}