//#include <iostream>
//using namespace std;
//
//using����
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
//	//1��using����
//	//using KingGlory::sunwukongId ;  
//
//	//��using������ �ͽ�ԭ��ͬʱ���֣�������������
//	cout << sunwukongId << endl;//2
//
//}
//
//void test02()
//{
//	int sunwukongId = 2;
//	//2��using����ָ��
//	using namespace KingGlory;
//	cout << sunwukongId << endl;//2
//	using namespace LOL;
//	//��using����ָ����ͽ�ԭ��ͬʱ���֣�����ʹ�þͽ�
//	//��using����ָ���ж������Ҫ�������� ����
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