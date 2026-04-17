#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//输入生日，接受后返回生日
//int main()
//{
//	//输入
//	int year ,month, day;
//	scanf("%4d%2d%2d", &year, &month, &day);
//	//输出
//	printf("year=%d\n", year);
//	printf("month=%02d\n", month);
//	printf("day=%02d\n", day);
//	return 0;
//}

//printf返回打印的字符个数
//int main()
//{
//	int n = printf("Hello world!");
//	printf("\n%d\n", n);
//	return 0;
//}

//转义字符应用小练习
//int main()
//{
//	printf("printf(\"hello word!\\n\")");//转义字符将原本有意义的字符转义成普通字符
//	return 0;
//}

//找到最大值
int main()
{
	int arr[4];
	for (int i = 0; i < 4; i++)
	{
		scanf("%d", &arr[i]);
	}
	int max;
	max = arr[0];
	for (int i = 1; i < 4; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	printf("%d\n", max);
	return 0;
}