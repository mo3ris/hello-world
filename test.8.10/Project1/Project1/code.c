#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//关机程序
//1，电脑运行起来后，1分钟内关机
//2，如果输入："不关机“，就取消关机
//system可以执行系统命令，如shutdown -s -t

//int main()
//{
//	char arr[20] = {0};
//	system("shutdown -s -t 60");
//	again:
//		printf("请注意，你的电脑在60秒内关机，如果输入“不关机”，就取消关机\n");
//		scanf("%s", &arr);
//		if (strcmp(arr, "不关机") == 0)
//		{
//			system("shutdown -a");
//		}
//		else
//		{
//			goto again;
//		}
//	return 0;
//}


//写一个函数找出两个整数的最大值

//int get_max(int x, int y)//max不可做函数名
//{
//	/*if(x >=y )
//	{
//		return("%d", x);
//	}
//	else
//	{
//		return y;
//	}*/
//
//	return(x > y ? x : y);
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = get_max(a, b);
//	printf("%d", c);
//	return 0;
//}


//写一个函数可以交换两个整形变量的内容；

//当实参传给形参时，形参是实参的一份临时拷贝
//对形参的修改不影响实参
//void swap(int x, int y)    //x，y叫形式参数
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//	
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("交换前：a = %d, b = %d\n", a, b);
//	//a,b叫实际参数
//	swap(a, b);
//	printf("交换后：a = %d, b = %d\n", a, b);
//
//	return 0;
//}





void swap(int *px, int *py)    //x，y叫形式参数
{
	int z = *px;
	
	*px = *py;
	*py = z;
}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	printf("交换前：a = %d, b = %d\n", a, b);
	//a,b叫实际参数
	swap(&a, &b);
	printf("交换后：a = %d, b = %d", a, b);

	return 0;
}