// for1.cpp : ﹚竡北莱ノ祘Α秈翴
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	for (i = 1; i <= 10; i++)
	{
		printf(" %d", i);	/* 陪ボ计 */
		if (i < 10) printf(","); 		/* 计硆腹,程计10菠硆腹 */
	}
	printf("\n\n");
	system("PAUSE");
	return 0;
}

