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
//�ṹ��ָ����Ϊ��������
void IDcardprintf(struct IDcard *pstu)
{
	printf("%s,%d,%s,%d-%d-%d\n", pstu->name, pstu->age, pstu->sex, pstu->birthday);
	//                            �ⲻ����"."��Ϊ��ָ������Ҫ�á�->��
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
