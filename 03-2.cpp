//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//#include "03-2circle.h"
//#include "03-2point.h"
//
///*
//���һ��Բ���ࣨAdvCircle������һ�����ࣨPoint����������Բ�Ĺ�ϵ��
//����Բ������Ϊx0, y0, �뾶Ϊr���������Ϊx1, y1��
//*/
//
////����ȫ�ֺ��� �жϵ��Բ��ϵ
//void isInCircle(Circle c, Point p)
//{
//	int distance = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) + (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
//	int rDistance = c.getR() * c.getR();
//	if (distance == rDistance)
//	{
//		cout << "����Բ��" << endl;
//	}
//	else if (distance > rDistance)
//	{
//		cout << "����Բ��" << endl;
//	}
//	else
//	{
//		cout << "����Բ��" << endl;
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