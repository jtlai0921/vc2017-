// nest_for2.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, k;
	printf("\n");
	for (i = 1; i <= 5; i++)
	{
		for (k = 1; i >= k; k++)
		{
			printf(" %d", k);
		}
		printf("\n");
	}
	system("PAUSE");
	return 0;
}

