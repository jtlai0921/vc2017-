// scanf2.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>


int main()
{
	/*�ŧicname��ename�r���}�C�ΨӦs��r��*/
	char cname[20], ename[20];

	printf("\n�п�J����W�r�G");//"""Please input your chinese name :" );
	scanf("%s", &cname); 	/*��J�r���ƥؤ���*/
	printf("�A���W�r : %s ", cname);
	printf("\nPlease input your english name�G");
	scanf("%6s", &ename); 	/*��J�r�����̫e��6�Ӧr�� */
	printf("Your english name : %s", ename);
	printf("\n\n");

	system("PAUSE");
	return 0;
}

