//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
////����������
//void test01()
//{
//	//int &ref = 10;
//
//	const int& ref = 10; 
//	//�൱��д�� int temp = 10; const int &ref = temp;
//	int* p = (int*)&ref;
//	*p = 10000;
//	cout << ref << endl;//10000
//}
//
////�������õ�ʹ�ó��� ���κ����е��βΣ���ֹ�����
//void showValue(const int& a)
//{
//	//a = 100000;
//	cout << "a = " << a << endl;
//
//}
//void test02()
//{
//	int a = 100;
//	showValue(a);//a = 100
//}
//
//int main() 
//{
//	test01();
//	test02();
//
//	system("pause");
//	return 0;
//}