/*
	*檔案名稱:
	*程式名稱:
	*程式說明:
	*
*/

#include <stdio.h>
#include <string.h>

int main(void){

	struct date
	{
		int math;
		char test[20];
	}a[10];
	a[1].math=100;
	printf("%d\n",a[1].math);
	printf("-----strcpy開始-----\n");
	strcpy(a[1].test,"hello"); //相當於將a[1].test設字串 
	printf("strcpy後的%s\n",a[1].test);
	
	system ("pause"); //讓執行檔收到輸入才結束
	return 0;
}

