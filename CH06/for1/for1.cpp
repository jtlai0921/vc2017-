// for1.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	for (i = 1; i <= 10; i++)
	{
		printf(" %d", i);	/* ��ܼƦr */
		if (i < 10) printf(","); 		/* �Ʀr�᭱�[�r��,�̫�@�ӼƦr10�ٲ��r�� */
	}
	printf("\n\n");
	system("PAUSE");
	return 0;
}

