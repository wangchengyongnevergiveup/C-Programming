//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
////�쳣��������������
//class MyException
//{
//public:
//	MyException()
//	{
//		cout << "MyExceptionĬ�Ϲ��캯������" << endl;
//	}
//	MyException(const MyException& e)
//	{
//		cout << "MyException�������캯������" << endl;
//	}
//	~MyException()
//	{
//		cout << "MyException������������" << endl;
//	}
//};
//
//void doWork()
//{
//	throw  new MyException();
//}
//
//void test1()
//{
//	try
//	{
//		doWork();
//	}
//	//�׳����� throw MyException();  catch (MyException e) ���ÿ������캯�� Ч�ʵ�
//	//�׳����� throw MyException();  catch (MyException &e)ֻ����Ĭ�Ϲ��캯�� Ч�ʸ� �Ƽ�
//	//�׳����� throw &MyException(); catch (MyException *e)�������ǰ�ͷŵ��������ڷǷ�����
//	//�׳����� new MyException();   catch (MyException *e) ֻ����Ĭ�Ϲ��캯�� �Լ�Ҫ�����ͷ�
//	catch (MyException* e)
//	{
//		cout << "�Զ����쳣����" << endl;
//		delete e;
//	}
//}
//
//int main() 
//{
//	test1();
//	system("pause");
//	return EXIT_SUCCESS;
//}