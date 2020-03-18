1.编写一个函数实现n^k，使用递归和非递归实现。
用递归
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int Fun(int n,int k)
{
	if (k > 0)
	{
		return Fun(n, k - 1)*n;
	}
	return 1;
}
int main()
{
	int n = 0; int k = 0;
	printf("请输入你想计算的N的K次方的值:");
	scanf("%d%d", &n,&k);
	printf("%d",Fun(n,k));
	printf("\n");
	system("pause");
	return 0;
}
用迭代
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int Fun(int n,int k)
{
	int i = 0;
	int t = 1;
	for (i = 0; i < k; i++)
	{
		t = t*n;
	}
	return t;
}
int main()
{
	int n = 0; int k = 0;
	printf("请输入你想计算的N的K次方的值:");
	scanf("%d%d", &n,&k);
	printf("%d",Fun(n,k));
	printf("\n");
	system("pause");
	return 0;
}
2.写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，
例如，调用DigitSum(1729)，则应该返回1+7+2+9，它的和是19
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int Digitsum(int n)
{
	int m = 0;
	int sum = 0;
	if (n!=0)
	{
		m = n % 10;
		n = n / 10;
		sum = m + Digitsum(n);
	}
	return sum;
}
int main()
{
	int n = 0;
	printf("请输入你想打印的整数:");
	scanf("%d", &n);
	printf("它的各位数字之和为");
	printf("%d\n",Digitsum(n));
	system("pause");
	return 0;
}
如果说逆序输出一个数的每位数字的话，得用迭代
