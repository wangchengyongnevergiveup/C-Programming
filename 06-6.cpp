//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
////继承中的对象模型
//class Base
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;  //父类中私有属性，子类访问不到，是由编译器给隐藏了
//};
//
//class Son : public Base
//{
//public:
//	int m_D;
//};
//
//void test1()
//{
//	//4  8    12   16
//	cout << "size of  Son = " << sizeof(Son) << endl; // 结果为16
//	//父类中所有非静态成员属性都会被子类继承下去
//	//父类中私有成员属性被编译器隐藏了，访问不到，但确实继承下去了
//}
//
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}