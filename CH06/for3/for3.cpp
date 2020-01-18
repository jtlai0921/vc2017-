// for3.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	for (i = 10; i >= 1; i--) {
		printf("%d, ", i);
	}
	printf("\n");

	for (i = 10; i >= 1;) {
		printf("%d, ", i--);
	}
	printf("\n");

	for (i = 10; i >= 1;) {
		printf("%d, ", i);
		i--;
	}
	printf("\n");

	for (i = 10;;) {
		if (i >= 1) {
			printf("%d, ", i);
			i--;
		}
		else {
			break;
		}
	}
	printf("\n");
	system("PAUSE");
	return 0;
}

