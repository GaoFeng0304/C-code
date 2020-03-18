1.给定两个整形变量的值，将两个值进行交换。注意，如果用函数的话，得注意要用指针传参
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int tmp = 0;
	int a = 10; int b = 20;
	printf("a=%d,b=%d\n", a, b);
	tmp = a;
	a = b;
	b = tmp;
	printf("a=%d,b=%d\n",a,b);
	printf("\n");
	system("pause");
	return 0;
}
2.就上一个题，不允许创建临时变量.
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 10; int b = 20;
	printf("a=%d,b=%d\n", a, b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("a=%d,b=%d\n", a, b);
	system("pause");
	return 0;
}
3.高级版解第一题
int main()
{
    int a=12,b=34,temp;
    printf("Original result: a=%d,b=%d\n",a,b);
    temp=a^b;
    a=temp^a;
    b=temp^b;
    printf("Transformed result: a=%d,b=%d\n",a,b);
    return 0;
}
