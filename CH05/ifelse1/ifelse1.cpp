// ifelse1.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int keyin, guess;
	srand((unsigned)time(NULL));
	guess = rand() % 5 + 1;
	printf("�п�J�n�q���Ʀr(��1-5 )�G");
	scanf_s("%d", &keyin);
	if (keyin == guess)
		printf("\n�q��F! ^_^�A���T�Ʀr�� %d !\n", guess);
	else
		printf("\n�q���F! #_#�A���T�Ʀr�� %d !\n", guess);
	printf("\n");
	system("PAUSE");
	return 0;
}
