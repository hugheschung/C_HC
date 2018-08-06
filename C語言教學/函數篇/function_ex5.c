/*
	*檔案名稱:ex5
	*程式名稱:進階程式設計-函式篇---範例5
	*程式說明:遞迴函數說明，預設值n=5，會執行5*4*3*2*1的值。 
	*
*/

#include <stdio.h>
int fac(int n); //宣告遞迴函數範例 

int main(void){
	int n=5,c;
	c=fac(n);
	printf("%d",c);
	getchar(); //接收字元，用途：讓執行檔要停下來接收字元，讓我們可以看到結果 
	return 0;
}

int fac(int n){  //遞迴函數範例 
	if (n==0){
		return 1;
	}
	else{
		return n*fac(n-1);
	}
	
}
