//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
// C++对C语言增强和扩展
////1、全局变量检测增强  C++检测出重定义
//int a;
////int a = 10;
//
////2、函数检测增强:返回值检测、形参类型检测、函数调用参数个数
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
////3、类型转换检测增强
//void test02()
//{
//	char* p = (char*)malloc(64);
//}
//
////4、struct增强:C++可以放函数，创建结构体变量，可以简化关键字 struct
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
//	cout << "p的age = " << p.age << endl;//p的age = 17
//}
//
////5、bool类型扩展  C语言下 没有这个类型  C++有bool类型
//bool flag = true; // bool类型:代表真和假  true  ---- 真(1)  false  ---- 假(0)
//void test04()
//{
//	cout << sizeof(bool) << endl; //结果是1个字节
//	//flag = false;
//	flag = 100; //将非0的数都转为1
//	cout << flag << endl;//1
//}
//
////6、三目运算符增强
//void test05()
//{
//	int a = 10;
//	int b = 20;
//	printf("ret = %d\n", a > b ? a : b);//20
//	(a > b ? a : b) = 100; // C++下返回的是变量  b = 100
//	//a > b ? a : b = 100;//注意区别
//	printf("a = %d\n", a);//10
//	printf("b = %d\n", b);//100
//}
//
////7、const增强
////全局const和C语言结论一致
//const int m_A = 100;
//void test06()
//{
//	//m_A = 200;
//	//int * p = (int *)&m_A;
//	//*p = 200;
//
//	//局部const
//	const int m_B = 100;
//	//m_B = 200;
//	int* p = (int*)&m_B;//相当于：int temp = m_B;int* p = &temp;
//	//当对const修饰的局部变量取地址时，编译器会给变量分配临时内存空间temp，
//	//p指针指向的是temp
//	*p = 200;//修改的是temp
//	cout << "m_B = " << m_B << endl;//100
//	int arr[m_B]; //C++下const修饰的变量称为常量 ，可以初始化数组
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