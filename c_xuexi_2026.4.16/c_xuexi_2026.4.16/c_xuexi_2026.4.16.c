#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//getchar的解释与应用
//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", &password);//输入内容如果有空格，则会在空格处结束
//	int ret = 0;
//	while ((ret = getchar()) != '\n')//在输入缓存区拿走其他字符，getchar同样一次仅仅拿到出现空格结束
//	{
//		;
//	}
//	printf("请确认你的密码（Y/N)");
//	char queren ;
//	scanf("%s", &queren);
//	if (queren == 'Y')
//	{
//		printf("确认密码\n");
//	}
//	else
//	{
//		printf("未确认密码/n");
//	}
//	return 0;
//}

//仅打印数字代码
//int main()
//{
//	char ch = '\0';
//	while ((ch = getchar() )!= EOF)
//	{
//		if (ch < '0' || ch>'9')
//		{
//			continue;
//		}
//		putchar(ch);
//		printf("\n");
//	}
//	//仅打印输入的字符
//	return 0;
//}

//打印73，32，99，97，110，32，100，111，32，105，116，33对应的字符
int main()
{
	int arr[]={7,2,99,97,110,32,100,111,32,105,116,33};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	while (i < sz)
	{
		printf("%c", arr[i]);
		i++;
	}
	return 0;
}

