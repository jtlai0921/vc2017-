// logical1.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>


int main()
{
	int a = 30, b = 10, c = 20;
	printf(" %d \n", a>b && a>c); 	/*  印出1，1表示true	*/
	printf(" %d \n", a>b || a<c);   	/*  印出1，1表示true 	*/
	printf(" %d \n", !(a>b));      	/*  印出0，0表示false 	*/
	system("PAUSE");
	return 0;
}

