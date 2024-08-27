//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//#include "03-2circle.h"
//#include "03-2point.h"
//
///*
//设计一个圆形类（AdvCircle），和一个点类（Point），计算点和圆的关系。
//假如圆心坐标为x0, y0, 半径为r，点的坐标为x1, y1：
//*/
//
////利用全局函数 判断点和圆关系
//void isInCircle(Circle c, Point p)
//{
//	int distance = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) + (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
//	int rDistance = c.getR() * c.getR();
//	if (distance == rDistance)
//	{
//		cout << "点在圆上" << endl;
//	}
//	else if (distance > rDistance)
//	{
//		cout << "点在圆外" << endl;
//	}
//	else
//	{
//		cout << "点在圆内" << endl;
//	}
//}
//
//void test01()
//{
//	Point p;
//	p.setX(10);
//	p.setY(9);
//
//	Circle c;
//	Point pCenter;
//	pCenter.setX(10);
//	pCenter.setY(0);
//	c.setCenter(pCenter);
//	c.setR(10);
//
//	isInCircle(c, p);
//
//	c.isInCircleByClass(p);
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}