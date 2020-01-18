// password.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main()
{
	char pw[10];
	int count = 0;
	do
	{
		count++;
		printf("第 %d 次輸入密碼：", count);
		gets_s(pw);
		if (strcmp(pw, "gotop") == 0)
		{
			break;
		}
		else if (count == 3)
		{
			printf("\n 連續三次 結束執行 .... \n");
			_getche();
			exit(0);		/* 終止程式執行 */
		}
		else
			printf(" ^_^ Sorry! 密碼有誤 ....  \n\n");
	} while (1);
	printf("密碼正確!! Pass ....\n\n");
	system("PAUSE");
	return 0;
}

