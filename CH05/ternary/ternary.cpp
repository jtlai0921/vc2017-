// ternary.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int age;
	printf("=== 電影購票 ===\n");
	printf("請輸入您的年齡：");
	scanf_s("%d", &age);
	printf("您要購買票別的是 %s ! ^_^ ... \n", age >= 60 ? "優待票" :
		(0 <= age && age <= 12 ? "兒童票" : "成人票"));
	printf("\n\n");
	system("PAUSE");
	return 0;
}

