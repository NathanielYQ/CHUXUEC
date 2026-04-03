#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
int main()
{
	printf("hello world\n");
	int num1 = 0;
	int num2 = 0;
	scanf("%d %d", &num1,& num2);
	int sum = num1 + num2;
	printf("两数之和是%d", sum);

	return 0;

}
//常量
//1.字面常量
//2.const修饰的常变量
//3.define定义的标识符常量
//4.枚举常量