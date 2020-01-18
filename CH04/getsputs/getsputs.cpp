// getsputs.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

int main()
{
	char yn, usrname[10];
	int passwd;
	printf("請輸入 UserName：");
	gets_s(usrname);
	printf("請輸入 PassWord：");
	scanf_s("%4d", &passwd);
	printf("\n\n");
	printf("1. 使用者名稱：%s \n", usrname);
	printf("2. 密      碼：%d \n", passwd);
	printf("\n\n");
	printf(" 輸入是否正確(Y/N)? ");
	yn = toupper(_getche()); 	/* 將輸入字元轉成大寫，放入yn字元變數中 */
	if (yn == 'Y')        			/* 檢查yn變數是否為'Y' */
	{
		puts("\n\n 進入系統.. 請稍待 ! \n");	/*滿足條件執行此敘述*/
	}
	else
	{
		puts("\n\n 離開本系統 ! ...\n");    	/*不滿足條件執行此敘述*/
	}
	system("PAUSE");
	return 0;
}

