//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//#include <string>
//#include "06-3myString.h"
//
////�ַ������װ
//void test1()
//{
//	MyString str = "abc";
//	cout << str << endl;//abc
//	cout << "�����¸�str��ֵ��" << endl;
//
//	cin >> str;//hello
//	cout << "str �µ�ֵΪ�� " << str << endl;//str �µ�ֵΪ�� hello
//
//	MyString str2 = str;
//	cout << "str2 = " << str2 << endl;//str2 = hello
//}
//
//void test2()
//{
//	MyString str = "abcd";
//	MyString str2 = "aaa";
//	str2 = str;
//	cout << "str2 = " << str2 << endl;//str2 = abcd
//	cout << "str2[0] = " << str2[0] << endl;//str2[0] = a
//	str2[0] = 'z';
//	cout << "str2[0]��Ϊz�������  " << str2 << endl;//str2[0]��Ϊz�������  zbcd
//
//	MyString str3 = "abc";
//	MyString str4 = "def";
//	MyString str5 = str3 + str4;
//	MyString str6 = str5 + "ghe";
//	cout << "str5 = " << str5 << endl;//str5 = abcdef
//	cout << "str6 = " << str6 << endl;//str6 = abcdefghe
//
//	if (str5 == str6)
//	{
//		cout << "str5 == str6" << endl;
//	}
//	else
//	{
//		cout << "str5 != str6" << endl;
//	}
//
//	if (str6 == "abcdefghe")
//	{
//		cout << "str6 = abcdefghe" << endl;
//	}
//	else
//	{
//		cout << "str6 != abcdefghe" << endl;
//	}
//}
//
//
//int main() 
//{
//	//test1();
//	test2();
//	
//	//int a = 10;
//	//cin >> a;
//	//cout << "a  = " << a << endl;
//
//	system("pause");
//	return 0;
//}