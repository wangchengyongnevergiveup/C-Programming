//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//#include <iomanip> //���Ʒ���ʽ�����  ͷ�ļ�
//
////��׼�����
///*
//cout.put() //�򻺳���д�ַ�
//cout.write() //��buffer��дnum���ֽڵ���ǰ������С�
//*/
//void test1()
//{
//	//cout.put('h').put('e');
//
//	char buf[] = "hello world";
//	cout.write(buf, strlen(buf));
//	cout << "hello world" << endl;//hello worldhello world
//}
//
////1��ͨ�� ����Ա���� ��ʽ�����
//void test2()
//{
//	int number = 99;
//	cout.width(20); //ָ�����Ϊ20
//	cout.fill('*'); //���
//	cout.setf(ios::left);  //�����
//	cout.unsetf(ios::dec); //ж��ʮ����
//	cout.setf(ios::hex);  //��װʮ������
//	cout.setf(ios::showbase);  //��ʾ����
//	cout.unsetf(ios::hex);  //ж��ʮ������
//	cout.setf(ios::oct);   //��װ�˽���
//	cout << number << endl;//0143****************
//}
//
////2��ʹ�ÿ��Ʒ���ʽ�����
//void test3()
//{
//	int number = 99;
//	cout << setw(20)     //���ÿ��
//		<< setfill('~')  //�������
//		<< setiosflags(ios::showbase)  //��ʾ����
//		<< setiosflags(ios::left)  //���������
//		<< hex   //��ʾʮ������
//		<< number
//		<< endl;//0x63~~~~~~~~~~~~~~~~
//}
//
//int main() 
//{
//	//test1();
//	//test2();
//	test3();
//	system("pause");
//	return 0;
//}