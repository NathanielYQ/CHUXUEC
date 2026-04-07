#include <stdio.h>

//struct结构体创建
struct stu
{
	char name[10];
	int age;
	char sex[10];
	char tele[12];
};
void print(struct stu* ps)//可以不取地址
{
	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);//结构体的指针变量->结构体成员名
}
int main()
{
	struct stu s = { "zhangshan",18,"nan","13319595223" };
	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);//结构体对象.成员名
	print(&s);
	return 0;
}