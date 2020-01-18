// for4.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	for (i = 1; i <= 10; i++)
	{
		printf("%d, ", i);
		if (i == 5)
		{
			break;		/* 離開for迴圈敘述 */
		}
	}
	system("PAUSE");
	return 0;
}

