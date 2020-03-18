1.实现一个函数，可以左旋字符串中的k个字符。
ABCD左旋一个字符得到BCDA
ABCD左旋两个字符得到CDAB

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void left(char arr[], int k, int ret)
{

	int i = 0;

	int j = 0;

	char arr1[10] = { 0 };

	for (i = 0; i < ret; i++)

	{

		if (i < ret - k)

		{

			arr1[i] = arr[i + k];

			j++;

		}

		else

		{

			arr1[i] = arr[i - j];

		}

		printf("%c ", arr1[i]);

	}

}

int main()
{

	char arr[] = "ABCDEFGH";

	int k = 0;

	scanf("%d", &k);

	int ret = 0;

	ret = strlen(arr);

	k = k%ret;

	left(arr, k, ret);
	printf("pause");
	system("pause");
	return 0;
}
2.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
给20元，可以多少汽水。
编程实现。
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//#include<assert.h>
#include<stdlib.h>


int main()
{
	int total = 0;
	int kps = 0;
	int ys = 0;
	printf("请输入钱数:");
	scanf("%d", &total);
	kps = total;
	while (kps >= 1)
	{
		kps += ys;
		total += kps / 2;
		ys = kps % 2;
		kps /= 2;
	}
	printf("能换取 %d 瓶汽水\n", total);
	system("pause");
	return 0;
}
