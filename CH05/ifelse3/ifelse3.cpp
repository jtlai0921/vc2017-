// ifelse3.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float a, b, c;
	printf("�п�J A ����G");
	scanf_s("%f", &a);
	printf("�п�J B ����G");
	scanf_s("%f", &b);
	printf("�п�J C ����G");
	scanf_s("%f", &c);

	if ((pow(a, 2) + pow(b, 2)) == pow(c, 2) || (pow(a, 2) + pow(c, 2)) ==
		pow(b, 2) || (pow(b, 2) + pow(c, 2)) == pow(a, 2))
		printf("\n �o�O�@�Ӫ����T����!");
	else
		printf("\n �o���O�@�Ӫ����T����!");
	printf("\n\n");
	system("PAUSE");
	return 0;
}

