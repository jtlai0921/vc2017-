// for2.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	double i, j;
	for (i = 1, j = 10; i <= 10, j>8; i += 0.5, j -= 0.5)
	{
		printf("%3.1f    %3.1f ", i, j);
		printf("\n");
	}

	system("PAUSE");
	return 0;
}

