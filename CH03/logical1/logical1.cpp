// logical1.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>


int main()
{
	int a = 30, b = 10, c = 20;
	printf(" %d \n", a>b && a>c); 	/*  �L�X1�A1����true	*/
	printf(" %d \n", a>b || a<c);   	/*  �L�X1�A1����true 	*/
	printf(" %d \n", !(a>b));      	/*  �L�X0�A0����false 	*/
	system("PAUSE");
	return 0;
}
