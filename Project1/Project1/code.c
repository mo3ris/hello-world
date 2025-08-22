#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//写一个代码，输入三个整数，按小到大顺序输出

//void print(int x, int y, int z)
//{
//	int m = 0;
//	int n = 0;
//	if (x > y)
//	{
//		m = x;
//		n = y;
//	}
//	else
//	{
//		m = y;
//		n = x;
//	}
//	if (m > z && n > z)
//		printf("%d %d %d", z, n, m);
//	else if (m > z && z > n)
//	{
//		printf("%d %d %d", n, z, m);
//	}
//	else if (m < z)
//		printf("%d %d %d", n, m, z);
//	else
//		printf("%d %d %d", n, m, z);
//
//
//}

//参考答案

//void swap(int* px, int* py)
//{
//	int tmp = *px;
//	*px = *py;
//	*py = tmp;
//
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//输入
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		swap(&a, &b);
//
//	}
//	if (a < c)
//	{
//		swap(&a, &c);
//	}
//	if (b < c)
//	{
//		swap(&b, &c);
//	}
//	printf("%d %d %d", c, b, a);
//
//	return 0;
//}




//写一个代码打印1 - 100之间所有三的倍数的数字

//int main()
//{
//	int i = 0;
//	/*for (i = 1; 100 > i; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d\n", i);
//		}
//	}*/
//
//	for (i = 3; 100 > i; i += 3)
//		printf("%d\n", i);
//	return 0;
//}





//给定两个数，求这两个数的最大公约数

int test(int x, int y)
{
	/*if (x > y)
	{
		return y;
	}
	else
	{
		return x;
	}*/

	int min = (x < y) ? x : y;
	return min;
}

int main()

{
	int a = 0;
	int b = 0;
	int i = 0;
	//输入
	scanf("%d %d", &a, &b);

	for (i = test(a, b); i > 0; i--)
	{
		if ((a % i == 0) && (b % i == 0))
		{
			printf("%d", i);
			break;
		}
	}
	
	return 0;
}


