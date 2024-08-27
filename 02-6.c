//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
////C语言下的封装:缺陷 将属性和行为分离
//struct Person
//{
//	char  name[64];
//	int age;
//};
//
//void PersonEat(struct Person* p)
//{
//	printf("%s在吃人饭\n", p->name);
//}
//
//void test01()
//{
//	struct Person p;
//	strcpy(p.name, "张三");
//	p.age = 10;
//
//	PersonEat(&p);//张三在吃人饭
//}
//
//struct Dog
//{
//	char name[64];
//	int age;
//};
//
//void DogEat(struct Dog* dog)
//{
//	printf("%s在吃狗粮\n", dog->name);
//}
//
//void test02()
//{
//	struct Dog d;
//	strcpy(d.name, "旺财");
//	d.age = 100;
//	DogEat(&d);//旺财在吃狗粮
//
//	struct Person p;
//	strcpy(p.name, "老王");
//	DogEat(&p);//老王在吃狗粮
//}
//
//int main() 
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}
