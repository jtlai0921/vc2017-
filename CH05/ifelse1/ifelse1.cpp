// ifelse1.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int keyin, guess;
	srand((unsigned)time(NULL));
	guess = rand() % 5 + 1;
	printf("請輸入要猜的數字(限1-5 )：");
	scanf_s("%d", &keyin);
	if (keyin == guess)
		printf("\n猜對了! ^_^，正確數字為 %d !\n", guess);
	else
		printf("\n猜錯了! #_#，正確數字為 %d !\n", guess);
	printf("\n");
	system("PAUSE");
	return 0;
}

