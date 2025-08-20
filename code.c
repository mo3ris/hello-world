#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//例子：输入一个整型值，按顺序输出每一个数
//输入1234，输出1 2 3 4

//构建函数：功能为打印一个整数的每一位

//print(1234）
//print（123）4
//print (12) 3 4
//print(1) 2 3 4

//void  print(unsigned int x)
//{
//	if (9 < x)
//	{
//		print( x / 10);
//	}
//	printf("%d ", x % 10);
//}
//
//int main()
//{
//	unsigned int i = 0;
//	scanf("%d", &i);
//	print(i);
//	return 0;
//}


//例子：编写函数不允许创建临时变量，求字符串的长度

//求字符串的长度

#include<string.h>

//int my_strlen(char* str)
//{
//	int count = 0;           //临时变量，用于计时
//	while (*str != '\0')
//	{
//		count++;
//		str++;       //找下一个字符
//	}
//	return(count);
//}

//递归

//my_strlen("abc")
//1 + my_strlen("bc")
//1+1+my_strlen("c")

int my_strlen(char* str)
{
	if (*str != '\0')
	{
		return 1 + my_strlen(str + 1);
	}
	else
		return 0;
}

int main()
{
	char arr[] = "abc";    //[a,b,c,\0]
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}


