//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//#include <string>
//
////��Ա������Ϊ��Ԫ����
//class Building;
//class GoodGay
//{
//public:
//	GoodGay();
//	void visit(); //���Է���building��˽��
//	void visit2(); //�����Է���building��˽��
//
//	Building* m_building;
//};
//
//class Building
//{
//	//��GoodGay���е�visit��Ա������Ϊ��Ԫ
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
//void GoodGay::visit2()
//{
//	cout << "�û������ڷ��ʣ� " << this->m_building->m_SittingRoom << endl;
//	//�û������ڷ��ʣ� ����
//	//cout << "�û������ڷ��ʣ� " << this->m_building->m_BedRoom << endl;
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