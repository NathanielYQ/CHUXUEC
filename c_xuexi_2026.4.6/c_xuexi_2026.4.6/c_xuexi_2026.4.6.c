#include <stdio.h>

//static修饰局部变量时，使得局部变量出了作用域也不销毁
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//extern 声明外部标识符号，其他源文件的全局变量可以使用
//extern int g_val1;
//int main()
//{
//	printf("%d\n", g_val1);
//	return 0;
//}

//static修饰全部变量时，使得变量失去外部链接属性，即仅存在内部链接属性
//所以该变量只有在该文件中使用，可以由上述代码以及add1代码来演示

//需要声明外部函数,
//extern int add(int x1, int x2);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = add(a, b);
//	printf("%d\n", c);
//	return 0;
//}

//register 建议计算机把变量存在寄存器中
// ---寄存器的读写速度更快

//define定义常量
//#define NUM 100
//int main()
//{
//	printf("%d\n", NUM);
//	int a = NUM;
//	int arr[NUM] = { 0 };
//	printf("%d\n", arr[0]);
//	return 0;
//}

//define定义宏----宏即完成替换
//#define ADD(x1,x2) ((x1)+(x2))//参数没有类型，后面是宏的生值，
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = ADD(a, b);
//	printf("%d\n", c);
//	return 0;
//}

//&取地址
//int main()
//{
//	int a = 10;
//	int* p = &a;//int表示a对应的数据类型，*说明p是指针变量
//	//p是一个十六进制数，即a这个变量所存放的内存的地址
//	*p = 20;//解引用操作符，*p代表p地址所指向的变量,即a
//	printf("%d\n", a);
//
//	char c = 'w';
//	char* pc = &c;
//	return 0;
//}

int main()
{
	printf(" % zu\n", sizeof(char*));
	printf(" %zu\n", sizeof(int*));
	printf(" % zu\n", sizeof(short*));
	printf(" % zu\n", sizeof(long*));
	printf(" % zu\n", sizeof(double*));
	return 0;
}