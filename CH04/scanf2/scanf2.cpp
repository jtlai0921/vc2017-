// scanf2.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>


int main()
{
	/*宣告cname及ename字元陣列用來存放字串*/
	char cname[20], ename[20];

	printf("\n請輸入中文名字：");//"""Please input your chinese name :" );
	scanf("%s", &cname); 	/*輸入字元數目不拘*/
	printf("你的名字 : %s ", cname);
	printf("\nPlease input your english name：");
	scanf("%6s", &ename); 	/*輸入字元取最前面6個字元 */
	printf("Your english name : %s", ename);
	printf("\n\n");

	system("PAUSE");
	return 0;
}

