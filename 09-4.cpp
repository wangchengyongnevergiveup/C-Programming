//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
////异常的多态使用
////异常的基类
//class BaseException
//{
//public:
//	virtual void printError() = 0;
//};
//
////空指针异常
//class NULLPointerException :public BaseException
//{
//public:
//	virtual void printError()
//	{
//		cout << "空指针异常" << endl;
//	}
//};
//
////越界异常
//class OutOfRangeException :public BaseException
//{
//public:
//	virtual void printError()
//	{
//		cout << "越界异常" << endl;
//	}
//
//};
//
//void doWork()
//{
//	//throw NULLPointerException();
//	throw OutOfRangeException();
//}
//
//void test1()
//{
//	try
//	{
//		doWork();
//	}
//	//catch (BaseException& e)
//	catch (OutOfRangeException& e)
//	{
//		e.printError();
//	}
//}
//
//int main() 
//{
//	test1();
//	system("pause");
//	return EXIT_SUCCESS;
//}