// nest_for1.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j;
	printf("  |  1   2   3   4   5   6   7   8   9 \n");
	printf("--------------------------------------\n");
	for (i = 1; i <= 9; i++)		/*外層迴圈*/
	{
		printf("%d | ", i);
		for (j = 1; j <= 9; j++)	/*內層迴圈*/
		{
			printf("%2d  ", (i * j));
		}
		printf("\n");
	}
	printf("\n");
	system("PAUSE");
	return 0;
}

