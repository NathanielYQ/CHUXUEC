#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//switch分支语句
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch(day)//必须是整型
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	default:
//		printf("打印错误\n");
//
//	}
//	return 0;
//}

//continue 和 break 的作用
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i++;
//		if (i == 5)
//			continue;//换成break效果不同
//		printf("%d\n", i);
//	}
//	return 0;
//}

//getchar与putchar
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)//getchar接收字符的ascii码值，所以类型一定要是整型
	{
		printf("%d\n", ch);//打印字符的ascii码值后末尾加一个10，为什么？？？？？？？？？
		putchar(ch);//打印直接输入的字符，通过ascii码值打印字符
	}
	return 0;
}