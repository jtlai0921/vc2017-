// dowhile1.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, i, number = 1;
	printf("=== �����p�� ===\n\n");
	printf("��J�@�ӥ���ơG");
	scanf_s("%d", &n);
	i = n;
	do
	{
		number *= i;
		i--;
	} while (i >= 1);
	printf("\n %d ! = %d \n\n", n, number);
	system("PAUSE");
	return 0;
}
