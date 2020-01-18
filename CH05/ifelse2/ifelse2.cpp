// ifelse2.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
	char usr_id[7];
	char pwd[5];
	printf("請輸入帳號 (限六個字元)：");
	gets_s(usr_id);
	printf("請輸入密碼 (限四個字元)：");
	gets_s(pwd);
	printf("\n");
	if (strcmp(usr_id, "yubest") == 0 && strcmp(pwd, "1688") == 0)
	{
		printf("帳號 和 密碼正確 ...  ^_^ !!\n");
		printf("歡迎進入本系統...\n\n");
	}
	else
	{
		printf("帳號 或 密碼輸入錯誤 ...  @_@ !!\n");
		printf("無法進入本系統...\n\n");
	}
	system("PAUSE");

    return 0;
}

