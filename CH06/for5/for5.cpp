// for5.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x;
	for (x = 2; x <= 5; x++)
	{
		printf(" f(%d) = %d", x, 3 * x*x + 2 * x + 1);
		printf("\n");
	}
	printf("\n");
	system("PAUSE");
	return 0;
}

