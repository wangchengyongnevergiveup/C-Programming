//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
////����ģ�����ͨ�����������Լ����ù���
////1������ģ�����ͨ����������
//template<class T>
//T myAdd(T a, T b)
//{
//	return a + b;
//}
//
//int myAdd2(int a, int b)
//{
//	return a + b;
//}
//
//void test1()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	//myAdd(a, c); //���ʹ���Զ������Ƶ����ǲ����Է�����ʽ����ת����
//	cout << myAdd2(a, c) << endl; //��ͨ���� ���Է�����ʽ����ת�� 109
//}
//
////2������ģ�����ͨ�����ĵ��ù���
//template<class T>
//void myPrint(T a, T b)
//{
//	cout << "����ģ�����" << endl;
//}
//
////����ģ��ͨ���������Ͳ�����ͬ�ĺ���,ͨ������ģ������ĺ�����Ϊģ�庯��
////void myPrint(int a ,int b)
////{
////cout << "����ģ�����" << endl;
////}
////
////void myPrint(double a ,double b)
////{
////cout << "����ģ�����" << endl;
////}
//
//template<class T>
//void myPrint(T a, T b, T c)
//{
//	cout << "����ģ��(T a, T b ,T c)����" << endl;
//}
//
//void myPrint(int a, int b)
//{
//	cout << "��ͨ��������" << endl;
//}
//
//void test2()
//{
//	//1���������ģ�����ͨ���������Ե��ã���ô���ȵ�����ͨ����
//	int a = 10;
//	int b = 20;
//	myPrint(a, b);//��ͨ��������
//
//	//2�������ǿ�Ƶ��ú���ģ�壬����ʹ�ÿ�ģ������б�
//	myPrint<>(a, b);//����ģ�����
//
//	//3������ģ��Ҳ���Է�����������
//	myPrint(a, b, 10);//����ģ��(T a, T b ,T c)����
//
//	//4���������ģ���ܲ������õ�ƥ�䣬��ô����ʹ�ú���ģ��
//	char c = 'c';
//	char d = 'd';
//	myPrint(c, d);//����ģ�����
//}
//
//int main() 
//{
//	//test1();
//	test2();
//	system("pause");
//	return 0;
//}