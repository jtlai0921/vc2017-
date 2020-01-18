// dowhile2.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

int main()
{
	int i;
	char ch, keyin;
	do
	{
		printf("\n要印出幾個 * 號(限輸入1-9)：");
		keyin = _getche();
		printf("\t");
		if (keyin <= '9' && keyin >= '1')	/*判斷是否輸入 1-9*/
		{
			printf("\n輸出 :");
			i = 1;
			do
			{
				printf("*");
				i++;
			} while (i <= (keyin - '0'));
		}
		else
		{
			printf("\n錯誤 ! 請輸入1-9的數字 ……");
		}
		printf("\n\n 是否繼續印列(y/n)? ");
		ch = toupper(_getche());
		printf("\n");
	} while (ch == 'Y');
	printf("\n");
	system("PAUSE");
	return 0;
}

