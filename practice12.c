1.写一个函数返回参数二进制中 1 的个数，比如： 15 0000 1111 4 个 1.
程序原型：
int count_one_bits(unsigned int value)
{
// 返回 1的位数
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int count_one_bits(unsigned int value)
{
	int count = 0;
	while (value != 0)
	{
		value = value&(value - 1);
		count++;
	}
	return count;
}
int main()
{
	int value = 0;
	printf("请输入一个十进制的正整数");
	scanf("%d", &value);
	int x=count_one_bits(value);
	printf("它转换成二进制后1的个数为");
	printf("%d\n", x);
	system("pause");
	return 0;
}
2.获取一个数二进制序列中所有的偶数位和奇数位，分别输出二进制序列.
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int count_one_bits(unsigned int n)
{
	int i=0, j=0;
	for (i = 0; i < 32; i += 2)
	{
		j = (n >> i) & 1;
		printf("%d  ", j);
	}
}
int count_two_bits(unsigned int n)
{
	int i = 0, j = 0;
	for (i = 1; i < 32; i += 2)
	{
		j = (n >> i) & 1;
		printf("%d  ", j);
	}
}
int main()
{
	int n = 0;
	printf("请输入一个十进制的正数");
	scanf("%d", &n);
	printf("它的奇数位二进制序列为：");
        count_one_bits(n);
	printf("\n");
	printf("它的偶数位二进制序列为：");
	count_two_bits(n);
	printf("\n");
	system("pause");
	return 0;
}
