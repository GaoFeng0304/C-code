1.递归和非递归分别实现求n的阶乘。

用递归
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int  Fun(int n)
{
	if (n > 0)
	{
		return Fun(n-1)*n;
	}
	return 1; 
}
int main()
{
	int n = 0;
	printf("请输入你想计算的N的阶乘值:");
	scanf("%d", &n);
	printf("%d",Fun(n));
	printf("\n");
	system("pause");
	return 0;
}
非递归
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int  Fun(int n)
{
	int i = 1;
	int t = 1;
	for (i = 1; i <= n;i++)
	{
		t = t*i;
	}
	return t;
}
int main()
{
	int n = 0;
	printf("请输入你想计算的N的阶乘值:");
	scanf("%d", &n);
	printf("%d",Fun(n));
	printf("\n");
	system("pause");
	return 0;
}
2.递归方式实现打印一个整数的每一位。
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int Fun(int n)
{
	if (n>9)
	{
		Fun(n/10);
	}                             
	printf("%d  ", n % 10);
}
int main()
{
	int n = 0;
	printf("请输入你想打印整数的值:");
	scanf("%d", &n);
	int x=Fun(n);
	printf("\n");
	system("pause");
	return 0;
}

