//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
////�����Ĵ��ݷ�ʽ
////1��ֵ����
//void mySwap01(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//	cout << ":::a = " << a << endl;
//	cout << ":::b = " << b << endl;
//}
//
////2����ַ����
//void mySwap02(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
////3�����ô���
//void mySwap03(int& a, int& b) // int &a = a; int &b = b;
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	//mySwap01(a, b);
//	//mySwap02(&a, &b);
//	mySwap03(a, b);
//	cout << "a = " << a << endl;//20
//	cout << "b = " << b << endl;//10
//}
//
////����ע������
//int& func()
//{
//	int a = 10;
//	return a;
//}
//void test02()
//{
//	//1�����ñ�����һ��Ϸ��ڴ�ռ�
//	//int &a = 10;
//
//	//2����Ҫ���ؾֲ�����������
//	int& ref = func();
//	cout << "ref = " << ref << endl;//10
//	cout << "ref = " << ref << endl;//1722386544
//}
//
//int& func2()
//{
//	static int a = 10;
//	return a;
//}
//
//void test03()
//{
//	int& ref = func2();
//	cout << "ref = " << ref << endl;//ref = 10
//	cout << "ref = " << ref << endl;//ref = 10
//	cout << "ref = " << ref << endl;//ref = 10
//	cout << "ref = " << ref << endl;//ref = 10
//
//	//����������ֵ�����ã���ô�����ĵ��ÿ�����Ϊ��ֵ
//	func2() = 1000;
//	cout << "ref = " << ref << endl;//ref = 1000
//}
//
//int main() 
//{
//	//test01();
//	//test02();
//	test03();
//
//	system("pause");
//	return 0;
//}
