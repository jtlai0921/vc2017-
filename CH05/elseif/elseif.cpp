// elseif.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int score;
	printf("�п�J�z�����ơG");
	scanf_s("%d", &score);
	if (score >= 80 && score <= 100)
		printf("\n Excellent! ���Ŭ� A .");
	else if (score >= 70 && score<80)
		printf("\n Good! ���Ŭ� B.");
	else if (score >= 60 && score<70)
		printf("\n Fair! ���Ŭ� C.");
	else if (score >= 0 && score<60)
		printf("\n Bad! ���Ŭ� D.");
	else
		printf("\n ��J���Z���~!  ���ƭ� 0~100 ... ");
	printf("\n\n");
	system("PAUSE");
	return 0;
}

