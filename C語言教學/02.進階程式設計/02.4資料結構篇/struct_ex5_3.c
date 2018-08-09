/*
	*檔案名稱:struct_ex5_3
	*程式名稱:進階程式設計-資料結構篇---範例5_3
	*程式說明:結構陣列範例，使用strcpy()設字串給結構成員中的字串。
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

