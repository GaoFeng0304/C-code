1.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，输入9，输出9*9口诀表，输入12，输出12*12的乘法口诀表。
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void multiplication(int t,int i,int j,int result)
{
	for (i = 1; i <= t; i++)
	{
		for (j = 1; j <= i; j++)
		{
			result = j*i;
			printf("%d*%d=%2d ", j, i, result);
		}
		printf("\n");
	}
}
int main()
{
	
	int i=0, j=0, result=0, t;
	printf("请输入你想打印的乘法口诀表的行数t=");
	scanf("%d", &t);
        multiplication(t,i,j,result);
	system("pause");
	return 0;
}
2.使用函数实现两个数的交换。
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void swap(int *x, int *y)
{
	int t=0;
	t = *x;
	*x = *y;
	*y = t;
}
int main()
{
	void swap(int x, int y);
	int x; int y;
	printf("请输入你想调换的数字");
	scanf("%d%d", &x, &y);
	swap(&x, &y);
	printf("调换后的数字为%d  %d", x, y);
	printf("\n");
	system("pause");
	return 0;
}
