//调用字符&
#include<stdio.h>

void test(int & x)//调用字符&表示对参数的修改带回来
{
	x = 1024;
	printf("test函数内部x=%d\n", x);
}

int main()
{
	int x = 1;
	printf("调用test前 x=%d\n", x);
	test(x);
	printf("调用test后 x=%d\n", x);

}