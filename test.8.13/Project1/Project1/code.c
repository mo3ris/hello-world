#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//ѵ��
//дһ�������ж�һ���ǲ�������
//1���ܱ�4���������Ҳ��ܱ�100����������
//2���ܱ�400����������

//�����ú���
//int main()
//{
//	int year = 0;
//	for (year = 1000; 2000 >= year; year++)
//	{
//		if (((0 == year % 4) && (0 != year % 100)) || (0 == year % 400))
//			printf("%d\n", year);
//	}
//
//	return 0;
//}

//���ú���

//int is_leap_year(int x)
//{
//	if (((0 == x % 4) && (0 != x % 100)) || (0 == x % 400))
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; 2000 >= year; year++)
//	{
//		if (is_leap_year(year))
//		{
//			printf("%d\n", year);
//		}
//	}
//
//}


дһ��������ʵ��һ��������������Ķ��ֲ���

int binary_search(int arr0[], int x, int z)
{
	int left = 0;
	int right = z - 1;
	
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr0[mid] > x)
		{
			right = mid - 1;

		}
		else if (arr0[mid] < x)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
			
		}

	}
	

}


int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	//�ҵ��˷����±�
	//û�ҵ�����-1�������±����Ϊ0����ֹ���壩
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, k, sz);
	if (-1 == ret)
	{
		printf("�Ҳ���");
	}
	else
		printf("�ҵ��ˣ���%d", arr[ret]);
}


//int main()
//{
//	int arr[] = { 1,2,3 };
//	int a = sizeof(arr);
//	int b = sizeof(arr[0]);
//	int c = strlen(arr);
//	printf("%d %d %d", a, b,c);
//	
//	return 0;
//}