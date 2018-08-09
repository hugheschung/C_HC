/*
	*檔案名稱:struct_ex10_4
	*程式名稱:進階程式設計-資料結構篇---範例10_4
	*程式說明:enum使用範例，列舉成員初始值與設值的差異比較。 
	*
*/

#include<stdio.h>

int main(){
	enum date{	white,black,yellow,red=114, blue=98,	green=103}shirt,hat;
	printf("白色shirt的初始值:%d\n",shirt=white);
	printf("黑色shirt的初始值:%d\n",shirt=black);
	printf("黃色shirt的初始值:%d\n",shirt=yellow);
	shirt=114;
	printf("讓shirt=114，並印出初始值:%d\n",shirt);
	shirt=blue;
	printf("讓shirt=blue，並印出初始值:%d\n",shirt);
	

	
	system ("pause");
	return 0;
}

