/*
	*檔案名稱:array_ex2
	*程式名稱:進階程式設計-陣列與字串篇---範例2 
	*程式說明:理解二維陣列的用法 
	*
*/

#include <stdio.h>
#define ROW 4
#define COL 3
void search(int a[][COL],int b[]);

int main(void){
	int a[ROW][COL]={	{26,5,7},
						{10,3,47},
						{6,76,8},
						{40,4,32}};
	int i,j;
	for(i=0;i<ROW;i++){
		for(j=0;j<COL;j++){
		printf("%02d ",a[i][j]); 	
		}
		printf("\n");
	}
	
	getchar(); //接收字元，用途：讓執行檔要停下來接收字元，讓我們可以看到結果
	return 0;
}

