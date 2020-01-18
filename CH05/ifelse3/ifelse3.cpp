// ifelse3.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float a, b, c;
	printf("請輸入 A 邊長：");
	scanf_s("%f", &a);
	printf("請輸入 B 邊長：");
	scanf_s("%f", &b);
	printf("請輸入 C 邊長：");
	scanf_s("%f", &c);

	if ((pow(a, 2) + pow(b, 2)) == pow(c, 2) || (pow(a, 2) + pow(c, 2)) ==
		pow(b, 2) || (pow(b, 2) + pow(c, 2)) == pow(a, 2))
		printf("\n 這是一個直角三角形!");
	else
		printf("\n 這不是一個直角三角形!");
	printf("\n\n");
	system("PAUSE");
	return 0;
}

