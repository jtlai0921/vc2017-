// printf4.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf(" ==1234567890\n");
	printf("1. %#6o\n", 65);	/*8進制*/
	printf("2. %#6x\n", 65);	/*16進制*/
	printf("3. %6x\n", 65);
	printf("4. %-6x\n", 65);
	printf("5. %06x\n", 65);
	printf("6. ASCII Code of 35(Hex): \x35");
	printf("\n7. ASCII Code of 65(Oct): \065 \n\n");
	system("PAUSE");
	return 0;
}

