#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//���ӣ�����һ������ֵ����˳�����ÿһ����
//����1234�����1 2 3 4

//��������������Ϊ��ӡһ��������ÿһλ

//print(1234��
//print��123��4
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


//���ӣ���д��������������ʱ���������ַ����ĳ���

//���ַ����ĳ���

#include<string.h>

//int my_strlen(char* str)
//{
//	int count = 0;           //��ʱ���������ڼ�ʱ
//	while (*str != '\0')
//	{
//		count++;
//		str++;       //����һ���ַ�
//	}
//	return(count);
//}

//�ݹ�

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


