// getsputs.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

int main()
{
	char yn, usrname[10];
	int passwd;
	printf("�п�J UserName�G");
	gets_s(usrname);
	printf("�п�J PassWord�G");
	scanf_s("%4d", &passwd);
	printf("\n\n");
	printf("1. �ϥΪ̦W�١G%s \n", usrname);
	printf("2. �K      �X�G%d \n", passwd);
	printf("\n\n");
	printf(" ��J�O�_���T(Y/N)? ");
	yn = toupper(_getche()); 	/* �N��J�r���ন�j�g�A��Jyn�r���ܼƤ� */
	if (yn == 'Y')        			/* �ˬdyn�ܼƬO�_��'Y' */
	{
		puts("\n\n �i�J�t��.. �еy�� ! \n");	/*����������榹�ԭz*/
	}
	else
	{
		puts("\n\n ���}���t�� ! ...\n");    	/*������������榹�ԭz*/
	}
	system("PAUSE");
	return 0;
}

