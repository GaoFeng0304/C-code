1.求出0～999之间的所有“水仙花数”并输出。
“水仙花数”是指一个三位数，其各位数字的立方和确好等于该数本身，如；153＝1＋5＋3?，则153是一个“水仙花数”.
在数论中，水仙花数（Narcissistic number）也称为自恋数、自幂数、阿姆斯壮数或阿姆斯特朗数（Armstrong number），是指一N位数，其各个数之N次方和等于该数。
例如153、370、371及407就是三位数的水仙花数，其各个数之立方和等于该数：
153 = 1^3 + 5^3 + 3^3。
370 = 3^3 + 7^3 + 0^3。
371 = 3^3 + 7^3 + 1^3。
407 = 4^3 + 0^3 + 7^3。

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int a,i, j, k,t;
	for (a = 1; a <1000;a++ )
	{
		t = a;
		i = t/ 100;//i是百位
		j = (t / 10) % 10;//j是十位
		k = t % 10;//k是个位
		
		if (t== pow(i, 3) + pow(j, 3) + pow(k, 3))
		{
			printf("%d ", t);
		}
	}
	printf("\n");
	system("pause");
	return 0;
}
2.求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，例如：2+22+222+2222+22222.

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,sum=0,i,t;
	printf("请输入a的值");
	scanf("%d",&a);
	t = a;
	for (i = 1; i < 5; i++)
	{  
		a = (a * 10) + t;
		sum=sum+a;
	}
	printf("Sn=a+aa+aaa+aaaa+aaaaa的前5项之和为Sn=%d", sum+t);
	printf("\n");
	system("pause");
	return 0;
}
