1.编写程序数一下 1到 100 的所有整数中出现多少次数字9.
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 1, count = 0;
	for (a = 1; a < 101; a++)
	{
		if (a % 10 == 9)
		{
			count++;
		}
		if (a / 10 == 9)
		{
			count++;
		}
	}
	printf("1-100中9出现的次数为%d\n",count);
	system("pause");
	return 0;
}
2.有关一个数的阶乘.
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, i = 1, t = 1, sum = 0, j;
	printf("输入你想要的数字的阶乘");
	scanf("%d", &a);
		for (i = 1; i <= a; i++)
		{
			t = t*i;
			sum = sum + t;
		}
	printf("阶乘结果是%d\n", t);
	printf("前Sn结果是%d\n", sum);
	system("pause");
	return 0;
}
