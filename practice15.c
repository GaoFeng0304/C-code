1.编程实现：
两个int（32位）整数m和n的二进制表达中，
有多少个位(bit)不同？
输入例子:
1999 2299
输出例子:7
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int count_three_bits(unsigned int m,unsigned int n)
{
	int count = 0;
	int x = m^n;

	while (x!= 0)
	{
		x = x&(x - 1);
		count++;
	}
	return count;
}
int main()
{
	int m = 0;
	int n = 0;
	printf("请输入两个十进制的正整数");
	scanf("%d%d", &m,&n);
	int x=count_threev_bits(m,n);
	printf("它们转换成二进制后有%d个比特位不同\n",x);
	system("pause");
	return 0;
}
2.不使用（a+b）/2这种方式，求两个数的平均值.
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int average_value(int m, int n)
{
	int average = 0;
	int tmp = 0;
	average = m - (m-n) / 2;
	return average;
}
int main()
{
	int m = 0, n = 0;
	printf("请输入两个整数m，n：");
	scanf("%d%d", &m, &n);
	printf("它们的平均数是：");
	printf("%d\n",average_value(m, n));
	system("pause");
	return 0;
}
