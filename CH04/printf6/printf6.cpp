// printf6.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* �ŧi�r���}�C�ΨӦs��r�� */
	char str[15] = "Hello!�z�n";
	printf(" ==|123456789012345|==\n");
	printf("1. |%s|\n", str);
	printf("2. |%5s|\n", str);
	printf("3. |%15s|\n", str);
	printf("4. |%-15s|\n", str);
	printf("5. |%10.2s|\n", str);
	printf("6. |%-10.2s|\n\n", str);
	system("PAUSE");
	return 0;
}

