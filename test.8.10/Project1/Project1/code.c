#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//�ػ�����
//1����������������1�����ڹػ�
//2��������룺"���ػ�������ȡ���ػ�
//system����ִ��ϵͳ�����shutdown -s -t

//int main()
//{
//	char arr[20] = {0};
//	system("shutdown -s -t 60");
//	again:
//		printf("��ע�⣬��ĵ�����60���ڹػ���������롰���ػ�������ȡ���ػ�\n");
//		scanf("%s", &arr);
//		if (strcmp(arr, "���ػ�") == 0)
//		{
//			system("shutdown -a");
//		}
//		else
//		{
//			goto again;
//		}
//	return 0;
//}


//дһ�������ҳ��������������ֵ

//int get_max(int x, int y)//max������������
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


//дһ���������Խ����������α��������ݣ�

//��ʵ�δ����β�ʱ���β���ʵ�ε�һ����ʱ����
//���βε��޸Ĳ�Ӱ��ʵ��
//void swap(int x, int y)    //x��y����ʽ����
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
//	printf("����ǰ��a = %d, b = %d\n", a, b);
//	//a,b��ʵ�ʲ���
//	swap(a, b);
//	printf("������a = %d, b = %d\n", a, b);
//
//	return 0;
//}





void swap(int *px, int *py)    //x��y����ʽ����
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
	printf("����ǰ��a = %d, b = %d\n", a, b);
	//a,b��ʵ�ʲ���
	swap(&a, &b);
	printf("������a = %d, b = %d", a, b);

	return 0;
}