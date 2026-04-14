//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//分支语句
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("青少年\n");
//	else if (age >= 18 && age < 28)
//		printf("青年\n");
//	else if (age >= 28 && age < 40)
//		printf("中年\n");
//	else if (age >= 40 && age < 60)
//		printf("壮年\n");
//	else if (age >= 60 && age < 100)
//		printf("老年\n");
//	else
//		printf("老寿星\n");
//	return 0;
//}

//判断一个数是否为奇数
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 2 == 1)
//		printf("奇数");
//	else
//		printf("No");
//	return 0;
//}

//打印1-100的奇数
int main()
{
	int a = 1;
	while (a >= 1 && a <= 100)
	{
		if (a % 2 == 1)
		{
			printf("%d\t", a);
		}
		a++;
	}
	return 0;
}