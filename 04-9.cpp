//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//#include <string>
//
////����Ϊ��Ԫ��
//class Building;
//class GoodGay
//{
//public:
//	GoodGay();
//	void visit();
//
//	Building* m_building;
//};
//
//class Building
//{
//	//��goodGay����Ϊ Building�ĺ����ѣ����Է���˽�г�Ա
//	friend class GoodGay;
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
//	this->m_SittingRoom = "����";
//	this->m_BedRoom = "����";
//}
//
//GoodGay::GoodGay()
//{
//	this->m_building = new Building;
//}
//
//void GoodGay::visit()
//{
//	cout << "�û������ڷ��ʣ� " << this->m_building->m_SittingRoom << endl;
//	//�û������ڷ��ʣ� ����
//	cout << "�û������ڷ��ʣ� " << this->m_building->m_BedRoom << endl;
//	//�û������ڷ��ʣ� ����
//}
//
//void test1()
//{
//	GoodGay gg;
//	gg.visit();
//}
//
//int main() 
//{
//	test1();
//	system("pause");
//	return 0;
//}