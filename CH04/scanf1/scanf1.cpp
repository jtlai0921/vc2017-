// scanf1.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>


int main()
{
	int yy, mm, dd;

	printf("Date : (yyyy-mm-dd) : ");
	scanf("%d-%d-%d", &yy, &mm, &dd);
	printf("\n今天日期：%d/%d/%d\n\n", yy, mm, dd);

	system("pause");
	return 0;
}

