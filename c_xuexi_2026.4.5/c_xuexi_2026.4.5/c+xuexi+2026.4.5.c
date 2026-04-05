#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//校验\b的作用
//int main()
//{
//	printf("11111\b");
//	return 0;
//}

//下述定义的数组字符串长度不确定
//strlen-计算变量字符串个数，遇到\0后结束且个数不包括\0
//sizeof-计算变量所占的比特位
//字符0-ASCII码值48
//字符\0-ASCII码值为0
//int main()
//{
//	char arr[] = { 'a','s','d' };
//	printf("%d\n", strlen(arr));
//	return 0;
//}

//求两个数的最大值
//int max(int x1, int x2)
//{
//	if (x1 > x2)
//		return x1;
//	else
//		return x2;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf(" %d %d", &a, &b);
//	int r = max(a, b);
//	printf("%d", r);
//	return 0;
//}

//除号/与取余%
//int main()
//{
//	float a = 7 / 2.0;//除号两边都是整数的情况下求整数商，否则求一个小数商
//	int b = 7 % 2;
//	printf("%.2f\n", a);
//	printf("%d", b);
//	return 0;
//}

//后置++和前置++
//int main()
//{
//	int a = 10;
//	int b = a++;//等价于b=a;a=a+1;
//	int c = ++a;//等价于a=a+1;c=a;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	printf("%d\n", c);
//}

//强制转换类型
//int main()
//{
//	int a = (int)3.14;
//	printf("%d\n", a);
//	return 0;
//}

//逻辑操作符 &&-且  ||-或
//int main()
//{
//	int a = 1;//0代表假，非零代表真
//	int b = 1;
//	if (a && b)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//三目操作符--   表达式1？表达式2：表达式3
//表达式1为真，则输出表达式2，否则输出表达式3
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int r = a > b ? a : b;
//	printf("%d\n", r);
//	return 0;
//}

//逗号表达式 ,
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = (a = c + 1, b = 12 + a, a);//逗号隔开，表示从左往右一次执行后，输出最后一个表达式
//	printf("%d", d);
//	return 0;
//}

//类型重命名 typedef
typedef unsigned int uint;
int main()
{
	unsigned int num1 = 1;//无符号整型
	uint num2 = 3;
	return 0;
}