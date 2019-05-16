编程实现：
一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
请找出这个数字。（使用位运算）
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[5] = { 1, 5, 1, 2, 2 };
	int ret = arr[0];
	printf("arr = %d ", arr[0]);
	int i = 0;
	for (i = 1; i < 5; i++)
	{
		ret ^= arr[i];
		printf("%d ", arr[i]);

	}
	printf("\n只出现一次的数字是 %d\n", ret);
	system("pause");
	return 0;
}
