// ascii.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j = 0, k;
	printf("    ");
	for (k = 0; k <= 9; k++) {
		printf("%3d", k);
	}
	printf("\n");
	printf("     -----------------------------");
	for (i = 0; i <= 127; i++) {
		if (i % 10 == 0) {
			printf("\n");
			printf(" %2d|", j);
			j++;
		}
		if (i <= 31)                  /* 不可見字元 */
			printf("   ");
		else
			printf("  %c", (char)i);
	}
	printf("\n");
	system("PAUSE");

    return 0;
}

