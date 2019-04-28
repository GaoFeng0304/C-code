1.求10 个整数中最大值。 
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("请输入十个数字");
	int a[10], i=0, max;
	
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	max = a[0];//这里的a[i],i可以是0-9的任意一个数字
	for (i = 0; i < 10; i++)
	{
		if (max < a[i])
		{
			max = a[i];
		}
	}
	printf("最大的数字为:%d", max);
	system("pause");
	return 0;
}
2.将三个数按从大到小输出。 
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int x, y, z,t;
	printf("请任意输入三个整数");
	scanf("%d,%d,%d", &x, &y, &z);
	if (x < y)
	{
		t = y;
		y = x;
		x = t;
	}
	if (x < z)
	{
		t = z;
		z = x;
		x = t;
	}
	if (y < z)
	{
		t = z;
		z = y;
		y = t;
	}
	printf("从大到小的顺序为%d,%d,%d\n", x, y, z);
	system("pause");
	return 0;
}
3.求两个数的最大公约数。
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 18;
	int b = 24;
	int c = 0; 
	while (a%b!= 0)
	{
		c = a%b;
		a = b;
		b = c;
	}
	printf(" 最大公约数是%d\n", b);
	system("pause");
	return 0;
}
