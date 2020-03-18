1.实现一个函数判断year是不是闰年。
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void leap_year(int year)
{
	if (year % 4 == 0 && year % 100 != 0 || year & 400 == 0)
	{
		printf("是闰年");
	}
	else printf("不是闰年");
}
int main()
{
	int year = 0;
	printf("请输入查询的年份");
	scanf("%d", &year);
	leap_year(year);
	printf("\n");
	system("pause");
	return 0;
}

2.
创建一个数组，
实现函数init（）初始化数组、
实现empty（）清空数组、
实现reverse（）函数完成数组元素的逆置。
要求：自己设计函数的参数，返回值。
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void Init(int arr[], int len)//初始化数组的函数
{
	int i = 0;
	for (i=0; i < len; i++)
	{
		arr[i] = i;//*(arr+i) = i;
	}
}
void Empty(int arr[], int len)//清空数组的函数
{
	int i = 0;
	for (i=0; i < len; i++)
	{
		arr[i] = 0;
	}
}
void Reverse(int *arr, int len)//数组逆置的函数
{
	int left = 0;
	int right = len - 1;
	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
void Show(int arr[], int len)//打印数组的函数
{
	int i = 0;
	for (; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[10];
	int len = sizeof(arr) / sizeof(arr[0]);
	//Init(arr, len);
	Empty(arr,len);
	Reverse(arr, len);
	Show(arr, len);
	system("pause");
	return 0;
}


