// scanf1.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>


int main()
{
	int yy, mm, dd;

	printf("Date : (yyyy-mm-dd) : ");
	scanf("%d-%d-%d", &yy, &mm, &dd);
	printf("\n���Ѥ���G%d/%d/%d\n\n", yy, mm, dd);

	system("pause");
	return 0;
}

