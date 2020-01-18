// dowhile1.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, i, number = 1;
	printf("=== 階乘計算 ===\n\n");
	printf("輸入一個正整數：");
	scanf_s("%d", &n);
	i = n;
	do
	{
		number *= i;
		i--;
	} while (i >= 1);
	printf("\n %d ! = %d \n\n", n, number);
	system("PAUSE");
	return 0;
}

