//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
// C++��C������ǿ����չ
////1��ȫ�ֱ��������ǿ  C++�����ض���
//int a;
////int a = 10;
//
////2�����������ǿ:����ֵ��⡢�β����ͼ�⡢�������ò�������
//int getRectS(int w, int h)
//{
//
//	return w * h;
//}
//void test01()
//{
//	printf("%d\n", getRectS(10, 10));//100
//}
//
////3������ת�������ǿ
//void test02()
//{
//	char* p = (char*)malloc(64);
//}
//
////4��struct��ǿ:C++���Էź����������ṹ����������Լ򻯹ؼ��� struct
//struct Person
//{
//	int age;
//	void func()
//	{
//		age++;
//	}
//};
//void test03()
//{
//	Person p;
//	p.age = 17;
//	p.func();
//	cout << "p��age = " << p.age << endl;//p��age = 17
//}
//
////5��bool������չ  C������ û���������  C++��bool����
//bool flag = true; // bool����:������ͼ�  true  ---- ��(1)  false  ---- ��(0)
//void test04()
//{
//	cout << sizeof(bool) << endl; //�����1���ֽ�
//	//flag = false;
//	flag = 100; //����0������תΪ1
//	cout << flag << endl;//1
//}
//
////6����Ŀ�������ǿ
//void test05()
//{
//	int a = 10;
//	int b = 20;
//	printf("ret = %d\n", a > b ? a : b);//20
//	(a > b ? a : b) = 100; // C++�·��ص��Ǳ���  b = 100
//	//a > b ? a : b = 100;//ע������
//	printf("a = %d\n", a);//10
//	printf("b = %d\n", b);//100
//}
//
////7��const��ǿ
////ȫ��const��C���Խ���һ��
//const int m_A = 100;
//void test06()
//{
//	//m_A = 200;
//	//int * p = (int *)&m_A;
//	//*p = 200;
//
//	//�ֲ�const
//	const int m_B = 100;
//	//m_B = 200;
//	int* p = (int*)&m_B;//�൱�ڣ�int temp = m_B;int* p = &temp;
//	//����const���εľֲ�����ȡ��ַʱ���������������������ʱ�ڴ�ռ�temp��
//	//pָ��ָ�����temp
//	*p = 200;//�޸ĵ���temp
//	cout << "m_B = " << m_B << endl;//100
//	int arr[m_B]; //C++��const���εı�����Ϊ���� �����Գ�ʼ������
//}
//
//int main() 
//{
//	//test01();
//	//test03();
//	//test04();
//	//test05();
//	test06();
//	system("pause");
//	return 0;
//}