//转义字符
// \r代表回车
// \t代表水平制表符
// \三个数字 表示这三个数字的八进制转化为十进制数所对应的ASCII码值
// \x+两个数字 表示这三个数字的十六进制转化为十进制数所对应的ASCII码值

// ASCII码中 65--A 90--Z 97--a 122--z
# include <stdio.h>
//int main()
//{
//	printf("abcn");
//	printf("abc\n");
//	printf("ab0c");
//	printf("ab\0c");
//	printf("\n");
//	printf("%s\n","\130");
//	return 0;
//}
int add(int x, int y)
{
	int z = x + y;
	return z;
}
int main()
{
	int n1 = 0;
	int n2 = 0;
	//输入
	printf("请输入两个整数");
	scanf_s("%d %d", &n1, &n2);
	//相加
	int z = add(n1, n2);
	//输出
	printf("两数之和是%d", z);
	
	return 0;
}