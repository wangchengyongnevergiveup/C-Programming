//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//#include <string>
//
////成员函数作为友元函数
//class Building;
//class GoodGay
//{
//public:
//	GoodGay();
//	void visit(); //可以访问building的私有
//	void visit2(); //不可以访问building的私有
//
//	Building* m_building;
//};
//
//class Building
//{
//	//让GoodGay类中的visit成员函数作为友元
//	friend void GoodGay::visit();
//
//public:
//	Building();
//	string m_SittingRoom;
//
//private:
//	string m_BedRoom;
//};
//
//Building::Building()
//{
//	this->m_SittingRoom = "客厅";
//	this->m_BedRoom = "卧室";
//}
//
//GoodGay::GoodGay()
//{
//	this->m_building = new Building;
//}
//
//void GoodGay::visit()
//{
//	cout << "好基友正在访问： " << this->m_building->m_SittingRoom << endl;
//	//好基友正在访问： 客厅
//	cout << "好基友正在访问： " << this->m_building->m_BedRoom << endl;
//	//好基友正在访问： 卧室
//}
//
//void GoodGay::visit2()
//{
//	cout << "好基友正在访问： " << this->m_building->m_SittingRoom << endl;
//	//好基友正在访问： 客厅
//	//cout << "好基友正在访问： " << this->m_building->m_BedRoom << endl;
//}
//
//void test1()
//{
//	GoodGay gg;
//	gg.visit();
//	gg.visit2();
//}
//
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}