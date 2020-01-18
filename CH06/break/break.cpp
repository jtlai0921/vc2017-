// break.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

int main()
{
	char ch;
	int ans, keyin, num1, num2;
	do
	{
		printf("\n");
		printf(" 請輸入第 1 個整數：");
		scanf_s("%d", &num1);
		printf(" 請輸入第 2 個整數：");
		scanf_s("%d", &num2);
		ans = num1 + num2;
		do
		{
			printf(" %d + %d = ", num1, num2);
			scanf_s("%d", &keyin);
			if (keyin == ans)
			{
				printf(" 答對了!^_^\n");
				break;
			}
			else
			{
				printf(" 答錯了!@_@\n");
				continue;
			}
		} while (1);
		printf(" 是否(y/n)繼續：");
		ch = tolower(_getche());
		printf("\n");
	} while (ch == 'y');
	printf("\n");
	system("PAUSE");
	return 0;
}

