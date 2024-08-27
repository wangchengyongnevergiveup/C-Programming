//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
////标准输入流
///*
//cin.get() //一次只能读取一个字符
//cin.get(一个参数) //读一个字符
//cin.get(两个参数) //可以读字符串
//cin.getline()
//cin.ignore()
//cin.peek()
//cin.putback()
//*/
//void test1()
//{
//	//输入as  第一次 a  第二次  s  第三次 换行  第四次 等待下次输入
//	char c = cin.get();
//	cout << "c = " << c << endl;
//	c = cin.get();
//	cout << "c = " << c << endl;
//	c = cin.get();
//	cout << "c = " << c << endl;
//	c = cin.get();
//	cout << "c = " << c << endl;
//}
//
//void test2()
//{
//	char buf[1024] = { 0 };
//	cin.get(buf, 1024);
//
//	char c = cin.get();
//	//利用cin.get获取字符串时候，换行符遗留在缓冲区中
//	if (c == '\n')
//	{
//		cout << "换行符遗留在缓冲区" << endl;
//	}
//	else
//	{
//		cout << "换行符不在缓冲区" << endl;
//	}
//	cout << buf << endl;
//}
//
//void test3()
//{
//	char buf[1024] = { 0 };
//	//利用cin.getline获取字符串时候，换行符不会被取走，也不在缓冲区中，而是直接扔掉
//	cin.getline(buf, 1024);
//	char c = cin.get();
//	if (c == '\n')
//	{
//		cout << "换行符遗留在缓冲区" << endl;
//	}
//	else
//	{
//		cout << "换行符不在缓冲区" << endl;
//	}
//	cout << buf << endl;
//}
//
////cin.ignore() 忽略 默认忽略1个字符， 如果填入参数X，代表忽略X个字符
//void test4()
//{
//	cin.ignore(2);
//	char c = cin.get();
//	cout << "c = " << c << endl;
//}
//
////cin.peek() 偷窥
//void test5()
//{
//	char c = cin.peek();
//	cout << "c = " << c << endl;
//	c = cin.get();
//	cout << "c = " << c << endl;
//	c = cin.get();
//	cout << "c = " << c << endl;
//}
//
////cin.putback() 放回
//void test6()
//{
//	char c = cin.get();
//	cin.putback(c);
//	char buf[1024] = { 0 };
//	cin.getline(buf, 1024);
//	cout << buf << endl;
//}
//
////案例1:判断用户输入的内容 是字符串还是数字  12345     abcde
//void test7()
//{
//	cout << "请输入一个字符串或者数字" << endl;
//	char c = cin.peek();
//	if (c >= '0' && c <= '9')
//	{
//		int num;
//		cin >> num;
//		cout << "您输入的是数字 为：" << num << endl;
//	}
//	else
//	{
//		char buf[1024] = { 0 };
//		cin >> buf;
//		cout << "您输入的是字符串 ：" << buf << endl;
//	}
//}
//
////案例2:用户输入 0 ~ 10 之间的数字，如果输入有误，重新输入
//void test8()
//{
//	cout << "请输入 0 ~ 10 之间的数字" << endl;
//	int num;
//	while (true)
//	{
//		cin >> num;
//		if (cin.fail()) // 检查输入是否失败
//		{
//			cin.clear(); // 重置标志位
//			cin.ignore(numeric_limits<streamsize>::max(), '\n'); // 忽略输入缓冲区中的所有字符直到换行符
//			cout << "输入有误，请输入一个数字：" << endl;
//		}
//		else if (num >= 0 && num <= 10)
//		{
//			cout << "输入正确，输入值为：" << num << endl;
//			break;
//		}
//		else
//		{
//			cout << "输入有误，请重新输入：" << endl;
//		}
//
//		//cin >> num;
//		//if (num >= 0 && num <= 10)
//		//{
//		//	cout << "输入正确，输入值为：" << num << endl;
//		//	break;
//		//}
//
//		////清空缓冲区 重置标志位 
//		//cin.clear();
//		//cin.sync();
//
//		//cin.ignore();//vs2013以上版本加入 
//		////如果标志位为 0  代表缓冲区正常    如果标志位为1   缓冲区异常
//		//cout << " cin.fail()  = " << cin.fail() << endl;
//		//cout << "输入有误，请重新输入： " << endl;
//	}
//}
//
//int main() 
//{
//	//test1();
//	//test2();
//	//test3();
//	//test4();
//	//test5();
//	//test6();
//	//test7();
//	test8();
//	system("pause");
//	return 0;
//}