//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//
////new和delete使用
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person构造函数调用" << endl;
//	}
//	Person(int a)
//	{
//		cout << "Person有参构造调用" << endl;
//	}
//	~Person()
//	{
//		cout << "Person析构函数调用" << endl;
//	}
//};
//
////malloc和new区别:
////malloc和 free属于库函数     new 和delete属于运算符
////malloc不会调用构造函数   new会调用构造函数
////malloc返回void* C++下要强转     new返回创建的对象的指针
//
//void test01()
//{
//	Person* p = new Person;
//	delete p;
//}
//
////注意事项 不要用void*去接受new出来的对象,利用void*无法调用析构函数
//void test02()
//{
//	void* p = new Person;
//	delete p;
//}
//
////利用new开辟数组
//void test03()
//{
//	//int * pInt = new int[10];
//	//double * pD = new double[10];
//
//	//堆区开辟数组，一定会调用默认构造函数
//	Person* pPerson = new Person[10];
//	//释放数组时候  需要加[]
//	delete [] pPerson;
//
//	//栈上开辟数组，可不可以没有默认构造,可以没有默认构造
//	//Person pArray[10] = { Person(10), Person(20), Person(20) };
//}
//
//int main() 
//{
//	//test01();
//	//test02();
//	test03();
//	system("pause");
//	return 0;
//}