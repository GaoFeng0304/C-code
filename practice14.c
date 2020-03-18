编写一个函数 reverse_string(char * string)（递归实现）
实现：将参数字符串中的字符反向排列。
要求：不能使用C函数库中的字符串操作函数。
1.
递归
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
void reverse_string(char *str)
{
	assert(str);
	int len = strlen(str);
	char tmp = 0;
	tmp = *str;
	*str = *(str + len - 1);
	*(str + len - 1) = '\0';
	if(strlen(str+1)>1)
	{
		reverse_string(str+1);
	}
	*(str + len - 1) = tmp;
}
int main()
{
	char str[] = "abcdefg";
    reverse_string(str);
	printf("%s\n", str);
	system("pause");
	return 0;
}
非递归
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void reverse_string(char*str, int len)
{
	int left = 0;
	int right = len;
	char tmp = 0;    //这里注意要调换的是字符串，所以定义成char类型
	while (left <= right)
	{
		tmp= str[left];    
 //要写成str[left]不能写成left,那样的话只是把数组的下标换了，没意义的
		str[left] =str[right];
		str[right]=tmp;
		left++;
		right--;
	}
}
int main()
{
	char str[] = "abcdef";
	int len = sizeof(str) / sizeof(str[0]) - 2;
//注意这里是减去2，不是1， sizeof(str)算出的值是7，不是6！！！
	reverse_string(str, len);
	printf("%s\n", str);
	system("pause");
	return 0;
}
2.递归和非递归分别实现strlen
递归
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int My_strlen(char *a)
{
	if (*a == '\0')
	{
		return 0;
	}
	else
	{
		return My_strlen(a+1) + 1;
	}
}
int main()
{
	char a[10] = "abcdefefg";
	int x = My_strlen(a);
	printf("%d\n", x);
	system("pause");
	return 0;
}
非递归
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int My_strlen(char *a)
{
	int count = 0;
	if (*a == '\0')
	{
		return 0;
	}
	else
	{
		while (*a!=0)
		{
			count++;
			a++;
		}
		return count;
	}
}
int main()
{
	char a[] = "123456789";
	int x = My_strlen(a);
	printf("%d\n", x);
	system("pause");
	return 0;
}
