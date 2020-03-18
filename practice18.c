调整数组使奇数全部都位于偶数前面。

题目：
输入一个整数数组，实现一个函数，
来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
所有偶数位于数组的后半部分。

第一种
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void exchange(int *arr,int len)
{
	int i = 0, j = 0;
	j = len - 1;
	for (i = 0; i <= j; i++)
	{
		if (arr[i] % 2 != 0)
		{
			continue;
		}
		else
		{
			int tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
			i--;//这里i--的作用是在检查一下换过来的元素是不是奇数，以防换过来的是偶数
			j--;
		}
	}
}
int main()
{
	int i = 0;
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int len = sizeof(arr) /sizeof (arr[0]);
	exchange(arr,len);
	for (i = 0; i < len ; i++)
	{
		printf("%d  ", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
第二种
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//void Swap_arr(int *arr, int len)
int main()

{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int len = sizeof(arr) /sizeof (arr[0]);
	int left = 0;
	int right = len - 1;
	while (left < right)
	{
		//left++--->left奇数
		while (left<right && arr[left] % 2 == 1)
		{
			left++;
		}
		while (left < right && arr[right] % 2 == 0)
		{
			right--;
		}
//这里的wlile有两个作用，一是如果arr[right]是偶数的话可以过滤掉，二是arr[right]是奇数的话与前面的偶数互换
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
	for (int i = 0; i < len; i++)
			{
				printf("%d  ", arr[i]);
			}
			printf("\n");
			system("pause");
			return 0;
}
