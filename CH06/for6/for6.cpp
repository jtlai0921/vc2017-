// for6.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j, n, sum = 0;
	printf(" 求多項式\n (1+3)+(2+6)+(3+9)+...(n+n*3) 的總和 \n\n");
	printf(" 輸入整數(1~10) n : ");
	scanf_s("%d", &n);
	printf("\n for n = %d : \n", n);
	if (n >= 1 && n <= 10)
	{
		for (i = 1, j = 3; i <= n, j <= n * 3; i++, j += 3)
		{
			sum += (i + j);
			printf("(%d+%d)+", i, j);
		}
		printf("\b = %d\n", sum);
	}
	else
	{
		printf("\n 輸入有誤 ! 限 1∼10 間的整數!\n ");
	}
	printf("\n\n");
	system("PAUSE");
	return 0;
}

