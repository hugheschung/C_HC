/*
	*檔案名稱:array_ex1
	*程式名稱:進階程式設計-陣列與字串篇---範例1
	*程式說明:理解一維陣列的用法 
	*
*/

#include <stdio.h>
#define SIZE 4

void show(int arr[]);

int main(void){
	int A[SIZE],i;
	printf("請輸入四個字傳入A[]陣列:\n");
	for(i=0;i<SIZE;i++){
		scanf("%d",&A[i]);
	}

	printf("陣列的內容：");
	show(A);	

	getchar(); //接收字元，用途：讓執行檔要停下來接收字元，讓我們可以看到結果
	return 0;
}

void show(int arr[]){
	int i;
	for(i=0;i<SIZE;i++){
		printf("%02d ",arr[i]);
	}
}


