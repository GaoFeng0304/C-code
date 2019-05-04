1.在屏幕上输出一个菱形（可以自己设置大小的）.
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int line, i, j = 0;
	scanf("%d", &line);
	for (i = 0; i <= line - 1; i++)
	{
		for (j = 0; j < line-1- i; j++)
		{
			printf(" ");
		}
		for (j = 0; j <(2 * i) + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i <= line - 2; i++)
	{
		for (j = 0; j <i + 1; j++)
		{
			printf(" ");
		}
		for (j = 0; j<(line-i)*2-3; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
2.在一个有序数组中查找一个数字N.
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int left = 0;
	int right = 9;
	int t = 7;
	while (left <= right)
	{
		int mid = left +(right-left)/ 2;//一定要放在循环内
		if (arr[mid] > t)
		{
			right = mid - 1;
		}
		else if (arr[mid] < t)
		{
			left = mid + 1;
		}
		else
		{
			printf("找到想要找的数字了,下标是%d", mid);
			break; //不能放在下一行括号外
		}
	}
	if (left>right)
	{
		printf("找不到你想要的数字");
	}
	printf("\n");
	system("pause");
	return 0;
}
