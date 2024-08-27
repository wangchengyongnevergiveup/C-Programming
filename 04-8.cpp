//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//#include <string>
//
////全局函数做友元函数
//class Building
//{
//	//利用friend关键字让全局函数goodGay作为本类好朋友，可以访问私有成员
//	friend void goodGay(Building* buliding);
//
//public:
//	Building()
//	{
//		this->m_SittingRoom = "客厅";
//		this->m_BedRoom = "卧室";
//	}
//
//public:
//	string m_SittingRoom; //客厅
//private:
//	string m_BedRoom; //卧室
//};
//
////好基友全局函数  可以访问Building的私有属性
//void goodGay(Building* buliding)
//{
//	cout << "好基友正在访问：" << buliding->m_SittingRoom << endl;//好基友正在访问：客厅
//	cout << "好基友正在访问：" << buliding->m_BedRoom << endl;//好基友正在访问：卧室
//}
//
//void test1()
//{
//	Building buliding;
//	goodGay(&buliding);
//}
//
//int main() 
//{
//	test1();
//	system("pause");
//	return 0;
//}