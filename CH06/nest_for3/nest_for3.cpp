// nest_for3.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, k;
	printf("\n");
	for (i = 5; i >= 1; i--)
	{
		for (k = 1; k <= i; k++)
		{
			printf(" %d", k);
		}
		printf("\n");
	}
	system("PAUSE");
	return 0;
}

