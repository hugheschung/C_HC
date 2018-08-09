/*
	*檔案名稱:struct_ex10_5
	*程式名稱:進階程式設計-資料結構篇---範例10_5
	*程式說明:enum使用範例，讓使用者選擇衣服顏色。 
	*
*/

#include<stdio.h>

int main(){
	enum date{	red=114, blue=98,	green=103}shirt,hat;
	int key;
	
	do{
		printf("請輸入衣服的顏色(r、g、b):");
		scanf("%c",&key);
		fflush(stdin);
	}while((key!=red)&&(key!=blue)&&(key!=green));
	
	shirt=key;
	
	switch(shirt){
		case red:
			printf("您選擇了紅色\n");
			break;
		case blue:
			printf("您選擇了藍色\n");
			break;
		case green:
			printf("您選擇了綠色\n");
			break;
	}

	
	system ("pause");
	return 0;
}

