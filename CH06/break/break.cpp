// break.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

int main()
{
	char ch;
	int ans, keyin, num1, num2;
	do
	{
		printf("\n");
		printf(" �п�J�� 1 �Ӿ�ơG");
		scanf_s("%d", &num1);
		printf(" �п�J�� 2 �Ӿ�ơG");
		scanf_s("%d", &num2);
		ans = num1 + num2;
		do
		{
			printf(" %d + %d = ", num1, num2);
			scanf_s("%d", &keyin);
			if (keyin == ans)
			{
				printf(" ����F!^_^\n");
				break;
			}
			else
			{
				printf(" �����F!@_@\n");
				continue;
			}
		} while (1);
		printf(" �O�_(y/n)�~��G");
		ch = tolower(_getche());
		printf("\n");
	} while (ch == 'y');
	printf("\n");
	system("PAUSE");
	return 0;
}

