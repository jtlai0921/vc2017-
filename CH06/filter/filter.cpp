// filter.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

int main()
{
	char ch;
	int n = 0, digit = 0, upper = 0, lower = 0, punct = 0, cntrl = 0, celse = 0;
	printf("=== �P�_�r�������A��ESC��i���} ===\n");
	do
	{
		printf("\n�п�J���զr���G");
		ch = _getche();
		if (ch == 27)
		{
			break;
		}
		else if (isdigit(ch))
		{
			digit++;
		}
		else if (isalpha(ch))
		{
			if (isupper(ch))
			{
				upper++;
			}
			else
			{
				lower++;
			}
		}

		else if (ispunct(ch))
		{
			punct++;
		}
		else if (iscntrl(ch))
		{
			cntrl++;
		}
		else
		{
			celse++;
		}
		n++;
	} while (1);
	printf("\n\n");
	printf("��J0-9 �Ƥl %d ��.\n", digit);
	printf("��J�j�g�r�� %d ��.\n", upper);
	printf("��J�p�g�r�� %d ��.\n", lower);
	printf("��J���I�Ÿ� %d ��.\n", punct);
	printf("��J����r�� %d ��.\n", cntrl);
	printf("��J��L���� %d ��.\n", celse);
	printf("\n");
	system("PAUSE");
	return 0;
}
