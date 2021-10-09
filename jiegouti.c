#include<stdio.h>
struct Birthday {
	int year;
	int month;
	int day;
};
  struct  IDcard {
	char name[10];
	int  age;
	char sex[10];
	struct Birthday birthday;
} ;
//结构体指针作为变量传递
void IDcardprintf(struct IDcard *pstu)
{
	printf("%s,%d,%s,%d-%d-%d\n", pstu->name, pstu->age, pstu->sex, pstu->birthday);
	//                            这不能用"."因为是指针所以要用“->”
}
//void IDcardprintf(struct IDcard stu)
//{ 
//	printf("%s,%d,%s,%d-%d-%d\n", stu.name,stu .age, stu.sex, stu.birthday);
//
//}
int main() {
	struct IDcard daxtar = { "daxtar",18,"man",{2003,06,01} };
	struct IDcard dexter = { "dexter",18,"weman",{2003,06,10} };
	struct IDcard* p = &daxtar;
	IDcardprintf(p);
	p = &dexter;
	IDcardprintf(p);

	return 0;
}
