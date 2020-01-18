// relation1.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 10, b = 3;
	printf(" %d \n", a<b); 	   	/*  印出0，0表示false*/
	printf(" %d \n", a>b);  	/*  印出1，1表示true */
	printf(" %d \n", a == b); 	/*  印出0，0表示false*/
	printf(" %d \n", a != b); 	/*  印出1，1表示true */

	system("PAUSE");
	return 0;
}

