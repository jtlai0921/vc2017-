// while1.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, sum = 0, i = 0;
	printf(" =�D 1 �� 100 �i�H�Qn�㰣�����=\n\n");
	printf(" �п�J 1 �� 100 ����� n�G");
	scanf_s("%d", &n);
	if (n >= 1 && n <= 100)
	{
		while (sum + n <= 100)
		{
			sum += n;
			printf("%3d,", sum);
			i++;
			if (i % 5 == 0)
			{
				printf("\n");
			}
		}
		printf("\n\n");
		printf(" �� 1 �� 100 �� %d �Ӿ�ƥi�H�Q %d �㰣 ! \n", i, n);
	}
	else
	{
		printf("��J����ƶW�X�d��!@_@\n");
	}

	system("PAUSE");
	return 0;
}
