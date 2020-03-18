1. 将数组A中的内容和数组B中的内容进行交换。（数组一样大）   一定要用指针传参，这里数组会发生降维，降维成指向其类型的指针
int swap(int*A, int*B)
{
	int t;
	t = *A;
	*A = *B;
	*B = t;
}
int main()
{
	int i, j, k;
	int a[10], b[10], c[10];
	printf("请输入a");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("请输入b");
	for (j = 0; j < 10; j++)
	{
		scanf("%d", &b[j]);
	}
	for (k = 0; k < 10; k++)
	{
		swap(&a[k], &b[k]);//调用指针函数进行元素的交换
	}
	printf("交换后的a为");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	printf("交换后的b为");
	for (j = 0; j < 10; j++)
	{
		printf("%d ", b[j]);
	}
	printf("\n");
	system("pause");
	return 0;
}
2. 计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值。
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	float b = 1, c = 1,term=0, sum = 1;
	while (b < 101)
	{
		b = b + 1; c = -c; term =c*( 1 / b); sum =sum+term;
	}
	printf("它们的和是%f\n", sum);
	system("pause");
	return 0;
}
