/*
	*檔案名稱:ex4 
	*程式名稱:進階程式設計-函式篇---範例4 
	*程式說明: 理解全域變數、靜態變數、區域變數 
	* 
*/ 


#include <stdio.h>
void test();  //宣告 靜態變數範例函式  
void test2(); //宣告 區域變數範例函式 

int a=50; //宣告整數型態的全域變數 

int main(void){
	printf("(1)main中的全域變數a=%d\n",a);
	test();
	test();
	test();
	test2();
	test2();
	test2();
	printf("(2)main中的全域變數a=%d\n",a);
	test();
	test();
	test2();
	test2();
	
	getchar(); //接收字元，用途：讓執行檔要停下來接收字元，讓我們可以看到結果 
	return 0;
}

void test(){  //靜態變數範例函式 
	static int a = 100;
	printf("靜態變數中的a=%d\n",a);
	a+=200;
}

void test2(){ //區域變數範例函式 
	int a=9;
	printf("區域變數中的a=%d\n",a);
	a+=100;   //注意此行與靜態變數的變化 
}
